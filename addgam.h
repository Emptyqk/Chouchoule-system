#ifndef ADDGAM_H
#define ADDGAM_H

#include <QWidget>
#include <QString>

namespace Ui {
class Addgam;
}

class Addgam : public QWidget
{
    Q_OBJECT

public:
    explicit Addgam(QWidget *parent = nullptr);
    ~Addgam();

signals:
    void gambleAdded(const QString &gambleName, const QString &current, const QString &total);

private slots:
    void on_addd_clicked();

private:
    Ui::Addgam *ui;
};

#endif // ADDGAM_H
