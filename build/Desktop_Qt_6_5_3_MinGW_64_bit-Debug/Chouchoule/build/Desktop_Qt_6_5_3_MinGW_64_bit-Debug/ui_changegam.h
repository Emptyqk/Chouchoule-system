/********************************************************************************
** Form generated from reading UI file 'changegam.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEGAM_H
#define UI_CHANGEGAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Changegam
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *oldgamblenameinput;
    QLineEdit *currentcapacityLabel;
    QLineEdit *newtotalcapacityinput;
    QPushButton *change;

    void setupUi(QWidget *Changegam)
    {
        if (Changegam->objectName().isEmpty())
            Changegam->setObjectName("Changegam");
        Changegam->resize(400, 300);
        Changegam->setMinimumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Changegam->setWindowIcon(icon);
        frame = new QFrame(Changegam);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(Changegam);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 10, 251, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        oldgamblenameinput = new QLineEdit(widget);
        oldgamblenameinput->setObjectName("oldgamblenameinput");

        verticalLayout->addWidget(oldgamblenameinput);

        currentcapacityLabel = new QLineEdit(widget);
        currentcapacityLabel->setObjectName("currentcapacityLabel");

        verticalLayout->addWidget(currentcapacityLabel);

        newtotalcapacityinput = new QLineEdit(widget);
        newtotalcapacityinput->setObjectName("newtotalcapacityinput");

        verticalLayout->addWidget(newtotalcapacityinput);

        change = new QPushButton(Changegam);
        change->setObjectName("change");
        change->setGeometry(QRect(160, 230, 81, 41));

        retranslateUi(Changegam);

        QMetaObject::connectSlotsByName(Changegam);
    } // setupUi

    void retranslateUi(QWidget *Changegam)
    {
        Changegam->setWindowTitle(QCoreApplication::translate("Changegam", "Form", nullptr));
        oldgamblenameinput->setPlaceholderText(QCoreApplication::translate("Changegam", "\350\257\267\350\276\223\345\205\245\345\245\226\346\261\240\345\220\215", nullptr));
        currentcapacityLabel->setPlaceholderText(QCoreApplication::translate("Changegam", "\350\257\267\350\276\223\345\205\245\345\275\223\345\211\215\345\256\271\351\207\217", nullptr));
        newtotalcapacityinput->setPlaceholderText(QCoreApplication::translate("Changegam", "\350\257\267\350\276\223\345\205\245\345\256\271\351\207\217", nullptr));
        change->setText(QCoreApplication::translate("Changegam", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Changegam: public Ui_Changegam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEGAM_H
