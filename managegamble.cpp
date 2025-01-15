#include "managegamble.h"
#include "ui_managegamble.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include "addgam.h"
#include "changegam.h"
#include "managegoods.h"
const QString Managegamble::BASE_PATH = "C:/Users/76742/Desktop/大学作业/C++/大二上/Chouchoule/gamble/";

Managegamble::Managegamble(QWidget *parent)
    : QWidget(parent), ui(new Ui::Managegamble)
{
    ui->setupUi(this);

    // 设置表格列数和表头
    ui->tableWidget->setColumnCount(4);
    QStringList header;
    header << "选中" << "奖池名" << "当前容量" << "总容量";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    // 设置表格列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0, 80);
    ui->tableWidget->setColumnWidth(2, 80);
    ui->tableWidget->setColumnWidth(3, 80);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    // 显示垂直表头
    ui->tableWidget->verticalHeader()->setVisible(true);
    // 设置隔行变色
    ui->tableWidget->setAlternatingRowColors(true);
    // 创建奖池目录（如果不存在）
    QDir dir;
    if (!dir.exists(BASE_PATH)) {
        dir.mkpath(BASE_PATH);
    }
    fillTable();
}

Managegamble::~Managegamble()
{
    delete ui;
}

void Managegamble::on_add_clicked()
{
    Addgam *ad = new Addgam();
    connect(ad, &Addgam::gambleAdded, this, [this](const QString &gambleName, const QString &current, const QString &total) {
        QString outsideFile = BASE_PATH + gambleName + ".txt";
        if (QFile::exists(outsideFile)) {
            QFile::remove(outsideFile);//复用
        }
        QString gamblePath = BASE_PATH + gambleName;
        QDir dir;
        if (!dir.mkpath(gamblePath)) {
            QMessageBox::warning(this, "警告", "创建奖池文件夹失败");
            return;
        }
        QString prizesPath = gamblePath + "/prizes";
        if (!dir.mkpath(prizesPath)) {
            QMessageBox::warning(this, "警告", "创建奖品文件夹失败");
            return;
        }
        QString gambleFilePath = gamblePath + "/" + gambleName + ".txt";
        QFile gambleFile(gambleFilePath);
        if (gambleFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&gambleFile);
            out << gambleName << "," << current << "," << total;
            gambleFile.close();
        } else {
            QMessageBox::warning(this, "警告", "创建奖池文件失败");
            return;
        }
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        QTableWidgetItem *checkItem = new QTableWidgetItem;
        checkItem->setCheckState(Qt::Unchecked);
        ui->tableWidget->setItem(row, 0, checkItem);
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(gambleName));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(current));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(total));
        _gambleFiles[gambleName] = gambleFilePath;
    });
    ad->show();
}


void Managegamble::fillTable()
{
    ui->tableWidget->setRowCount(0);
    _gambleFiles.clear();
    QDir baseDir(BASE_PATH);
    QFileInfoList gambleDirs = baseDir.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);
    for (const QFileInfo &dirInfo : gambleDirs) {
        QString gambleName = dirInfo.fileName();
        QString gambleFilePath = dirInfo.filePath() + "/" + gambleName + ".txt";
        int current = 0;
        QString prizesPath = dirInfo.filePath() + "/prizes/";
        QDir prizesDir(prizesPath);
        QStringList prizeFiles = prizesDir.entryList(QStringList() << "*.txt", QDir::Files);
        for (const QString &prizeFile : prizeFiles) {
            QFile file(prizesPath + prizeFile);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);
                QString line = in.readLine();
                QStringList prizeData = line.split(",");
                if (prizeData.size() == 3) {
                    current += prizeData[2].toInt();
                }
                file.close();
            }
        }
        QFile file(gambleFilePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString line = in.readLine();
            QStringList data = line.split(",");

            if (data.size() == 3) {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                QTableWidgetItem *checkItem = new QTableWidgetItem;
                checkItem->setCheckState(Qt::Unchecked);
                ui->tableWidget->setItem(row, 0, checkItem);
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(data[0]));
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(current)));
                ui->tableWidget->setItem(row, 3, new QTableWidgetItem(data[2]));
                file.close();
                if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    QTextStream out(&file);
                    out << data[0] << "," << current << "," << data[2];
                }
                _gambleFiles[gambleName] = gambleFilePath;
            }
            file.close();
        }
    }
}


void Managegamble::on_deletee_clicked()
{
    QList<int> rowsDelete;
    QStringList foldersDelete;
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            rowsDelete.append(row);
            QString gambleName = ui->tableWidget->item(row, 1)->text();
            foldersDelete.append(BASE_PATH + gambleName);
        }
    }

    if (rowsDelete.isEmpty()) {
        QMessageBox::warning(this, "提示", "请选择要删除的奖池");
        return;
    }
    if (QMessageBox::question(this, "确认删除",
                              QString("确定要删除选中的 %1 个奖池及其所有奖品吗？").arg(rowsDelete.size()),
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::No) {
        return;
    }
    bool allDeleted = true;
    for (const QString &folderPath : foldersDelete) {
        QDir dir(folderPath);
        if (!dir.removeRecursively()) {
            allDeleted = false;
            qDebug() << "无法删除文件夹:" << folderPath;
        }
    }
    for (int i = rowsDelete.size() - 1; i >= 0; --i) {
        ui->tableWidget->removeRow(rowsDelete[i]);
    }
    _gambleFiles.clear();
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QString gambleName = ui->tableWidget->item(row, 1)->text();
        _gambleFiles[gambleName] = BASE_PATH + gambleName + "/" + gambleName + ".txt";
    }
    if (allDeleted) {
        QMessageBox::information(this, "成功", "选中的奖池及其奖品已成功删除");
    } else {
        QMessageBox::warning(this, "警告", "部分奖池或奖品删除失败");
    }
}

void Managegamble::on_change_clicked(){
    QList<int> selectedRows;
    QString selectedGambleName;
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            selectedRows.append(row);
            selectedGambleName = ui->tableWidget->item(row, 1)->text();
        }
    }
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "提示", "请选择要修改的奖池");
        return;
    }
    if (selectedRows.size() > 1) {
        QMessageBox::warning(this, "提示", "一次只能修改一个奖池");
        return;
    }
    Changegam *changeDialog = new Changegam(nullptr, selectedGambleName, selectedRows.first());
    connect(changeDialog, &Changegam::gambleModified, this, [this](const QString &gambleName, const QString &newTotal) {
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            if (ui->tableWidget->item(row, 1)->text() == gambleName) {
                ui->tableWidget->item(row, 3)->setText(newTotal);
                break;
            }
        }
    });

    changeDialog->show();
}


void Managegamble::on_find_clicked()
{
    QString searchText = ui->searchInput->text().trimmed();
    if (searchText.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入要查找的奖池名称");
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
        QMessageBox::information(this, "查找结果", "未找到匹配的奖池");
    }
}

void Managegamble::on_exit_clicked()
{
    this->close();
}

void Managegamble::on_see_clicked()
{
    QList<int> selectedRows;
    QString selectedGambleName;
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            selectedRows.append(row);
            selectedGambleName = ui->tableWidget->item(row, 1)->text();
        }
    }
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "提示", "请选择要查看的奖池");
        return;
    }
    if (selectedRows.size() > 1) {
        QMessageBox::warning(this, "提示", "一次只能查看一个奖池");
        return;
    }
    Managegoods *goodsManager = new Managegoods(selectedGambleName, this);
    connect(goodsManager, &Managegoods::goodsChanged, this, &Managegamble::fillTable);
    goodsManager->show();
}
