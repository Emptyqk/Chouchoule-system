#include "registeradmin.h"
#include "ui_registeradmin.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
const QString ADMIN_FILE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/admin.txt";
Registeradmin::Registeradmin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Registeradmin)
{
    ui->setupUi(this);
}

Registeradmin::~Registeradmin()
{
    delete ui;
}




void Registeradmin::on_Exit_clicked()
{
    this->close();
}


void Registeradmin::on_In_clicked()
{
    QString reg_username = ui->Username->text();
    QString reg_password = ui->Password->text();

    if (reg_username.isEmpty() || reg_password.isEmpty()) {
        QMessageBox::warning(this, "注册失败", "用户名和密码不能为空，请重新输入。");
        return;
    }
    QFile checkFile(ADMIN_FILE_PATH);
    if (checkFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&checkFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if (fields.size() >= 2 && fields[0] == reg_username) {
                QMessageBox::warning(this, "注册失败", "用户名已存在，请选择其他用户名。");
                checkFile.close();
                return;
            }
        }
        checkFile.close();
    }


    QFile file(ADMIN_FILE_PATH);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << reg_username << "," << reg_password << "\n";
        file.close();
        QMessageBox::information(this, "注册成功", "注册成功，请登录。");
        this->close();
    } else {
        QMessageBox::critical(this, "错误", "无法打开用户信息文件进行写入操作。");
    }
}

