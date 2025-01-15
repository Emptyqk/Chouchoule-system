#include "admin.h"
#include "ui_admin.h"
#include "rule.h"
#include "manageuser.h"
#include "managegamble.h"
#include "mainwindow.h"
Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}



void Admin::on_usermanage_clicked()
{
    ManageUser *mu=new ManageUser();
    mu->show();
}


void Admin::on_gamblemanage_clicked()
{
    Managegamble *mg=new Managegamble();
    mg->show();
}


void Admin::on_rule_clicked()
{
    Rule *r=new Rule();
    r->show();

}


void Admin::on_exit_clicked()
{
    this->close();
    MainWindow *mw = new MainWindow();
    mw->show();
}

