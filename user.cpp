#include "user.h"
#include "ui_user.h"
#include "rule.h"
#include "shop.h"
#include "usercart.h"
#include "usergamble.h"
#include "mainwindow.h"
User::User(const QString &username, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User),
    _username(username)
{
    ui->setupUi(this);
    setWindowTitle("欢迎使用抽抽乐! " + username + "，您好！" );
}

User::~User()
{
    delete ui;
}

void User::on_gamble_clicked()
{
    Usergamble *ug = new Usergamble(_username, this);
    ug->show();
}

void User::on_shop_clicked()
{
    Shop *sp = new Shop(_username);  // 传递用户名
    sp->show();
}

void User::on_list_clicked()
{
    Usercart *uc = new Usercart(_username, this);  // 传递用户名
    uc->show();
}

void User::on_rule_clicked()
{
    Rule *r = new Rule(this);
    r->show();
}


void User::on_exit_clicked()
{
    this->close();
    MainWindow *mw = new MainWindow();
    mw->show();
}


