#include "usercart.h"
#include "ui_usercart.h"
#include <QString>
#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>
const QString USER_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
Usercart::Usercart(const QString &username, QWidget *parent) :QWidget(parent),ui(new Ui::Usercart),
_currentUser(username)
{
    ui->setupUi(this);

    QString userCartPath = CART_PATH + _currentUser + "/";
    QDir dir;
    if (!dir.exists(userCartPath)) {
        dir.mkpath(userCartPath);
    }

    ui->tableWidget->setColumnCount(2);
    QStringList header;
    header << "选中" << "奖品名称";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    // 设置表格列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0, 80);  // 选中列固定宽度
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);  // 奖品名称列自适应

    // 显示垂直表头
    ui->tableWidget->verticalHeader()->setVisible(true);

    // 设置隔行变色
    ui->tableWidget->setAlternatingRowColors(true);

    // 加载购物车内容
    loadCart();
}

Usercart::~Usercart()
{
    delete ui;
}

void Usercart::loadCart()
{
    QString cartFile = CART_PATH + _currentUser + "/cart.txt";
    QFile file(cartFile);

    if (!file.exists()) {
        file.open(QIODevice::WriteOnly);
        file.close();
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "提示", "无法打开购物车文件");
        return;
    }

    QTextStream in(&file);
    ui->tableWidget->setRowCount(0);  // 清空表格

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (!line.isEmpty()) {
            int row = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(row);
            QTableWidgetItem *checkItem = new QTableWidgetItem;
            checkItem->setCheckState(Qt::Unchecked);
            ui->tableWidget->setItem(row, 0, checkItem);
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(line));
        }
    }

    file.close();
}

void Usercart::on_findd_clicked()
{
    QString searchText = ui->searchInput_2->text().trimmed();
    if (searchText.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入要查找的奖品名称");
        return;
    }
    bool found = false;
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *nameItem = ui->tableWidget->item(row, 1);
        if (nameItem && nameItem->text().contains(searchText, Qt::CaseInsensitive)) {
            found = true;
            ui->tableWidget->item(row, 0)->setCheckState(Qt::Checked);
        } else {
            ui->tableWidget->item(row, 0)->setCheckState(Qt::Unchecked);
        }
    }

    if (!found) {
        QMessageBox::information(this, "查找结果", "未找到匹配的奖品");
    }
}

void Usercart::on_exitt_clicked()
{
    this->close();
}
