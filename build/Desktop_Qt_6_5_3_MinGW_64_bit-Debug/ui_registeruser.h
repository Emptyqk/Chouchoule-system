/********************************************************************************
** Form generated from reading UI file 'registeruser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERUSER_H
#define UI_REGISTERUSER_H

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

class Ui_Registeruser
{
public:
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *In;
    QPushButton *Exit;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *Usernameus;
    QLineEdit *Passwordus;

    void setupUi(QWidget *Registeruser)
    {
        if (Registeruser->objectName().isEmpty())
            Registeruser->setObjectName("Registeruser");
        Registeruser->resize(486, 337);
        Registeruser->setMinimumSize(QSize(486, 337));
        Registeruser->setMaximumSize(QSize(486, 337));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Registeruser->setWindowIcon(icon);
        widget_3 = new QWidget(Registeruser);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(110, 230, 321, 28));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame = new QFrame(Registeruser);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, 0, 501, 341));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget_2 = new QWidget(Registeruser);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(140, 260, 181, 51));
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

        label = new QLabel(Registeruser);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 221, 141));
        label->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget = new QWidget(Registeruser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 140, 161, 101));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Usernameus = new QLineEdit(widget);
        Usernameus->setObjectName("Usernameus");

        verticalLayout_3->addWidget(Usernameus);

        Passwordus = new QLineEdit(widget);
        Passwordus->setObjectName("Passwordus");

        verticalLayout_3->addWidget(Passwordus);


        retranslateUi(Registeruser);

        QMetaObject::connectSlotsByName(Registeruser);
    } // setupUi

    void retranslateUi(QWidget *Registeruser)
    {
        Registeruser->setWindowTitle(QCoreApplication::translate("Registeruser", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        In->setText(QCoreApplication::translate("Registeruser", "\346\263\250\345\206\214", nullptr));
        Exit->setText(QCoreApplication::translate("Registeruser", "\351\200\200\345\207\272", nullptr));
        label->setText(QString());
        Usernameus->setPlaceholderText(QCoreApplication::translate("Registeruser", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        Passwordus->setPlaceholderText(QCoreApplication::translate("Registeruser", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registeruser: public Ui_Registeruser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERUSER_H
