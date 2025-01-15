#include "changegam.h"
#include "ui_changegam.h"
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>
const QString Changegam::BASE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/";

Changegam::Changegam(QWidget *parent)
    : QWidget(nullptr), ui(new Ui::Changegam), _gambleName(""), _Index(-1)
{
    ui->setupUi(this);
}

Changegam::Changegam(QWidget *parent, const QString &gambleName, int Index)
    : QWidget(parent), ui(new Ui::Changegam), _gambleName(gambleName), _Index(Index)
{
    ui->setupUi(this);

    ui->oldgamblenameinput->setText(gambleName);
    ui->oldgamblenameinput->setReadOnly(true); // 设置为只读
    QString filePath = BASE_PATH + gambleName + ".txt";
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString line = in.readLine();
        QStringList data = line.split(",");
        if (data.size() == 3) {
            ui->currentcapacityLabel->setText("当前容量: " + data[1]);
            ui->newtotalcapacityinput->setText(data[2]);
        }
        file.close();
    }
}


Changegam::~Changegam()
{
    delete ui;
}


void Changegam::on_change_clicked()
{
    QString newTotalStr = ui->newtotalcapacityinput->text().trimmed();

    if (newTotalStr.isEmpty()) {
        QMessageBox::warning(this, "提示", "总容量不能为空，请重新输入。");
        return;
    }
    bool okTotal;
    int newTotal = newTotalStr.toInt(&okTotal);
    if (!okTotal || newTotal <= 0) {
        QMessageBox::warning(this, "提示", "总容量必须为正整数，请重新输入。");
        return;
    }
    QString filePath = BASE_PATH + _gambleName + ".txt";
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法读取奖池文件。");
        return;
    }
    QTextStream in(&file);
    QString line = in.readLine();
    QStringList data = line.split(",");
    file.close();
    if (data.size() != 3) {
        QMessageBox::critical(this, "错误", "奖池文件格式错误。");
        return;
    }
    int current = data[1].toInt();
    if (newTotal < current) {
        QMessageBox::warning(this, "提示", "新总容量不能小于当前容量。");
        return;
    }
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << _gambleName << "," << current << "," << newTotal << "\n";
        file.close();
        emit gambleModified(_gambleName, QString::number(newTotal));

        QMessageBox::information(this, "成功", "奖池容量修改成功。");
        this->close();
    } else {
        QMessageBox::critical(this, "错误", "无法更新奖池文件。");
    }
}
