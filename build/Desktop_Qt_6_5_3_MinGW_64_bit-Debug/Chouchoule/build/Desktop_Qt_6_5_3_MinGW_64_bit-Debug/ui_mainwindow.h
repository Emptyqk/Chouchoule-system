/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *UsernameInput;
    QLineEdit *PasswordInput;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *register_2;
    QPushButton *login;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *chooseadmin;
    QRadioButton *chooseuser;
    QFrame *frame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(496, 338);
        MainWindow->setMinimumSize(QSize(496, 338));
        MainWindow->setMaximumSize(QSize(496, 338));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 10, 221, 141));
        label->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 140, 161, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        UsernameInput = new QLineEdit(widget);
        UsernameInput->setObjectName("UsernameInput");

        verticalLayout->addWidget(UsernameInput);

        PasswordInput = new QLineEdit(widget);
        PasswordInput->setObjectName("PasswordInput");

        verticalLayout->addWidget(PasswordInput);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(150, 260, 181, 51));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        register_2 = new QPushButton(widget_2);
        register_2->setObjectName("register_2");
        register_2->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
"background-color:white;"));

        horizontalLayout->addWidget(register_2);

        login = new QPushButton(widget_2);
        login->setObjectName("login");
        login->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
"background-color:white;"));

        horizontalLayout->addWidget(login);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(120, 230, 321, 28));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        chooseadmin = new QRadioButton(widget_3);
        chooseadmin->setObjectName("chooseadmin");
        chooseadmin->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(chooseadmin);

        chooseuser = new QRadioButton(widget_3);
        chooseuser->setObjectName("chooseuser");
        chooseuser->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        chooseuser->setChecked(true);

        horizontalLayout_2->addWidget(chooseuser);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 501, 341));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        label->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\346\212\275\346\212\275\344\271\220", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\254\242\350\277\216\346\235\245\345\210\260\346\212\275\346\212\275\344\271\220</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        UsernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        PasswordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        chooseadmin->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\256\241\347\220\206\345\221\230", nullptr));
        chooseuser->setText(QCoreApplication::translate("MainWindow", "\346\210\221\346\230\257\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
