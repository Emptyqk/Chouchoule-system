#include "addgam.h"
#include "ui_addgam.h"
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDir>
const QString BASE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/";

Addgam::Addgam(QWidget *parent)
    : QWidget(parent), ui(new Ui::Addgam)
{
    ui->setupUi(this);
}

Addgam::~Addgam()
{
    delete ui;
}

void Addgam::on_addd_clicked()
{
    QString gambleName = ui->gamblenameinput->text();
    QString totalstr = ui->totalinput->text();

    if (gambleName.isEmpty() || totalstr.isEmpty()) {
        QMessageBox::warning(this, "提示", "所有字段不能为空，请重新输入。");
        return;
    }
    bool okTotal;
    int total = totalstr.toInt(&okTotal);
    if (!okTotal || total <= 0) {
        QMessageBox::warning(this, "提示", "总容量必须为正整数，请重新输入。");
        return;
    }
    QString fileName = gambleName + ".txt";
    QString filePath = BASE_PATH + fileName;
    if (QFile::exists(filePath)) {
        QMessageBox::critical(this, "错误", "奖池名称已存在，请选择其他名称。");
        return;
    }
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << gambleName << "," << 0 << "," << total << "\n";
        file.close();
        emit gambleAdded(gambleName, "0", QString::number(total));
        QMessageBox::information(this, "添加成功", "奖池添加成功。");
        this->close(); // 关闭对话框
    } else {
        QMessageBox::critical(this, "错误", "无法创建奖池文件。");
    }
}
