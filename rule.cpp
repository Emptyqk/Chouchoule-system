#include "rule.h"
#include "ui_rule.h"

Rule::Rule(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rule)
{
    ui->setupUi(this);
}

Rule::~Rule()
{
    delete ui;
}

void Rule::on_pushButton_clicked()
{
    this->close();
}

