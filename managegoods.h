#ifndef MANAGEGOODS_H
#define MANAGEGOODS_H

#include <QWidget>
#include <QMap>
#include <QInputDialog>

namespace Ui {
class Managegoods;
}

class Managegoods : public QWidget
{
    Q_OBJECT

public:
    explicit Managegoods(const QString &gambleName, QWidget *parent = nullptr);
    ~Managegoods();

signals:
    void goodsChanged();

private slots:
    void closeEvent(QCloseEvent *event) override;
    void on_add_clicked();
    void on_deletee_clicked();
    void on_change_clicked();
    void on_find_clicked();
    void on_see_clicked();
    void on_exit_clicked();

private:
    Ui::Managegoods *ui;
    QString _gambleName;
    QString _prizesPath;
    QMap<QString, QString> _prizeFiles;

    void initializeUI();
    void fillTable();
    bool saveFile(const QString &prizeName, const QString &price, const QString &quantity);
    void savegambleCapacity(int addedQuantity);
};

#endif
