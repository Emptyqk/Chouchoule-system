#ifndef USERGAMBLE_H
#define USERGAMBLE_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QRandomGenerator>
#include <QDir>

namespace Ui {
class Usergamble;
}

class Usergamble : public QWidget
{
    Q_OBJECT

public:
    explicit Usergamble(const QString &username, QWidget *parent = nullptr);
    ~Usergamble();

private slots:
    void on_find_clicked();
    void on_exit_clicked();
    void saveUserInfo();

private:
    Ui::Usergamble *ui;
    QString _currentUser;
    const QString GAMBLE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/";
    const QString USER_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
    const QString CART_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/cart/";
    bool deductUserPoints(int points);
    void addToCart(const QString &prizeName);
    bool savegambleCapacity(const QString &gamblePath);
    int getPoints();
};

#endif // USERGAMBLE_H
