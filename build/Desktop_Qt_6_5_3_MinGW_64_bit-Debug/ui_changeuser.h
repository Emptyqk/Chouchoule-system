/********************************************************************************
** Form generated from reading UI file 'changeuser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEUSER_H
#define UI_CHANGEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Changeuser
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *newusernameinput;
    QLineEdit *newmoneyinput;
    QLineEdit *newscoreinput;
    QPushButton *change;
    QFrame *frame;

    void setupUi(QWidget *Changeuser)
    {
        if (Changeuser->objectName().isEmpty())
            Changeuser->setObjectName("Changeuser");
        Changeuser->resize(400, 300);
        Changeuser->setMinimumSize(QSize(400, 300));
        widget = new QWidget(Changeuser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 10, 251, 201));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        newusernameinput = new QLineEdit(widget);
        newusernameinput->setObjectName("newusernameinput");

        verticalLayout_2->addWidget(newusernameinput);

        newmoneyinput = new QLineEdit(widget);
        newmoneyinput->setObjectName("newmoneyinput");

        verticalLayout_2->addWidget(newmoneyinput);

        newscoreinput = new QLineEdit(widget);
        newscoreinput->setObjectName("newscoreinput");

        verticalLayout_2->addWidget(newscoreinput);

        change = new QPushButton(Changeuser);
        change->setObjectName("change");
        change->setGeometry(QRect(160, 230, 81, 41));
        frame = new QFrame(Changeuser);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget->raise();
        change->raise();

        retranslateUi(Changeuser);

        QMetaObject::connectSlotsByName(Changeuser);
    } // setupUi

    void retranslateUi(QWidget *Changeuser)
    {
        Changeuser->setWindowTitle(QCoreApplication::translate("Changeuser", "Form", nullptr));
        newusernameinput->setPlaceholderText(QCoreApplication::translate("Changeuser", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        newmoneyinput->setPlaceholderText(QCoreApplication::translate("Changeuser", "\350\257\267\350\276\223\345\205\245\344\275\231\351\242\235", nullptr));
        newscoreinput->setPlaceholderText(QCoreApplication::translate("Changeuser", "\350\257\267\350\276\223\345\205\245\347\247\257\345\210\206", nullptr));
        change->setText(QCoreApplication::translate("Changeuser", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Changeuser: public Ui_Changeuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEUSER_H
