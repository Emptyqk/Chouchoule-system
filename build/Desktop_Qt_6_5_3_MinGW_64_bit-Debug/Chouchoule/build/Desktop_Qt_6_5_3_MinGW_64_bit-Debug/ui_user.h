/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *rule;
    QPushButton *gamble;
    QPushButton *shop;
    QPushButton *list;
    QPushButton *exit;
    QWidget *widget_2;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label_3;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(371, 501);
        User->setMinimumSize(QSize(371, 501));
        User->setMaximumSize(QSize(371, 501));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        User->setWindowIcon(icon);
        widget = new QWidget(User);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 210, 211, 261));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        rule = new QPushButton(widget);
        rule->setObjectName("rule");

        verticalLayout_2->addWidget(rule);

        gamble = new QPushButton(widget);
        gamble->setObjectName("gamble");

        verticalLayout_2->addWidget(gamble);

        shop = new QPushButton(widget);
        shop->setObjectName("shop");

        verticalLayout_2->addWidget(shop);

        list = new QPushButton(widget);
        list->setObjectName("list");

        verticalLayout_2->addWidget(list);

        exit = new QPushButton(widget);
        exit->setObjectName("exit");

        verticalLayout_2->addWidget(exit);

        widget_2 = new QWidget(User);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 371, 121));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 30, 201, 91));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        frame = new QFrame(User);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 371, 501));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/backshu.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(User);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 160, 211, 51));
        label_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));
        frame->raise();
        widget->raise();
        widget_2->raise();
        label_3->raise();

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "\346\254\242\350\277\216\344\275\277\347\224\250\346\212\275\346\212\275\344\271\220\357\274\201", nullptr));
        rule->setText(QCoreApplication::translate("User", "\346\237\245\347\234\213\350\247\204\345\210\231", nullptr));
        gamble->setText(QCoreApplication::translate("User", "\346\212\275\345\245\226", nullptr));
        shop->setText(QCoreApplication::translate("User", "\350\264\255\347\211\251", nullptr));
        list->setText(QCoreApplication::translate("User", "\346\237\245\347\234\213\350\264\255\347\211\251\350\275\246", nullptr));
        exit->setText(QCoreApplication::translate("User", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("User", "\346\202\250\345\245\275\357\274\214\344\272\262\347\210\261\347\232\204\351\241\276\345\256\242\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
