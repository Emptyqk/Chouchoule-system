#include "shop.h"
#include "ui_shop.h"
#include <QString>
Shop::Shop(const QString &username, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shop),
    m_currentUser(username)
{
    ui->setupUi(this);
}

Shop::~Shop()
{
    delete ui;
}

void Shop::on_pushButton_clicked()
{
    QString amountStr = ui->lineEdit->text().trimmed();
    bool ok;
    double amount = amountStr.toDouble(&ok);

    if (!ok || amount <= 0) {
        QMessageBox::warning(this, "错误", "请输入有效的充值金额！");
        return;
    }

    QFile file(USER_PATH);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法打开用户文件！");
        return;
    }

    QString content = file.readAll();
    QStringList lines = content.split("\n");
    file.resize(0);

    QTextStream out(&file);
    bool found = false;

    for (const QString &line : lines) {
        if (line.trimmed().isEmpty()) continue;

        QStringList data = line.split(",");
        if (data.size() >= 4) {
            if (data[0] == m_currentUser) {
                double balance = data[2].toDouble();
                int points = data[3].toInt();

                if (balance < amount) {
                    QMessageBox::warning(this, "错误", "余额不足！");
                    file.close();
                    return;
                }

                balance-=amount;
                points+=amount*10;//1元=10积分

                out << data[0] << "," << data[1] << ","
                    << QString::number(balance) << ","
                    << QString::number(points) << "\n";
                found = true;
            } else {
                out << line << "\n";
            }
        }
    }

    file.close();

    if (found) {
        QMessageBox::information(this, "成功",
                                 QString("成功充值！\n扣除金额：%1\n获得积分：%2").arg(amount).arg(amount * 10));
        this->close();
    }
}

void Shop::on_pushButton_2_clicked()
{
    this->close();
}
