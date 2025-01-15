/********************************************************************************
** Form generated from reading UI file 'shop.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shop
{
public:
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QWidget *widget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *frame;

    void setupUi(QWidget *Shop)
    {
        if (Shop->objectName().isEmpty())
            Shop->setObjectName("Shop");
        Shop->resize(400, 300);
        Shop->setMinimumSize(QSize(400, 300));
        Shop->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Shop->setWindowIcon(icon);
        lineEdit = new QLineEdit(Shop);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 110, 113, 20));
        textEdit = new QTextEdit(Shop);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 150, 221, 66));
        textEdit->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-color:rgb(255, 255, 255);\n"
""));
        widget = new QWidget(Shop);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 10, 120, 80));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget_2 = new QWidget(Shop);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(90, 230, 201, 61));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        frame = new QFrame(Shop);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, 0, 411, 311));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        lineEdit->raise();
        textEdit->raise();
        widget->raise();
        widget_2->raise();

        retranslateUi(Shop);

        QMetaObject::connectSlotsByName(Shop);
    } // setupUi

    void retranslateUi(QWidget *Shop)
    {
        Shop->setWindowTitle(QCoreApplication::translate("Shop", "\347\220\206\346\200\247\346\266\210\350\264\271\357\274\214\346\201\225\344\270\215\351\200\200\346\254\276\357\274\201", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Shop", "\350\257\267\350\276\223\345\205\245\346\202\250\350\246\201\345\205\205\345\200\274\347\232\204\351\207\221\351\242\235", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Shop", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; color:#ffffff;\">1\345\205\203=10\347\247\257\345\210\206</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; color:#ffffff;\">\350\257\267\347\220\206\346\200\247\346\266\210\350\264\271 \346\201\225\344\270\215\351"
                        "\200\200\346\254\276</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Shop", "\351\200\200\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Shop", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shop: public Ui_Shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
