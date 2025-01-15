/********************************************************************************
** Form generated from reading UI file 'usercart.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCART_H
#define UI_USERCART_H

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

class Ui_Usercart
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QLineEdit *searchInput_2;
    QPushButton *findd;
    QPushButton *exitt;
    QFrame *frame;

    void setupUi(QWidget *Usercart)
    {
        if (Usercart->objectName().isEmpty())
            Usercart->setObjectName("Usercart");
        Usercart->resize(371, 501);
        Usercart->setMinimumSize(QSize(371, 501));
        Usercart->setMaximumSize(QSize(371, 501));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Usercart->setWindowIcon(icon);
        widget = new QWidget(Usercart);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 10, 111, 41));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget_2 = new QWidget(Usercart);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 50, 361, 451));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableWidget = new QTableWidget(widget_2);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_2->addWidget(tableWidget);

        searchInput_2 = new QLineEdit(widget_2);
        searchInput_2->setObjectName("searchInput_2");

        verticalLayout_2->addWidget(searchInput_2);

        findd = new QPushButton(widget_2);
        findd->setObjectName("findd");

        verticalLayout_2->addWidget(findd);

        exitt = new QPushButton(widget_2);
        exitt->setObjectName("exitt");

        verticalLayout_2->addWidget(exitt);

        frame = new QFrame(Usercart);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 371, 501));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/backshu.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget->raise();
        widget_2->raise();

        retranslateUi(Usercart);

        QMetaObject::connectSlotsByName(Usercart);
    } // setupUi

    void retranslateUi(QWidget *Usercart)
    {
        Usercart->setWindowTitle(QCoreApplication::translate("Usercart", "\350\264\255\347\211\251\350\275\246", nullptr));
        searchInput_2->setText(QString());
        searchInput_2->setPlaceholderText(QCoreApplication::translate("Usercart", "\346\237\245\346\211\276\345\245\226\345\223\201\345\220\215", nullptr));
        findd->setText(QCoreApplication::translate("Usercart", "\346\237\245\346\211\276", nullptr));
        exitt->setText(QCoreApplication::translate("Usercart", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Usercart: public Ui_Usercart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCART_H
