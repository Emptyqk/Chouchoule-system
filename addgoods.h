#ifndef ADDGOODS_H
#define ADDGOODS_H

#include <QWidget>

namespace Ui {
class Addgoods;
}

class Addgoods : public QWidget
{
    Q_OBJECT

public:
    explicit Addgoods(const QString &gambleName, QWidget *parent = nullptr);
    ~Addgoods();

signals:
    void goodsAdded(const QString &goodsName, const QString &price, const QString &quantity);

private slots:
    void on_addd_clicked();

private:
    Ui::Addgoods *ui;
    QString _gambleName;
    QString _prizesPath;
    bool saveFile(const QString &goodsName, const QString &price, const QString &quantity);
};

#endif // ADDGOODS_H
