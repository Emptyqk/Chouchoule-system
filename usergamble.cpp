#include "usergamble.h"
#include "ui_usergamble.h"
#include <QDebug>
Usergamble::Usergamble(const QString &username, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Usergamble)
    , _currentUser(username)
{
    ui->setupUi(this);

    // 创建购物车目录
    QString userCartPath = CART_PATH + _currentUser + "/";
    QDir dir;
    if (!dir.exists(userCartPath)) {
        dir.mkpath(userCartPath);
    }

    // 初始化显示用户信息
    saveUserInfo();
}

Usergamble::~Usergamble()
{
    delete ui;
}

// 扣除用户积分
bool Usergamble::deductUserPoints(int points)
{
    QFile file(USER_PATH);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        return false;
    }

    QString content = file.readAll();
    QStringList lines = content.split("\n");
    file.resize(0);

    QTextStream out(&file);
    bool success = false;

    for (const QString &line : lines) {
        if (line.trimmed().isEmpty()) continue;

        QStringList userData = line.split(",");
        if (userData.size() >= 4) {
            if (userData[0] == _currentUser) {
                int currentPoints = userData[3].toInt();
                if (currentPoints >= points) {
                    currentPoints -= points;
                    userData[3] = QString::number(currentPoints);
                    out << userData.join(",") << "\n";
                    success = true;
                }
            } else {
                out << line << "\n";
            }
        }
    }

    file.close();
    return success;
}

// 更新奖池容量
bool Usergamble::savegambleCapacity(const QString &gamblePath)
{
    QFile file(gamblePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        return false;
    }

    QString content = file.readAll();
    QStringList lines = content.split("\n");
    if (lines.isEmpty()) return false;

    QStringList gambleData = lines[0].split(",");
    if (gambleData.size() < 3) return false;

    int currentCapacity = gambleData[1].toInt();
    if (currentCapacity <= 0) return false;

    currentCapacity--;
    gambleData[1] = QString::number(currentCapacity);

    file.resize(0);
    QTextStream out(&file);
    out << gambleData.join(",") << "\n";

    file.close();
    return true;
}

void Usergamble::addToCart(const QString &prizeName)
{
    // 使用用户专属的购物车路径
    QString userCartPath = CART_PATH + _currentUser + "/cart.txt";

    QFile file(userCartPath);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << prizeName << "\n";
        file.close();
    }
}

// 获取用户当前积分
int Usergamble::getPoints()
{
    QFile file(USER_PATH);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法读取用户信息！");
        return 0;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.trimmed().isEmpty()) continue;  // 跳过空行

        QStringList userData = line.split(",");
        if (userData.size() >= 4 && userData[0] == _currentUser) {
            bool ok;
            int points = userData[3].toInt(&ok);
            file.close();
            return ok ? points : 0;
        }
    }

    file.close();
    return 0;
}


void Usergamble::saveUserInfo()
{
    int points = getPoints();
    if (ui->pointsLabel) {
        ui->pointsLabel->setText(QString("当前积分：%1").arg(points));
    }
}


void Usergamble::on_find_clicked()
{
    QDir gambleDir(GAMBLE_PATH);
    if (!gambleDir.exists()) {
        QMessageBox::warning(this, "错误", "奖池目录不存在！");
        return;
    }
    QStringList gambles = gambleDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    qDebug() << "Available gambles:" << gambles;  // 调试信息

    if (gambles.isEmpty()) {
        QMessageBox::warning(this, "提示", "暂无可用奖池！");
        return;
    }
    int randomGambleIndex = QRandomGenerator::global()->bounded(gambles.size());
    QString selectedGamble = gambles[randomGambleIndex];
    QString gamblePath = GAMBLE_PATH + selectedGamble + "/" + selectedGamble + ".txt";

    qDebug() << "Selected gamble:" << selectedGamble;  // 调试信息
    qDebug() << "Gamble path:" << gamblePath;  // 调试信息
    QFile gambleFile(gamblePath);
    if (!gambleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法读取奖池文件：" + gamblePath);
        return;
    }
    QString gambleLine = gambleFile.readLine();
    QStringList gambleData = gambleLine.split(",");
    gambleFile.close();

    if (gambleData.size() < 3) {
        QMessageBox::warning(this, "错误", "奖池数据格式错误！");
        return;
    }
    int currentCapacity = gambleData[1].toInt();
    if (currentCapacity <= 0) {
        QMessageBox::warning(this, "提示", "该奖池已空！");
        return;
    }
    QString prizesPath = GAMBLE_PATH + selectedGamble + "/prizes/";
    qDebug() << "Prizes path:" << prizesPath;  // 调试信息
    QDir prizesDir(prizesPath);
    if (!prizesDir.exists()) {
        QMessageBox::warning(this, "错误", "奖品目录不存在：" + prizesPath);
        return;
    }
    QStringList prizes = prizesDir.entryList(QStringList() << "*.txt", QDir::Files);
    qDebug() << "Available prizes:" << prizes;  // 调试信息
    if (prizes.isEmpty()) {
        QMessageBox::warning(this, "提示", "奖池中暂无奖品！");
        return;
    }
    int randomPrizeIndex = QRandomGenerator::global()->bounded(prizes.size());
    QString selectedPrize = prizes[randomPrizeIndex];
    QString prizePath = prizesPath + selectedPrize;
    qDebug() << "Selected prize:" << selectedPrize;
    qDebug() << "Prize path:" << prizePath;
    QFile prizeFile(prizePath);
    if (!prizeFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法读取奖品文件：" + prizePath);
        return;
    }
    QString prizeLine = prizeFile.readLine();
    QStringList prizeData = prizeLine.split(",");
    prizeFile.close();
    if (prizeData.size() < 2) {
        QMessageBox::warning(this, "错误", "奖品数据格式错误！");
        return;
    }
    int gambleCost = prizeData[1].toInt();
    qDebug() << "Prize cost:" << gambleCost;
    int userPoints = getPoints();
    if (userPoints < gambleCost) {
        QMessageBox::warning(this, "提示", QString("积分不足！需要%1积分，当前积分：%2").arg(gambleCost).arg(userPoints));
        return;
    }
    if (!deductUserPoints(gambleCost)) {
        QMessageBox::critical(this, "错误", "扣除积分失败！");
        return;
    }
    if (!savegambleCapacity(gamblePath)) {
        QMessageBox::critical(this, "错误", "更新奖池容量失败！");
        return;
    }
    // 将奖品添加到用户购物车
    QString prizeName = selectedPrize.split(".").first();
    addToCart(prizeName);
    saveUserInfo();
    QMessageBox::information(this, "恭喜", QString("抽中奖品：%1！\n已添加到购物车。").arg(prizeName));

}

void Usergamble::on_exit_clicked()
{
    this->close();
}
