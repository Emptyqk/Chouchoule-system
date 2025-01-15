#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "note.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


signals:



private slots:
    void handleNoteInmenu();

    void on_chooseadmin_clicked();

    void on_chooseuser_clicked();

    void on_register_2_clicked();

    void on_login_clicked();


private:
    Ui::MainWindow *ui;
    Note *ps;
    bool isAdminMode = false;

};
#endif // MAINWINDOW_H
