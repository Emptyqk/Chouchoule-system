#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "note.h"
#include "registeradmin.h"
#include "registeruser.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "admin.h"
#include "user.h"
const QString ADMIN_FILE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/admin.txt";
const QString USER_FILE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ps = new Note(this);
    connect(ps, &Note::inmenu, this, &MainWindow::handleNoteInmenu);
    isAdminMode = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::handleNoteInmenu()
{
    ps->close();
    this->show();
}




void MainWindow::on_chooseadmin_clicked()
{
    isAdminMode=true;
}


void MainWindow::on_chooseuser_clicked()
{
    isAdminMode = false;
}


void MainWindow::on_register_2_clicked()
{
    if (isAdminMode==true) {
        Registeradmin *R1=new Registeradmin();
        R1->show();
    }else{
        Registeruser *R2=new Registeruser();
        R2->show();
    }
}
void MainWindow::on_login_clicked()
{
    if (isAdminMode==true) {
        QString inputusername1 =ui->UsernameInput->text();
        QString inputpassword1 =ui->PasswordInput->text();
        QFile f1(ADMIN_FILE_PATH);
        if(f1.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream in(&f1);
            bool found1=false;
            while(!in.atEnd()){
                QString line = in.readLine();
                QStringList admin=line.split(",");
                if(admin.size()==2){
                    QString stored_adminusername = admin[0];
                    QString stored_adminpassword = admin[1];
                    if(inputusername1 == stored_adminusername && inputpassword1 == stored_adminpassword){
                        found1=true;
                        break;
                    }
                }
            }
            f1.close();
            if(found1){
                QMessageBox::information(this,"登录成功", "欢迎登录！");
                Admin *a=new Admin();
                this->close();
                a->show();
            }else{
                QMessageBox::warning(this, "登录失败", "用户名或密码错误，请重新输入。");
            }
        }
    }
    else{
        QString inputusername2 =ui->UsernameInput->text();
        QString inputpassword2 =ui->PasswordInput->text();
        QFile f2(USER_FILE_PATH);
        if(f2.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream in(&f2);
            bool found2=false;
            while(!in.atEnd()){
                QString line = in.readLine();
                QStringList user=line.split(",");
                if(user.size()==4){
                    QString stored_userusername = user[0];
                    QString stored_userpassword = user[1];
                    if(inputusername2 == stored_userusername && inputpassword2 == stored_userpassword){
                        found2=true;
                        break;
                    }
                }
            }
            f2.close();
            if(found2){
                QMessageBox::information(this,"登录成功", "欢迎登录！");
                User *u = new User(inputusername2);
                this->close();
                u->show();
            }else{
                QMessageBox::warning(this, "登录失败", "用户名或密码错误，请重新输入。");
            }
        }
    }
}


