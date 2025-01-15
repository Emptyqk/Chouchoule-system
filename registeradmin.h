#ifndef REGISTERADMIN_H
#define REGISTERADMIN_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class Registeradmin;
}

class Registeradmin : public QWidget
{
    Q_OBJECT

public:
    explicit Registeradmin(QWidget *parent = nullptr);
    ~Registeradmin();

private slots:


    void on_Exit_clicked();
    void on_In_clicked();

private:
    Ui::Registeradmin *ui;
    MainWindow *mw;
};

#endif // REGISTERADMIN_H
