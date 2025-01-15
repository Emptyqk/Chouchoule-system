#include "mainwindow.h"
#include "note.h"
#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    //调节分辨率
#if (QT_VERSION >= QT_VERSION_CHECK(5,9,0))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
