#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QString>

namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(const QString &username, QWidget *parent = nullptr);  // 添加username参数
    ~User();

private slots:
    void on_rule_clicked();
    void on_gamble_clicked();
    void on_shop_clicked();
    void on_list_clicked();
    void on_exit_clicked();

private:
    Ui::User *ui;
    QString _username;
};

#endif // USER_H
