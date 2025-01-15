/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adduser
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *username;
    QLineEdit *money;
    QLineEdit *score;
    QPushButton *addd;
    QFrame *frame;

    void setupUi(QWidget *Adduser)
    {
        if (Adduser->objectName().isEmpty())
            Adduser->setObjectName("Adduser");
        Adduser->resize(348, 275);
        Adduser->setMinimumSize(QSize(348, 275));
        Adduser->setMaximumSize(QSize(348, 275));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Adduser->setWindowIcon(icon);
        widget = new QWidget(Adduser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 10, 251, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        username = new QLineEdit(widget);
        username->setObjectName("username");

        verticalLayout->addWidget(username);

        money = new QLineEdit(widget);
        money->setObjectName("money");

        verticalLayout->addWidget(money);

        score = new QLineEdit(widget);
        score->setObjectName("score");

        verticalLayout->addWidget(score);

        addd = new QPushButton(Adduser);
        addd->setObjectName("addd");
        addd->setGeometry(QRect(120, 200, 81, 41));
        frame = new QFrame(Adduser);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget->raise();
        addd->raise();

        retranslateUi(Adduser);

        QMetaObject::connectSlotsByName(Adduser);
    } // setupUi

    void retranslateUi(QWidget *Adduser)
    {
        Adduser->setWindowTitle(QCoreApplication::translate("Adduser", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Adduser", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        money->setPlaceholderText(QCoreApplication::translate("Adduser", "\350\257\267\350\276\223\345\205\245\344\275\231\351\242\235", nullptr));
        score->setPlaceholderText(QCoreApplication::translate("Adduser", "\350\257\267\350\276\223\345\205\245\347\247\257\345\210\206", nullptr));
        addd->setText(QCoreApplication::translate("Adduser", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adduser: public Ui_Adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
