#ifndef USERCART_H
#define USERCART_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>
namespace Ui {
class Usercart;
}

class Usercart : public QWidget
{
    Q_OBJECT

public:
    explicit Usercart(const QString &username, QWidget *parent = nullptr);
    ~Usercart();

private slots:
    void on_findd_clicked();  // 查找按钮
    void on_exitt_clicked();  // 退出按钮

private:
    Ui::Usercart *ui;
    QString _currentUser;
    const QString CART_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/cart/";

    void loadCart();
};

#endif // USERCART_H
