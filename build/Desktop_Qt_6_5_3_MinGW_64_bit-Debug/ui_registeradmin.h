/********************************************************************************
** Form generated from reading UI file 'registeradmin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERADMIN_H
#define UI_REGISTERADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registeradmin
{
public:
    QLabel *label;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *In;
    QPushButton *Exit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *Username;
    QLineEdit *Password;
    QFrame *frame;

    void setupUi(QWidget *Registeradmin)
    {
        if (Registeradmin->objectName().isEmpty())
            Registeradmin->setObjectName("Registeradmin");
        Registeradmin->resize(486, 337);
        Registeradmin->setMinimumSize(QSize(486, 337));
        Registeradmin->setMaximumSize(QSize(486, 337));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Registeradmin->setWindowIcon(icon);
        label = new QLabel(Registeradmin);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 10, 221, 141));
        label->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget_3 = new QWidget(Registeradmin);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(120, 230, 321, 28));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_2 = new QWidget(Registeradmin);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(150, 260, 181, 51));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        In = new QPushButton(widget_2);
        In->setObjectName("In");
        In->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
"background-color:white;"));

        horizontalLayout_6->addWidget(In);

        Exit = new QPushButton(widget_2);
        Exit->setObjectName("Exit");
        Exit->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
"background-color:white;"));

        horizontalLayout_6->addWidget(Exit);

        widget = new QWidget(Registeradmin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 140, 161, 101));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Username = new QLineEdit(widget);
        Username->setObjectName("Username");

        verticalLayout_3->addWidget(Username);

        Password = new QLineEdit(widget);
        Password->setObjectName("Password");

        verticalLayout_3->addWidget(Password);

        frame = new QFrame(Registeradmin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 501, 341));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        label->raise();
        widget_2->raise();
        widget->raise();
        widget_3->raise();

        retranslateUi(Registeradmin);

        QMetaObject::connectSlotsByName(Registeradmin);
    } // setupUi

    void retranslateUi(QWidget *Registeradmin)
    {
        Registeradmin->setWindowTitle(QCoreApplication::translate("Registeradmin", "\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214", nullptr));
        label->setText(QString());
        In->setText(QCoreApplication::translate("Registeradmin", "\346\263\250\345\206\214", nullptr));
        Exit->setText(QCoreApplication::translate("Registeradmin", "\351\200\200\345\207\272", nullptr));
        Username->setPlaceholderText(QCoreApplication::translate("Registeradmin", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("Registeradmin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registeradmin: public Ui_Registeradmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERADMIN_H
