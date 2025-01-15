#include "manageuser.h"
#include "ui_manageuser.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "adduser.h"
#include <QList>
#include <QStringList>
#include "changeuser.h"
const QString USER_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
ManageUser::ManageUser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ManageUser)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(4);
    QStringList header;
    header<<"选中"<<"用户名"<<"余额"<<"积分";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0,80);
    ui->tableWidget->setColumnWidth(2,80);
    ui->tableWidget->setColumnWidth(3,80);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(true);
    ui->tableWidget->setAlternatingRowColors(true);
    this->fillTable();
}

ManageUser::~ManageUser()
{
    delete ui;
}

void ManageUser::refreshTable()
{
    ui->tableWidget->setRowCount(0);
    QFile file(USER_PATH);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.trimmed().isEmpty()) continue;
            QStringList userData = line.split(",");
            if (userData.size() >= 4) {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                QTableWidgetItem *checkItem = new QTableWidgetItem;
                checkItem->setCheckState(Qt::Unchecked);
                ui->tableWidget->setItem(row, 0, checkItem);
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(userData[0]));
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(userData[2]));
                ui->tableWidget->setItem(row, 3, new QTableWidgetItem(userData[3]));
            }
        }
        file.close();
    }
}

void ManageUser::fillTable()
{
    const QString USER_FILE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
    QFile file(USER_FILE_PATH);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTableWidget *tableWidget = ui->tableWidget;
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.trimmed().isEmpty()) continue;
            QStringList userData = line.split(",");
            if (userData.size() >= 4)
            {
                int row = tableWidget->rowCount();
                tableWidget->insertRow(row);
                QTableWidgetItem *checkItem = new QTableWidgetItem;
                checkItem->setCheckState(Qt::Unchecked);
                tableWidget->setItem(row, 0, checkItem);
                tableWidget->setItem(row, 1, new QTableWidgetItem(userData[0]));
                tableWidget->setItem(row, 2, new QTableWidgetItem(userData[2]));
                tableWidget->setItem(row, 3, new QTableWidgetItem(userData[3]));
            }
        }
        file.close();
    }
    else
    {
        QMessageBox::critical(this, "错误", "无法打开用户信息文件进行读取操作。");
    }
}

void ManageUser::on_add_clicked() {
    Adduser *au = new Adduser();
    connect(au, &Adduser::userAdded, this, &ManageUser::refreshTable);
    au->setAttribute(Qt::WA_DeleteOnClose);
    au->show();
}


void ManageUser::saveFile(const QList<int> &rowsDeleted) {
    const QString PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/user.txt";
    QFile file(PATH);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法打开用户信息文件进行读取操作。");
        return;
    }
    QTextStream in(&file);
    QStringList userRecords;
    while (!in.atEnd()) {
        userRecords.append(in.readLine());
    }
    file.close();

    for (int i = rowsDeleted.size() - 1; i >= 0; --i) {
        int row = rowsDeleted[i];
        if (row < userRecords.size()) {
            userRecords.removeAt(row);
        }
    }

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法打开用户信息文件进行写入操作。");
        return;
    }

    QTextStream out(&file);
    for (const QString &record : userRecords) {
        out << record << "\n";
    }
    file.close();
}

void ManageUser::on_deletee_clicked() {
    QTableWidget *tableWidget = ui->tableWidget;
    QList<int> rowsDeleted;
    for (int row = 0; row < tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            rowsDeleted.append(row);
        }
    }

    if (rowsDeleted.isEmpty()) {
        QMessageBox::information(this, "提示", "请选中要删除的行。");
        return;
    }

    int ret = QMessageBox::warning(this, "确认删除", "确定要删除选中的用户吗？",
        QMessageBox::Yes | QMessageBox::No);
    if (ret == QMessageBox::No) {
        return;
    }

    for (int i = rowsDeleted.size() - 1; i >= 0; --i) {
        int row = rowsDeleted[i];
        tableWidget->removeRow(row);
    }
    saveFile(rowsDeleted);
    QMessageBox::information(this, "成功", "用户删除成功。");

}


void ManageUser::on_find_clicked()
{
    QString shuru = ui->input->text();
    QTableWidget *tableWidget = ui->tableWidget;
    if (shuru.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入查找内容");
        return;
    }
    bool found = false;
    for (int row = 0; row < tableWidget->rowCount(); ++row){
        QTableWidgetItem *item = tableWidget->item(row, 1);
        if (item)
        {
            QString content = item->text();
            if (content.contains(shuru)){
                found = true;
                QTableWidgetItem *checkItem = tableWidget->item(row, 0);
                if (checkItem)
                {
                    checkItem->setCheckState(Qt::Checked);
                }
            }
        }
    }
    if (!found)
    {
        QMessageBox::warning(this, "错误", "您查找的内容不存在！");
    }
}

void ManageUser::on_exit_clicked(){
    this->close();
}


void ManageUser::on_change_clicked()
{
    QTableWidget *tableWidget = ui->tableWidget;
    QList<QString> selectedUsernames;
    QList<QString> selectedMoneys;
    QList<QString> selectedScores;
    for (int row = 0; row < tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            QTableWidgetItem *usernameItem = tableWidget->item(row, 1);
            QTableWidgetItem *moneyItem = tableWidget->item(row, 2);
            QTableWidgetItem *scoreItem = tableWidget->item(row, 3);
            if (usernameItem && moneyItem && scoreItem) {
                selectedUsernames.append(usernameItem->text());
                selectedMoneys.append(moneyItem->text());
                selectedScores.append(scoreItem->text());
            }
        }
    }

    if (selectedUsernames.isEmpty()) {
        QMessageBox::warning(this, "错误", "未选中元素！");
        return;
    }
    if(selectedUsernames.size()>1){
        QMessageBox::warning(this, "错误", "一次只能修改一位用户！");
        return ;
    }

    Changeuser *cu = new Changeuser(selectedUsernames, selectedMoneys, selectedScores);
    cu->show();
}

