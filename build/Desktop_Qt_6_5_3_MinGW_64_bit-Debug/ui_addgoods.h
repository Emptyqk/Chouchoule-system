/********************************************************************************
** Form generated from reading UI file 'addgoods.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGOODS_H
#define UI_ADDGOODS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addgoods
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *goodsNameInput;
    QLineEdit *priceInput;
    QLineEdit *quantityInput;
    QPushButton *addd;

    void setupUi(QWidget *Addgoods)
    {
        if (Addgoods->objectName().isEmpty())
            Addgoods->setObjectName("Addgoods");
        Addgoods->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Addgoods->setWindowIcon(icon);
        frame = new QFrame(Addgoods);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(Addgoods);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 10, 251, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        goodsNameInput = new QLineEdit(widget);
        goodsNameInput->setObjectName("goodsNameInput");

        verticalLayout->addWidget(goodsNameInput);

        priceInput = new QLineEdit(widget);
        priceInput->setObjectName("priceInput");

        verticalLayout->addWidget(priceInput);

        quantityInput = new QLineEdit(widget);
        quantityInput->setObjectName("quantityInput");

        verticalLayout->addWidget(quantityInput);

        addd = new QPushButton(Addgoods);
        addd->setObjectName("addd");
        addd->setGeometry(QRect(160, 230, 81, 41));

        retranslateUi(Addgoods);

        QMetaObject::connectSlotsByName(Addgoods);
    } // setupUi

    void retranslateUi(QWidget *Addgoods)
    {
        Addgoods->setWindowTitle(QCoreApplication::translate("Addgoods", "Form", nullptr));
        goodsNameInput->setPlaceholderText(QCoreApplication::translate("Addgoods", "\350\257\267\350\276\223\345\205\245\345\245\226\345\223\201\345\220\215", nullptr));
        priceInput->setPlaceholderText(QCoreApplication::translate("Addgoods", "\350\257\267\350\276\223\345\205\245\345\245\226\345\223\201\344\273\267\346\240\274", nullptr));
        quantityInput->setPlaceholderText(QCoreApplication::translate("Addgoods", "\350\257\267\350\276\223\345\205\245\345\245\226\345\223\201\346\225\260\351\207\217", nullptr));
        addd->setText(QCoreApplication::translate("Addgoods", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addgoods: public Ui_Addgoods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGOODS_H
