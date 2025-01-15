/********************************************************************************
** Form generated from reading UI file 'addgam.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGAM_H
#define UI_ADDGAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addgam
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *gamblenameinput;
    QLineEdit *totalinput;
    QPushButton *addd;

    void setupUi(QWidget *Addgam)
    {
        if (Addgam->objectName().isEmpty())
            Addgam->setObjectName("Addgam");
        Addgam->resize(400, 300);
        Addgam->setMinimumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Addgam->setWindowIcon(icon);
        frame = new QFrame(Addgam);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(Addgam);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 10, 251, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        gamblenameinput = new QLineEdit(widget);
        gamblenameinput->setObjectName("gamblenameinput");

        verticalLayout->addWidget(gamblenameinput);

        totalinput = new QLineEdit(widget);
        totalinput->setObjectName("totalinput");

        verticalLayout->addWidget(totalinput);

        addd = new QPushButton(Addgam);
        addd->setObjectName("addd");
        addd->setGeometry(QRect(160, 230, 81, 41));

        retranslateUi(Addgam);

        QMetaObject::connectSlotsByName(Addgam);
    } // setupUi

    void retranslateUi(QWidget *Addgam)
    {
        Addgam->setWindowTitle(QCoreApplication::translate("Addgam", "\345\242\236\345\212\240\345\245\226\346\261\240", nullptr));
        gamblenameinput->setPlaceholderText(QCoreApplication::translate("Addgam", "\350\257\267\350\276\223\345\205\245\345\245\226\346\261\240\345\220\215", nullptr));
        totalinput->setPlaceholderText(QCoreApplication::translate("Addgam", "\350\257\267\350\276\223\345\205\245\345\256\271\351\207\217", nullptr));
        addd->setText(QCoreApplication::translate("Addgam", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addgam: public Ui_Addgam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGAM_H
