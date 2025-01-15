/********************************************************************************
** Form generated from reading UI file 'managegoods.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEGOODS_H
#define UI_MANAGEGOODS_H

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

class Ui_Managegoods
{
public:
    QFrame *frame;
    QWidget *widget;
    QWidget *widget_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *add;
    QPushButton *deletee;
    QPushButton *change;
    QLineEdit *searchInput;
    QPushButton *find;
    QPushButton *exit;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Managegoods)
    {
        if (Managegoods->objectName().isEmpty())
            Managegoods->setObjectName("Managegoods");
        Managegoods->resize(691, 631);
        Managegoods->setMinimumSize(QSize(691, 631));
        Managegoods->setMaximumSize(QSize(691, 631));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Managegoods->setWindowIcon(icon);
        frame = new QFrame(Managegoods);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -10, 691, 631));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(Managegoods);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -10, 221, 111));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget_3 = new QWidget(Managegoods);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(220, -10, 461, 111));
        widget_2 = new QWidget(Managegoods);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 100, 221, 521));
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

        searchInput = new QLineEdit(widget_2);
        searchInput->setObjectName("searchInput");

        verticalLayout->addWidget(searchInput);

        find = new QPushButton(widget_2);
        find->setObjectName("find");

        verticalLayout->addWidget(find);

        exit = new QPushButton(widget_2);
        exit->setObjectName("exit");

        verticalLayout->addWidget(exit);

        tableWidget = new QTableWidget(Managegoods);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(220, 100, 471, 521));

        retranslateUi(Managegoods);

        QMetaObject::connectSlotsByName(Managegoods);
    } // setupUi

    void retranslateUi(QWidget *Managegoods)
    {
        Managegoods->setWindowTitle(QCoreApplication::translate("Managegoods", "\345\245\226\345\223\201\347\256\241\347\220\206", nullptr));
        add->setText(QCoreApplication::translate("Managegoods", "\346\267\273\345\212\240", nullptr));
        deletee->setText(QCoreApplication::translate("Managegoods", "\345\210\240\351\231\244", nullptr));
        change->setText(QCoreApplication::translate("Managegoods", "\344\277\256\346\224\271", nullptr));
        searchInput->setText(QString());
        searchInput->setPlaceholderText(QCoreApplication::translate("Managegoods", "\346\237\245\346\211\276\345\245\226\345\223\201\345\220\215", nullptr));
        find->setText(QCoreApplication::translate("Managegoods", "\346\237\245\346\211\276", nullptr));
        exit->setText(QCoreApplication::translate("Managegoods", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Managegoods: public Ui_Managegoods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEGOODS_H
