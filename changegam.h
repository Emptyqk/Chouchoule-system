#ifndef CHANGEGAM_H
#define CHANGEGAM_H

#include <QWidget>
#include <QString>

namespace Ui {
class Changegam;
}

class Changegam : public QWidget
{
    Q_OBJECT

public:
    explicit Changegam(QWidget *parent = nullptr);
    explicit Changegam(QWidget *parent, const QString &gambleName, int index);
    ~Changegam();

signals:
    void gambleModified(const QString &gambleName, const QString &newTotal);

private slots:
    void on_change_clicked();

private:
    Ui::Changegam *ui;
    QString _gambleName;
    int _Index;
    static const QString BASE_PATH;
};

#endif // CHANGEGAM_H
