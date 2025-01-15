#ifndef REGISTERUSER_H
#define REGISTERUSER_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Registeruser;
}

class Registeruser : public QWidget
{
    Q_OBJECT

public:
    explicit Registeruser(QWidget *parent = nullptr);
    ~Registeruser();

private slots:


    void on_Exit_clicked();

    void on_In_clicked();

private:
    Ui::Registeruser *ui;
    MainWindow *mw;
};

#endif // REGISTERUSER_H
