
#include "registeruser.h"
#include "ui_registeruser.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

const QString USER_FILE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
Registeruser::Registeruser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Registeruser)
{
    ui->setupUi(this);
}

Registeruser::~Registeruser()
{
    delete ui;
}

void Registeruser::on_Exit_clicked()
{
    this->close();
}




void Registeruser::on_In_clicked()
{
    QString username = ui->Usernameus->text().trimmed();
    QString password = ui->Passwordus->text().trimmed();
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "注册失败", "用户名和密码不能为空，请重新输入。");
        return;
    }

    QFile checkFile(USER_FILE_PATH);
    if (checkFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&checkFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if (fields.size() >= 4 && fields[0] == username) {
                QMessageBox::warning(this, "注册失败", "用户名已存在，请选择其他用户名。");
                checkFile.close();
                return;
            }
        }
        checkFile.close();
    }
    QFile file(USER_FILE_PATH);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << username << "," << password << ",0,0\n";  //新用户初始余额和积分为0
        file.close();
        QMessageBox::information(this, "注册成功", "注册成功，请登录。");
        this->close();
    } else {
        QMessageBox::critical(this, "错误", "无法打开用户信息文件进行写入操作。");
    }
}
