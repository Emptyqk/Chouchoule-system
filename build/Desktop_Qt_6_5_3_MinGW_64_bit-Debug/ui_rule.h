/********************************************************************************
** Form generated from reading UI file 'rule.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULE_H
#define UI_RULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rule
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QWidget *widget_2;
    QFrame *frame;

    void setupUi(QWidget *Rule)
    {
        if (Rule->objectName().isEmpty())
            Rule->setObjectName("Rule");
        Rule->resize(381, 480);
        Rule->setMinimumSize(QSize(381, 480));
        Rule->setMaximumSize(QSize(381, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Rule->setWindowIcon(icon);
        Rule->setWindowOpacity(2.000000000000000);
        widget = new QWidget(Rule);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 420, 291, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        plainTextEdit = new QPlainTextEdit(Rule);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 220, 381, 261));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font-size:22px;"));
        pushButton = new QPushButton(Rule);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 147, 279, 51));
        pushButton->setMaximumSize(QSize(371, 501));
        widget_2 = new QWidget(Rule);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(60, 10, 221, 131));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        frame = new QFrame(Rule);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 481));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/backshu.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        widget->raise();
        plainTextEdit->raise();
        pushButton->raise();
        widget_2->raise();

        retranslateUi(Rule);

        QMetaObject::connectSlotsByName(Rule);
    } // setupUi

    void retranslateUi(QWidget *Rule)
    {
        Rule->setWindowTitle(QCoreApplication::translate("Rule", "\350\257\267\344\273\224\347\273\206\351\230\205\350\257\273\350\247\204\345\210\231\357\274\201", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Rule", "1.\346\234\252\346\210\220\345\271\264\344\272\272\350\257\267\345\234\250\345\256\266\351\225\277\346\214\207\345\257\274\344\270\213\350\264\255\344\271\260\357\274\214\345\224\256\345\207\272\345\220\216\344\270\200\346\246\202\344\270\215\351\200\200\344\270\215\346\215\242\342\200\274\n"
"2.\350\257\267\345\207\255\345\274\200\347\256\261\350\247\206\351\242\221\350\277\233\350\241\214\345\224\256\345\220\216\357\274\214\346\227\240\345\274\200\347\256\261\350\247\206\351\242\221\344\270\200\345\276\213\344\270\215\345\224\256\345\220\216\342\200\274\n"
"3.\350\264\255\344\271\260\350\257\267\345\217\212\346\227\266\346\213\206\347\233\222\357\274\214\350\213\245\345\233\240\346\234\252\346\213\206\347\233\222\345\257\274\350\207\264\347\233\262\347\233\222\345\244\261\346\225\210\345\210\231\351\232\217\346\234\272\345\217\221\350\264\247!!\n"
"4.\345\217\252\346\234\211\345\234\250\345\220\214\344\270\200\350\264\246\346\210\267\343\200\201\345\220\214\344\270\200\346\224\266\344\273\266\345\234\260\345"
                        "\235\200\343\200\201\347\224\265\350\257\235\346\235\241\344\273\266\344\270\213\346\226\271\345\217\257\345\220\210\345\271\266\345\217\221\350\264\247\357\274\214\345\220\216\347\273\255\351\234\200\345\215\225\347\213\254\350\241\245\351\202\256\357\274\214\345\244\247\350\264\247\345\217\221\350\264\247\345\211\215\344\274\232\347\273\237\344\270\200\350\277\233\350\241\214\346\224\271\345\234\260\345\235\200\343\200\202\n"
"5.\347\233\262\347\233\222\343\200\201\346\211\255\350\233\213\347\261\273\345\225\206\345\223\201\344\273\230\346\254\276\345\220\216\345\215\263\345\256\214\346\210\220\345\234\250\347\272\277\344\272\244\346\230\223\357\274\214\344\276\235\346\215\256\343\200\212\347\275\221\347\273\234\350\264\255\344\271\260\345\225\206\345\223\2017\346\227\245\346\227\240\347\220\206\347\224\261\351\200\200\350\264\247\346\232\202\350\241\214\345\212\236\346\263\225\343\200\213\347\254\254\344\270\203\346\235\241\357\274\2102\357\274\211\350\247\204\345\256\232\357\274\214\351\235\236\350\264\250"
                        "\351\207\217\351\227\256\351\242\230\344\270\215\351\200\202\347\224\250\344\270\203\346\227\245\346\227\240\347\220\206\347\224\261\351\200\200\350\264\247\343\200\202", nullptr));
        pushButton->setText(QCoreApplication::translate("Rule", "\346\210\221\345\267\262\347\237\245\346\231\223\357\274\214\351\200\200\345\207\272\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rule: public Ui_Rule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULE_H
