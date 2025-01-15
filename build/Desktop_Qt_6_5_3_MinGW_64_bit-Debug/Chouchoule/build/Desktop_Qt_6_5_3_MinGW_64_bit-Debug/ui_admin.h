/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *usermanage;
    QPushButton *gamblemanage;
    QPushButton *rule;
    QPushButton *exit;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(364, 495);
        Admin->setMinimumSize(QSize(364, 495));
        Admin->setMaximumSize(QSize(364, 495));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Admin->setWindowIcon(icon);
        widget = new QWidget(Admin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 210, 211, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        usermanage = new QPushButton(widget);
        usermanage->setObjectName("usermanage");

        verticalLayout->addWidget(usermanage);

        gamblemanage = new QPushButton(widget);
        gamblemanage->setObjectName("gamblemanage");

        verticalLayout->addWidget(gamblemanage);

        rule = new QPushButton(widget);
        rule->setObjectName("rule");

        verticalLayout->addWidget(rule);

        exit = new QPushButton(widget);
        exit->setObjectName("exit");

        verticalLayout->addWidget(exit);

        widget_2 = new QWidget(Admin);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 371, 121));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 201, 91));
        label->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        label_2 = new QLabel(Admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 160, 211, 51));
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));
        frame = new QFrame(Admin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 371, 501));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/backshu.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget->raise();
        widget_2->raise();
        label_2->raise();

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "\347\245\235\346\202\250\345\267\245\344\275\234\346\204\211\345\277\253\357\274\201", nullptr));
        usermanage->setText(QCoreApplication::translate("Admin", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        gamblemanage->setText(QCoreApplication::translate("Admin", "\345\245\226\346\261\240\347\256\241\347\220\206", nullptr));
        rule->setText(QCoreApplication::translate("Admin", "\346\237\245\347\234\213\350\247\204\345\210\231", nullptr));
        exit->setText(QCoreApplication::translate("Admin", "\351\200\200\345\207\272", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Admin", "\346\202\250\345\245\275\357\274\214\344\272\262\347\210\261\347\232\204\347\256\241\347\220\206\345\221\230\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
