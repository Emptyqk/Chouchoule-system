#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_usermanage_clicked();

    void on_gamblemanage_clicked();

    void on_rule_clicked();

    void on_exit_clicked();

private:
    Ui::Admin *ui;

};

#endif // ADMIN_H
