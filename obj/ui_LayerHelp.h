/********************************************************************************
** Form generated from reading UI file 'LayerHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERHELP_H
#define UI_LAYERHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerHelp
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *LayerHelp)
    {
        if (LayerHelp->objectName().isEmpty())
            LayerHelp->setObjectName(QString::fromUtf8("LayerHelp"));
        LayerHelp->resize(521, 339);
        gridLayout = new QGridLayout(LayerHelp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(LayerHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        textEdit = new QTextEdit(LayerHelp);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        label_2 = new QLabel(LayerHelp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(LayerHelp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        retranslateUi(LayerHelp);

        QMetaObject::connectSlotsByName(LayerHelp);
    } // setupUi

    void retranslateUi(QWidget *LayerHelp)
    {
        LayerHelp->setWindowTitle(QCoreApplication::translate("LayerHelp", "Form", nullptr));
        label->setText(QCoreApplication::translate("LayerHelp", "version 1.04", nullptr));
        textEdit->setHtml(QCoreApplication::translate("LayerHelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft JhengHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\237\272\346\234\254\347\224\250\346\263\225<br />1.   \350\250\255\345\256\232api key<br />2.   \351\201\270\346\223\207\344\276\206\346\272\220\350\263\207\346\226\231\345\244\276<br />3.   \346\214\211&quot;\345\225\237\345\213\225&quot;\346\214\211\351\210\225<br />4.\350\274\270\345\207\272\345\234\250output\350\263\207\346\226\231\345\244\276\345\272\225\344\270\213\357\274\214\345\210\206\346\210\220\344\270\211\347\250\256<br />    undone:  \345\276\236\344\276\206\346\272\220copy\351\201\216\344\276\206\347\232\204"
                        "\357\274\214\346\234\252\350\231\225\347\220\206\347\232\204\346\252\224\346\241\210<br />    check:      \345\267\262\350\231\225\347\220\206\347\232\204\346\252\224\346\241\210<br />    uncheck:  \350\267\263\351\201\216\346\234\252\347\232\204\346\252\224\346\241\210 <br />\345\205\266\345\256\203:<br />  \345\217\257\345\210\207\346\217\233&quot;\346\211\213\345\213\225&quot;\357\274\214\351\200\220\344\270\200\346\252\224\346\241\210\347\242\272\345\256\232\357\274\214\346\210\226\346\230\257\345\234\250\345\217\263\351\202\212\350\274\270\345\205\245\346\241\206\350\243\234\345\205\205\344\277\256\346\224\271<br />  \345\246\202\350\246\201\345\205\250\351\203\250\351\207\215\346\226\260\345\201\232\357\274\214\350\253\213\346\211\213\345\213\225\345\210\252\351\231\244output\350\263\207\346\226\231\345\244\276<br /><br />    </p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("LayerHelp", "Roger Chen", nullptr));
        label_3->setText(QCoreApplication::translate("LayerHelp", "korm654@gmail.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerHelp: public Ui_LayerHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERHELP_H
