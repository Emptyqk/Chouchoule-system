#include "managegoods.h"
#include "ui_managegoods.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QInputDialog>
#include "addgoods.h"

Managegoods::Managegoods(const QString &gambleName, QWidget *parent)
    : QWidget(parent), ui(new Ui::Managegoods), _gambleName(gambleName)
{
    ui->setupUi(this);

    // 奖品文件路径 (存储在奖池目录下的prizes中)
    _prizesPath = QString("C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/%1/prizes/").arg(gambleName);
    QDir dir;
    if (!dir.exists(_prizesPath)) {
        dir.mkpath(_prizesPath);
    }

    initializeUI();
    fillTable();
}

Managegoods::~Managegoods()
{
    delete ui;
}

void Managegoods::closeEvent(QCloseEvent *event)
{
    emit goodsChanged();
    QWidget::closeEvent(event);
}

void Managegoods::initializeUI()
{
    ui->tableWidget->setColumnCount(4);
    QStringList header;
    header << "选中" << "奖品名称" << "价格" << "数量";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0, 60);
    ui->tableWidget->setColumnWidth(1, 200);
    ui->tableWidget->setColumnWidth(2, 100);
    ui->tableWidget->setColumnWidth(3, 100);
    ui->tableWidget->verticalHeader()->setVisible(true);
    ui->tableWidget->setAlternatingRowColors(true);
}

void Managegoods::fillTable()
{
    ui->tableWidget->setRowCount(0);
    _prizeFiles.clear();
    QDir dir(_prizesPath);
    QStringList files = dir.entryList(QStringList() << "*.txt", QDir::Files);
    for (const QString &fileName : files) {
        QFile file(_prizesPath + fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString line = in.readLine();
            QStringList data = line.split(",");
            if (data.size() == 3) {
                QString prizeName = data[0];
                QString price = data[1];
                QString quantity = data[2];
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                QTableWidgetItem *checkItem = new QTableWidgetItem;
                checkItem->setCheckState(Qt::Unchecked);
                ui->tableWidget->setItem(row, 0, checkItem);
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(prizeName));
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(price));
                ui->tableWidget->setItem(row, 3, new QTableWidgetItem(quantity));

                // 存储奖品名称到文件路径的映射
                _prizeFiles[prizeName] = _prizesPath + fileName;
            }
            file.close();
        }
    }
}


void Managegoods::savegambleCapacity(int addedQuantity)
{
    // 奖池文件路径
    QString gambleFilePath = QString("C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/%1/%1.txt").arg(_gambleName);
    QFile file(gambleFilePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(this, "错误", "无法打开奖池文件");
        return;
    }
    QString content = file.readAll();
    QStringList data = content.split(",");
    if (data.size() < 3) {
        file.close();
        QMessageBox::warning(this, "错误", "奖池文件格式错误");
        return;
    }

    int totalQuantity = 0;
    QDir prizesDir(_prizesPath);
    QStringList files = prizesDir.entryList(QStringList() << "*.txt", QDir::Files);
    for (const QString &fileName : files) {
        QFile prizeFile(_prizesPath + fileName);
        if (prizeFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&prizeFile);
            QString line = in.readLine();
            QStringList prizeData = line.split(",");
            if (prizeData.size() == 3) {
                totalQuantity += prizeData[2].toInt();
            }
            prizeFile.close();
        }
    }

    data[1] = QString::number(totalQuantity);
    file.seek(0);
    file.resize(0);
    QTextStream out(&file);
    out << data.join(",");
    file.close();

    QMessageBox::information(this, "成功", QString("奖池当前容量已更新为：%1").arg(totalQuantity));
}



bool Managegoods::saveFile(const QString &prizeName, const QString &price, const QString &quantity)
{
    // 奖品文件路径
    QString prizeFilePath = _prizesPath + prizeName + ".txt";
    QFile file(prizeFilePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << prizeName << "," << price << "," << quantity;
        file.close();
        return true;
    }
    QMessageBox::warning(this, "错误", "无法创建奖品文件");
    return false;
}

void Managegoods::on_add_clicked()
{
    Addgoods *addDialog = new Addgoods(_gambleName);

    connect(addDialog, &Addgoods::goodsAdded, this, [this](const QString &goodsName, const QString &price, const QString &quantity) {
        bool nameExists = false;
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            if (ui->tableWidget->item(row, 1)->text() == goodsName) {
                nameExists = true;
                break;
            }
        }
        if (nameExists) {
            QMessageBox::warning(this, "警告", "该奖品名称已存在！");
            return;
        }
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        QTableWidgetItem *checkItem = new QTableWidgetItem;
        checkItem->setCheckState(Qt::Unchecked);
        ui->tableWidget->setItem(row, 0, checkItem);
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(goodsName));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(price));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(quantity));
        _prizeFiles[goodsName] = _prizesPath + goodsName + ".txt";
    });

    addDialog->show();
}



void Managegoods::on_deletee_clicked()
{
    QList<int> rowsDelete;
    QStringList filesDelete;
    int totalQuantityToRemove = 0;
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            rowsDelete.append(row);
            QString prizeName = ui->tableWidget->item(row, 1)->text();
            if (_prizeFiles.contains(prizeName)) {
                filesDelete.append(_prizeFiles[prizeName]);
                totalQuantityToRemove += ui->tableWidget->item(row, 3)->text().toInt();
            }
        }
    }
    if (rowsDelete.isEmpty()) {
        QMessageBox::warning(this, "提示", "请选择要删除的奖品");
        return;
    }

    if (QMessageBox::question(this, "确认删除",
                              QString("确定要删除选中的 %1 个奖品吗？").arg(rowsDelete.size()),
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::No) {
        return;
    }

    bool allDeleted = true;
    for (const QString &filePath : filesDelete) {
        if (!QFile::remove(filePath)) {
            allDeleted = false;
        }
    }

    // 从表格中删除行（从后向前删除）
    for (int i = rowsDelete.size() - 1; i >= 0; --i) {
        ui->tableWidget->removeRow(rowsDelete[i]);
    }

    // 更新奖品文件映射
    _prizeFiles.clear();
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QString prizeName = ui->tableWidget->item(row, 1)->text();
        _prizeFiles[prizeName] = _prizesPath + prizeName + ".txt";
    }

    savegambleCapacity(-totalQuantityToRemove);

    if (allDeleted) {
        QMessageBox::information(this, "成功", "选中的奖品已成功删除");
    } else {
        QMessageBox::warning(this, "警告", "部分奖品文件删除失败");
    }
}

void Managegoods::on_change_clicked()
{
    QList<int> selectedRows;
    QString selectedPrizeName;
    QString currentQuantity;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            selectedRows.append(row);
            selectedPrizeName = ui->tableWidget->item(row, 1)->text();
            currentQuantity = ui->tableWidget->item(row, 3)->text();
        }
    }
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "提示", "请选择要修改的奖品");
        return;
    }
    if (selectedRows.size() > 1) {
        QMessageBox::warning(this, "提示", "一次只能修改一个奖品");
        return;
    }
    bool ok;
    QString newQuantity = QInputDialog::getText(this, "修改奖品数量",
                                                "当前数量: " + currentQuantity + "\n请输入新数量:",
                                                QLineEdit::Normal, currentQuantity, &ok);
    if (!ok || newQuantity.isEmpty()) {
        return;
    }
    bool okQuant;
    int quantity = newQuantity.toInt(&okQuant);
    if (!okQuant || quantity < 0) {
        QMessageBox::warning(this, "错误", "数量必须是非负整数");
        return;
    }
    QString filePath = _prizeFiles[selectedPrizeName];
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString line = in.readLine();
        QStringList data = line.split(",");
        file.close();

        if (data.size() == 3) {
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << data[0] << "," << data[1] << "," << newQuantity << "\n";
                file.close();

                // 更新表格显示
                ui->tableWidget->item(selectedRows.first(), 3)->setText(newQuantity);
                QMessageBox::information(this, "成功", "奖品数量修改成功");
            } else {
                QMessageBox::critical(this, "错误", "无法更新奖品文件");
            }
        }
    }
}

void Managegoods::on_find_clicked()
{
    QString searchText = ui->searchInput->text().trimmed();
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

void Managegoods::on_see_clicked()
{
    fillTable();
    QMessageBox::information(this, "刷新", "奖品列表已刷新");

}

void Managegoods::on_exit_clicked()
{
    this->close();

}
