#include "changeuser.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
const QString PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";

Changeuser::Changeuser(const QList<QString> &usernames, const QList<QString> &moneys, const QList<QString> &scores, QWidget *parent)
    : QWidget(parent), ui(new Ui::Changeuser),
    originalUsernames(usernames), originalMoneys(moneys), originalScores(scores)
{
    ui->setupUi(this);
    for (int i = 0; i < originalUsernames.size(); ++i) {
        ui->newusernameinput->setText(originalUsernames[i]);
        ui->newmoneyinput->setText(originalMoneys[i]);
        ui->newscoreinput->setText(originalScores[i]);
    }
}

Changeuser::~Changeuser()
{
    delete ui;
}

void Changeuser::on_change_clicked()
{
    QString newUsername = ui->newusernameinput->text().trimmed();
    QString newMoney = ui->newmoneyinput->text().trimmed();
    QString newScore = ui->newscoreinput->text().trimmed();

    if (newUsername.isEmpty() || newMoney.isEmpty() || newScore.isEmpty()) {
        QMessageBox::warning(this, "提示", "输入的修改内容不能为空，请重新输入。");
        return;
    }
    QFile file(PATH);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QStringList userRecords;
        while (!in.atEnd()) {
            userRecords.append(in.readLine());
        }
        file.close();

        bool flag = false;
        for (int i = 0; i < originalUsernames.size(); ++i) {
            for (int j = 0; j < userRecords.size(); ++j) {
                QStringList userData = userRecords[j].split(",");
                if (userData.size() >= 4 && userData[0] == originalUsernames[i]) {
                    QString password = userData[1];  //保持原密码不变
                    userData[0] = newUsername;
                    userData[2] = newMoney;
                    userData[3] = newScore;
                    userRecords[j] = userData.join(",");
                    flag = true;
                    break;
                }
            }
        }

        if (flag) {
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                for (const QString &record : userRecords) {
                    out << record << "\n";
                }
                file.close();
                QMessageBox::information(this, "成功", "修改成功！");
                emit userChanged();  // 发送信号
                this->close();
            }
        }
    }
}
