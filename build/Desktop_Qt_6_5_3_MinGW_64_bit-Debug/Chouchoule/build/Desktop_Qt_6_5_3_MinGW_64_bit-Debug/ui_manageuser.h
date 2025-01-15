/********************************************************************************
** Form generated from reading UI file 'manageuser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEUSER_H
#define UI_MANAGEUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageUser
{
public:
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *add;
    QPushButton *deletee;
    QPushButton *change;
    QLineEdit *input;
    QPushButton *find;
    QPushButton *exit;
    QWidget *widget_3;
    QWidget *widget;
    QTableWidget *tableWidget;
    QFrame *frame;

    void setupUi(QWidget *ManageUser)
    {
        if (ManageUser->objectName().isEmpty())
            ManageUser->setObjectName("ManageUser");
        ManageUser->resize(689, 628);
        ManageUser->setMinimumSize(QSize(689, 628));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ManageUser->setWindowIcon(icon);
        widget_2 = new QWidget(ManageUser);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 110, 221, 521));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        add = new QPushButton(widget_2);
        add->setObjectName("add");

        verticalLayout->addWidget(add);

        deletee = new QPushButton(widget_2);
        deletee->setObjectName("deletee");

        verticalLayout->addWidget(deletee);

        change = new QPushButton(widget_2);
        change->setObjectName("change");

        verticalLayout->addWidget(change);

        input = new QLineEdit(widget_2);
        input->setObjectName("input");

        verticalLayout->addWidget(input);

        find = new QPushButton(widget_2);
        find->setObjectName("find");

        verticalLayout->addWidget(find);

        exit = new QPushButton(widget_2);
        exit->setObjectName("exit");

        verticalLayout->addWidget(exit);

        widget_3 = new QWidget(ManageUser);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(220, 0, 461, 111));
        widget = new QWidget(ManageUser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 221, 111));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        tableWidget = new QTableWidget(ManageUser);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(220, 110, 471, 521));
        frame = new QFrame(ManageUser);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 691, 631));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget_2->raise();
        widget_3->raise();
        widget->raise();
        tableWidget->raise();

        retranslateUi(ManageUser);

        QMetaObject::connectSlotsByName(ManageUser);
    } // setupUi

    void retranslateUi(QWidget *ManageUser)
    {
        ManageUser->setWindowTitle(QCoreApplication::translate("ManageUser", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        add->setText(QCoreApplication::translate("ManageUser", "\346\267\273\345\212\240", nullptr));
        deletee->setText(QCoreApplication::translate("ManageUser", "\345\210\240\351\231\244", nullptr));
        change->setText(QCoreApplication::translate("ManageUser", "\344\277\256\346\224\271", nullptr));
        input->setText(QString());
        input->setPlaceholderText(QCoreApplication::translate("ManageUser", "\346\237\245\346\211\276\347\224\250\346\210\267\345\220\215", nullptr));
        find->setText(QCoreApplication::translate("ManageUser", "\346\237\245\346\211\276", nullptr));
        exit->setText(QCoreApplication::translate("ManageUser", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageUser: public Ui_ManageUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEUSER_H
