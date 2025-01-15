/********************************************************************************
** Form generated from reading UI file 'managegamble.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEGAMBLE_H
#define UI_MANAGEGAMBLE_H

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

class Ui_Managegamble
{
public:
    QWidget *widget;
    QWidget *widget_3;
    QFrame *frame;
    QTableWidget *tableWidget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *see;
    QPushButton *add;
    QPushButton *deletee;
    QPushButton *change;
    QLineEdit *searchInput;
    QPushButton *find;
    QPushButton *exit;

    void setupUi(QWidget *Managegamble)
    {
        if (Managegamble->objectName().isEmpty())
            Managegamble->setObjectName("Managegamble");
        Managegamble->resize(691, 611);
        Managegamble->setMinimumSize(QSize(691, 611));
        Managegamble->setMaximumSize(QSize(691, 631));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Managegamble->setWindowIcon(icon);
        widget = new QWidget(Managegamble);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 221, 111));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget_3 = new QWidget(Managegamble);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(220, 0, 461, 111));
        frame = new QFrame(Managegamble);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 691, 631));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(Managegamble);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(220, 110, 471, 521));
        widget_2 = new QWidget(Managegamble);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 110, 221, 521));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        see = new QPushButton(widget_2);
        see->setObjectName("see");

        verticalLayout->addWidget(see);

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

        frame->raise();
        widget->raise();
        widget_3->raise();
        tableWidget->raise();
        widget_2->raise();

        retranslateUi(Managegamble);

        QMetaObject::connectSlotsByName(Managegamble);
    } // setupUi

    void retranslateUi(QWidget *Managegamble)
    {
        Managegamble->setWindowTitle(QCoreApplication::translate("Managegamble", "\345\245\226\346\261\240\347\256\241\347\220\206", nullptr));
        see->setText(QCoreApplication::translate("Managegamble", "\346\237\245\347\234\213", nullptr));
        add->setText(QCoreApplication::translate("Managegamble", "\346\267\273\345\212\240", nullptr));
        deletee->setText(QCoreApplication::translate("Managegamble", "\345\210\240\351\231\244", nullptr));
        change->setText(QCoreApplication::translate("Managegamble", "\344\277\256\346\224\271", nullptr));
        searchInput->setText(QString());
        searchInput->setPlaceholderText(QCoreApplication::translate("Managegamble", "\346\237\245\346\211\276\347\224\250\346\210\267\345\220\215", nullptr));
        find->setText(QCoreApplication::translate("Managegamble", "\346\237\245\346\211\276", nullptr));
        exit->setText(QCoreApplication::translate("Managegamble", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Managegamble: public Ui_Managegamble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEGAMBLE_H
