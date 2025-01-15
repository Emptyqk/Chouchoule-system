#include <QWidget>
#include <QStringList>
#include "ui_changeuser.h"

class Changeuser : public QWidget
{
    Q_OBJECT
public:
    Changeuser(const QList<QString> &usernames, const QList<QString> &moneys, const QList<QString> &scores, QWidget *parent = nullptr);
    ~Changeuser();

signals:
    void userChanged();

private slots:
    void on_change_clicked();

private:
    Ui::Changeuser *ui;
    QList<QString> originalUsernames;
    QList<QString> originalMoneys;
    QList<QString> originalScores;
};
