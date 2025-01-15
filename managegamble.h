#ifndef MANAGEGAMBLE_H
#define MANAGEGAMBLE_H

#include <QWidget>
#include <QMap>
#include "addgam.h"

namespace Ui {
class Managegamble;
}

class Managegamble : public QWidget
{
    Q_OBJECT

public:
    explicit Managegamble(QWidget *parent = nullptr);
    ~Managegamble();

private slots:
    void on_add_clicked();
    void on_deletee_clicked();
    void on_change_clicked();
    void on_find_clicked();
    void on_exit_clicked();
    void on_see_clicked();

private:
    Ui::Managegamble *ui;
    Addgam *ad;
    // 奖池文件路径
    static const QString BASE_PATH;
    // 奖池名称到文件路径的映射
    QMap<QString, QString> _gambleFiles;
    void fillTable();
};

#endif // MANAGEGAMBLE_H
