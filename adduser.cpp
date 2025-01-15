#include "adduser.h"
#include "ui_adduser.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
const QString PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";

Adduser::Adduser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Adduser)
{
    ui->setupUi(this);
}

Adduser::~Adduser()
{
    delete ui;
}

void Adduser::on_addd_clicked()
{
    QString username = ui->username->text().trimmed();
    QString money = ui->money->text().trimmed();
    QString score = ui->score->text().trimmed();
    QString password = "123456";  //设置默认密码
    if (username.isEmpty() || money.isEmpty() || score.isEmpty()) {
        QMessageBox::warning(this, "失败", "不能为空，请重新输入。");
        return;
    }
    bool okMoney, okScore;
    double _money = money.toDouble(&okMoney);
    int scoreVal = score.toInt(&okScore);
    if (!okMoney || _money < 0) {
        QMessageBox::warning(this, "失败", "请输入有效的金额数值。");
        return;
    }
    if (!okScore || scoreVal < 0) {
        QMessageBox::warning(this, "失败", "请输入有效的积分数值。");
        return;
    }
    QFile checkFile(PATH);
    if (checkFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&checkFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if (fields.size() >= 4 && fields[0] == username) {
                QMessageBox::warning(this, "失败", "用户名已存在。");
                checkFile.close();
                return;
            }
        }
        checkFile.close();
    }
    if (checkFile.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&checkFile);
        out << username << "," << password << "," << money << "," << score << "\n";
        checkFile.close();
        QMessageBox::information(this, "添加成功", "添加成功，默认密码为：123456");
        emit userAdded();  // 发送信号
        this->close();
    }
    else {
        QMessageBox::critical(this, "错误", "无法打开用户信息文件进行写入操作。");
    }
}
