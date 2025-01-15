#include "note.h"
#include "ui_note.h"
#include "mainwindow.h"

Note::Note(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Note)
{
    ui->setupUi(this);

}

Note::~Note()
{
    delete ui;
}


void Note::on_tomenu_clicked()
{
    this->hide();
    emit inmenu();
}

