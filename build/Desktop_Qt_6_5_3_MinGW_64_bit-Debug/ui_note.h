/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QTextEdit *textEdit;
    QPushButton *tomenu;
    QLabel *label;
    QFrame *frame;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName("Note");
        Note->resize(491, 338);
        Note->setMinimumSize(QSize(491, 338));
        Note->setMaximumSize(QSize(496, 338));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Note->setWindowIcon(icon);
        textEdit = new QTextEdit(Note);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(-10, 160, 511, 181));
        tomenu = new QPushButton(Note);
        tomenu->setObjectName("tomenu");
        tomenu->setGeometry(QRect(200, 120, 111, 31));
        label = new QLabel(Note);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 221, 91));
        label->setStyleSheet(QString::fromUtf8("image: url(:/title.png);"));
        frame = new QFrame(Note);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, 0, 511, 341));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(Note);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 190, 131, 31));
        lineEdit->raise();
        frame->raise();
        textEdit->raise();
        tomenu->raise();
        label->raise();

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QWidget *Note)
    {
        Note->setWindowTitle(QCoreApplication::translate("Note", "\346\263\250\346\204\217\357\274\201", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Note", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\255\231\345\256\201"
                        "\346\263\275 \350\256\241\347\256\227231 2308010116</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\240\227\351\235\231\351\233\257 \350\256\241\347\256\227233 2308010308</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'system-ui','-apple-system','Segoe UI','Roboto','Ubuntu','Cantarell','Noto Sans','sans-serif'; font-size:16pt; color:#333333; background-color:#ffffff;\">1.\346\234\252\346\210\220\345\271\264\344\272\272\350\257\267\345\234\250\345\256\266\351\225\277\346"
                        "\214\207\345\257\274\344\270\213\350\264\255\344\271\260\357\274\214\345\224\256\345\207\272\345\220\216\344\270\200\346\246\202\344\270\215\351\200\200\344\270\215\346\215\242\342\200\274<br />2.\350\257\267\345\207\255\345\274\200\347\256\261\350\247\206\351\242\221\350\277\233\350\241\214\345\224\256\345\220\216\357\274\214\346\227\240\345\274\200\347\256\261\350\247\206\351\242\221\344\270\200\345\276\213\344\270\215\345\224\256\345\220\216\342\200\274<br />3.\350\264\255\344\271\260\350\257\267\345\217\212\346\227\266\346\213\206\347\233\222\357\274\214\350\213\245\345\233\240\346\234\252\346\213\206\347\233\222\345\257\274\350\207\264\347\233\262\347\233\222\345\244\261\346\225\210\345\210\231\351\232\217\346\234\272\345\217\221\350\264\247!!</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'system-ui','-apple-system','Segoe UI','Roboto','Ubuntu','Cantarell','Noto Sans','sans"
                        "-serif'; font-size:16pt; color:#333333; background-color:#ffffff;\">4.\345\217\252\346\234\211\345\234\250\345\220\214\344\270\200\350\264\246\346\210\267\343\200\201\345\220\214\344\270\200\346\224\266\344\273\266\345\234\260\345\235\200\343\200\201\347\224\265\350\257\235\346\235\241\344\273\266\344\270\213\346\226\271\345\217\257\345\220\210\345\271\266\345\217\221\350\264\247\357\274\214\345\220\216\347\273\255\351\234\200\345\215\225\347\213\254\350\241\245\351\202\256\357\274\214\345\244\247\350\264\247\345\217\221\350\264\247\345\211\215\344\274\232\347\273\237\344\270\200\350\277\233\350\241\214\346\224\271\345\234\260\345\235\200\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'system-ui','-apple-system','Segoe UI','Roboto','Ubuntu','Cantarell','Noto Sans','sans-serif'; font-size:16pt; color:#333333; background-color:#ffffff;\">5.\347\233\262\347\233\222\343\200"
                        "\201\346\211\255\350\233\213\347\261\273\345\225\206\345\223\201\344\273\230\346\254\276\345\220\216\345\215\263\345\256\214\346\210\220\345\234\250\347\272\277\344\272\244\346\230\223\357\274\214\344\276\235\346\215\256\343\200\212\347\275\221\347\273\234\350\264\255\344\271\260\345\225\206\345\223\2017\346\227\245\346\227\240\347\220\206\347\224\261\351\200\200\350\264\247\346\232\202\350\241\214\345\212\236\346\263\225\343\200\213\347\254\254\344\270\203\346\235\241\357\274\2102\357\274\211\350\247\204\345\256\232\357\274\214\351\235\236\350\264\250\351\207\217\351\227\256\351\242\230\344\270\215\351\200\202\347\224\250\344\270\203\346\227\245\346\227\240\347\220\206\347\224\261\351\200\200\350\264\247\343\200\202</span></p></body></html>", nullptr));
        tomenu->setText(QCoreApplication::translate("Note", "- \347\241\256\345\256\232 -", nullptr));
        label->setText(QString());
        lineEdit->setText(QCoreApplication::translate("Note", "\351\207\221\345\234\260\351\233\204\345\205\255\351\242\234\344\270\200 \346\270\241\350\276\271\346\270\251\346\226\227\344\272\224\351\242\234\344\270\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
