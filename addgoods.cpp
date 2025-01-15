#include "addgoods.h"
#include "ui_addgoods.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>

Addgoods::Addgoods(const QString &gambleName, QWidget *parent)
    : QWidget(parent), ui(new Ui::Addgoods), _gambleName(gambleName)
{
    ui->setupUi(this);
    setWindowTitle("添加奖品到 " + gambleName);
    _prizesPath = QString("C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/%1/prizes/").arg(gambleName);

    QDir dir;
    if (!dir.exists(_prizesPath)) {
        dir.mkpath(_prizesPath);
    }
}

Addgoods::~Addgoods()
{
    delete ui;
}

void Addgoods::on_addd_clicked()
{
    QString goodsName = ui->goodsNameInput->text().trimmed();
    QString price = ui->priceInput->text().trimmed();
    QString quantity = ui->quantityInput->text().trimmed();

    if (goodsName.isEmpty() || price.isEmpty() || quantity.isEmpty()) {
        QMessageBox::warning(this, "提示", "所有字段都必须填写");
        return;
    }
    bool okPrice, okQuantity;
    double _price = price.toDouble(&okPrice);
    int _quantity = quantity.toInt(&okQuantity);

    if (!okPrice || _price <= 0) {
        QMessageBox::warning(this, "提示", "价格必须是正数");
        return;
    }
    if (!okQuantity || _quantity < 0) {
        QMessageBox::warning(this, "提示", "数量必须是非负整数");
        return;
    }
    if (saveFile(goodsName, price, quantity)) {
        emit goodsAdded(goodsName, price, quantity);
        QMessageBox::information(this, "成功", "奖品添加成功");
        this->close();
    }
}

bool Addgoods::saveFile(const QString &goodsName, const QString &price, const QString &quantity)
{
    QString filePath = _prizesPath + goodsName + ".txt";
    if (QFile::exists(filePath)) {
        QMessageBox::warning(this, "错误", "该奖品已存在");
        return false;
    }
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << goodsName << "," << price << "," << quantity << "\n";
        file.close();
        return true;
    }
    QMessageBox::critical(this, "错误", "无法创建奖品文件");
    return false;
}
