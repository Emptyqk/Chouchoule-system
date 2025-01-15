#ifndef SHOP_H
#define SHOP_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class Shop;
}

class Shop : public QWidget
{
    Q_OBJECT

public:
    explicit Shop(const QString &username, QWidget *parent = nullptr);
    ~Shop();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Shop *ui;
    QString m_currentUser;
    const QString USER_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
    bool updateUserBalance(const QString &username, double amount);
};

#endif // SHOP_H
