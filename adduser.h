#ifndef ADDUSER_H
#define ADDUSER_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <QTextStream>
namespace Ui {
class Adduser;
}

class Adduser : public QWidget
{
    Q_OBJECT

public:
    explicit Adduser(QWidget *parent = nullptr);
    ~Adduser();

signals:
    void userAdded();

private slots:
    void on_addd_clicked();


private:
    Ui::Adduser *ui;
    bool validateInput(const QString &username, const QString &money, const QString &score);
    bool checkUserExists(const QString &username);
    bool saveUserToFile(const QString &username, const QString &money, const QString &score);
};

#endif // ADDUSER_H
