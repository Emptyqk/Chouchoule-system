/********************************************************************************
** Form generated from reading UI file 'changegoods.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEGOODS_H
#define UI_CHANGEGOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Changegoods
{
public:

    void setupUi(QWidget *Changegoods)
    {
        if (Changegoods->objectName().isEmpty())
            Changegoods->setObjectName("Changegoods");
        Changegoods->resize(400, 300);

        retranslateUi(Changegoods);

        QMetaObject::connectSlotsByName(Changegoods);
    } // setupUi

    void retranslateUi(QWidget *Changegoods)
    {
        Changegoods->setWindowTitle(QCoreApplication::translate("Changegoods", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Changegoods: public Ui_Changegoods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEGOODS_H
