#ifndef MANAGEUSER_H
#define MANAGEUSER_H

#include <QWidget>
#include <QList>
#include <QStringList>
namespace Ui {
class ManageUser;
}

class ManageUser : public QWidget
{
    Q_OBJECT

public:
    explicit ManageUser(QWidget *parent = nullptr);
    ~ManageUser();

private slots:
    void refreshTable();  //刷新表格的槽函数

    void on_add_clicked();

    void saveFile(const QList<int> &rowsDelete);

    void on_deletee_clicked();

    void on_find_clicked();

    void on_exit_clicked();

    void on_change_clicked();

    void fillTable();



private:
    Ui::ManageUser *ui;

};

#endif // MANAGEUSER_H
