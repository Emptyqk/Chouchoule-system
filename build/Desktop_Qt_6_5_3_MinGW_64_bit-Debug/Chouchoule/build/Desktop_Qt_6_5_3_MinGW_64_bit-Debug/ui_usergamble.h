/********************************************************************************
** Form generated from reading UI file 'usergamble.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERGAMBLE_H
#define UI_USERGAMBLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Usergamble
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *exit;
    QPushButton *find;
    QFrame *frame;
    QLineEdit *pointsLabel;

    void setupUi(QWidget *Usergamble)
    {
        if (Usergamble->objectName().isEmpty())
            Usergamble->setObjectName("Usergamble");
        Usergamble->resize(691, 631);
        Usergamble->setMinimumSize(QSize(691, 631));
        Usergamble->setMaximumSize(QSize(691, 631));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Usergamble->setWindowIcon(icon);
        widget = new QWidget(Usergamble);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, -10, 271, 161));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        widget_2 = new QWidget(Usergamble);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 450, 321, 51));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        exit = new QPushButton(widget_2);
        exit->setObjectName("exit");

        horizontalLayout->addWidget(exit);

        find = new QPushButton(widget_2);
        find->setObjectName("find");

        horizontalLayout->addWidget(find);

        frame = new QFrame(Usergamble);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 0, 431, 521));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/backshu.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pointsLabel = new QLineEdit(frame);
        pointsLabel->setObjectName("pointsLabel");
        pointsLabel->setGeometry(QRect(60, 170, 231, 211));
        pointsLabel->setStyleSheet(QString::fromUtf8("background:white;\n"
"font-size:24px;\n"
""));
        frame->raise();
        widget->raise();
        widget_2->raise();

        retranslateUi(Usergamble);

        QMetaObject::connectSlotsByName(Usergamble);
    } // setupUi

    void retranslateUi(QWidget *Usergamble)
    {
        Usergamble->setWindowTitle(QCoreApplication::translate("Usergamble", "\347\245\235\346\202\250\346\211\213\346\260\224666", nullptr));
        exit->setText(QCoreApplication::translate("Usergamble", "\351\200\200\345\207\272", nullptr));
        find->setText(QCoreApplication::translate("Usergamble", "\346\212\275\345\245\226\357\274\201", nullptr));
        pointsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Usergamble: public Ui_Usergamble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERGAMBLE_H
