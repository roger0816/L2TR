/********************************************************************************
** Form generated from reading UI file 'StageAbout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGEABOUT_H
#define UI_STAGEABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StageAbout
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *StageAbout)
    {
        if (StageAbout->objectName().isEmpty())
            StageAbout->setObjectName(QString::fromUtf8("StageAbout"));
        StageAbout->resize(608, 441);
        gridLayout = new QGridLayout(StageAbout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(StageAbout);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"QTextEdit { padding: 20px; }"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        widget = new QWidget(StageAbout);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 40));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(380, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("font: 18px \"Microsoft JhengHei UI\";"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(StageAbout);

        QMetaObject::connectSlotsByName(StageAbout);
    } // setupUi

    void retranslateUi(QWidget *StageAbout)
    {
        StageAbout->setWindowTitle(QCoreApplication::translate("StageAbout", "Form", nullptr));
        textEdit->setHtml(QCoreApplication::translate("StageAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft JhengHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \346\255\244\350\273\237\351\253\224\344\275\277\347\224\250C++\351\226\213\347\231\274\347\232\204\345\267\245\345\205\267\357\274\214\346\262\222\346\224\266\345\217\226\344\273\273\344\275\225\350\262\273\347\224\250\357\274\214\345\246\202\346\234\211\351\214\257\350\252\244\345\260\216\350\207\264\344\275\277\347\224\250\350\200\205\345\217\227\346\220\215\347\204\241\346\263\225\346\217\220\344\276\233\344\273\273\344\275\225\350\243\234\345\204\237\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; "
                        "margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />2. \346\211\271\351\207\217\347\277\273\350\255\257\347\232\204GPT key\357\274\214\346\211\200\347\224\242\347\224\237\347\232\204\350\262\273\347\224\250\346\210\226\346\254\212\347\233\212\357\274\214\347\232\206\347\224\261https://openai.com/\346\211\200\346\223\201\346\234\211\357\274\214\346\255\244\345\267\245\345\205\267\345\217\252\346\230\257\345\212\237\350\203\275\344\270\262\346\216\245</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \346\255\244\350\273\237\351\253\224\345\217\252\346\230\257\345\255\227\344\270\262\343\200\201\350\267\257\345\276\221\347\232\204\350\231\225\347\220\206\357\274\214\344\270\215\345\205\267\345\202\231\344\273\273\344\275\225\347\240\264\350\247\243"
                        "\350\203\275\345\212\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \346\234\211\350\211\257\345\245\275\345\273\272\350\255\260\346\210\226\346\234\211\346\245\255\345\213\231\345\220\210\344\275\234\351\234\200\346\261\202\357\274\214\346\255\241\350\277\216\344\276\206\344\277\241\346\214\207\346\225\231,\350\253\213\345\234\250\344\270\273\346\227\250\344\270\212\346\211\223\344\270\212&quot;L2TR&quot;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("StageAbout", "Roger Chen", nullptr));
        label->setText(QCoreApplication::translate("StageAbout", "korm654@gmail.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StageAbout: public Ui_StageAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEABOUT_H
