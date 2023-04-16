/********************************************************************************
** Form generated from reading UI file 'StageTr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGETR_H
#define UI_STAGETR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "LayerTest.h"
#include "LayerTr.h"

QT_BEGIN_NAMESPACE

class Ui_StageTr
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    LayerTr *pageTr;
    LayerTest *pageTest;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txKey;
    QPushButton *btnViewPw;
    QPushButton *btnSaveKey;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *StageTr)
    {
        if (StageTr->objectName().isEmpty())
            StageTr->setObjectName(QString::fromUtf8("StageTr"));
        StageTr->resize(933, 488);
        gridLayout = new QGridLayout(StageTr);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(StageTr);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        pageTr = new LayerTr();
        pageTr->setObjectName(QString::fromUtf8("pageTr"));
        tabWidget->addTab(pageTr, QString());
        pageTest = new LayerTest();
        pageTest->setObjectName(QString::fromUtf8("pageTest"));
        tabWidget->addTab(pageTest, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(20, 10, 20, 10);
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        widget = new QWidget(StageTr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txKey = new QLineEdit(widget);
        txKey->setObjectName(QString::fromUtf8("txKey"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txKey->sizePolicy().hasHeightForWidth());
        txKey->setSizePolicy(sizePolicy);
        txKey->setMinimumSize(QSize(400, 0));
        txKey->setMaximumSize(QSize(600, 16777215));
        txKey->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(txKey);

        btnViewPw = new QPushButton(widget);
        btnViewPw->setObjectName(QString::fromUtf8("btnViewPw"));
        btnViewPw->setMinimumSize(QSize(36, 23));
        btnViewPw->setMaximumSize(QSize(36, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/viewPw.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewPw->setIcon(icon);
        btnViewPw->setCheckable(true);
        btnViewPw->setChecked(false);

        horizontalLayout->addWidget(btnViewPw);

        btnSaveKey = new QPushButton(widget);
        btnSaveKey->setObjectName(QString::fromUtf8("btnSaveKey"));

        horizontalLayout->addWidget(btnSaveKey);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setOpenExternalLinks(true);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(StageTr);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(StageTr);
    } // setupUi

    void retranslateUi(QWidget *StageTr)
    {
        StageTr->setWindowTitle(QCoreApplication::translate("StageTr", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pageTr), QCoreApplication::translate("StageTr", "\346\211\271\351\207\217\347\277\273\350\255\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pageTest), QCoreApplication::translate("StageTr", "chatGPT", nullptr));
        textEdit->setHtml(QCoreApplication::translate("StageTr", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft JhengHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\237\272\346\234\254\347\224\250\346\263\225<br />    1.   \350\250\255\345\256\232api key<br />    2.   \351\201\270\346\223\207\344\276\206\346\272\220\350\263\207\346\226\231\345\244\276<br />    3.   \346\214\211&quot;\345\225\237\345\213\225&quot;\346\214\211\351\210\225<br />    4.\350\274\270\345\207\272\345\234\250output\350\263\207\346\226\231\345\244\276\345\272\225\344\270\213\357\274\214\345\210\206\346\210\220\344\270\211\347\250\256<br />        undone:  \345\276\236\344\276\206\346\272\220copy\351\201\216\344"
                        "\276\206\347\232\204\357\274\214\346\234\252\350\231\225\347\220\206\347\232\204\346\252\224\346\241\210<br />        check:      \345\267\262\350\231\225\347\220\206\347\232\204\346\252\224\346\241\210<br />        uncheck:  \350\267\263\351\201\216\346\234\252\350\231\225\347\220\206\347\232\204\346\252\224\346\241\210 <br />\345\205\266\345\256\203:<br />    1.  \345\217\257\345\210\207\346\217\233&quot;\346\211\213\345\213\225&quot;\357\274\214\351\200\220\344\270\200\346\252\224\346\241\210\347\242\272\345\256\232\357\274\214\346\210\226\346\230\257\345\234\250\345\217\263\351\202\212\350\274\270\345\205\245\346\241\206\350\243\234\345\205\205\344\277\256\346\224\271<br />    2.  \345\246\202\350\246\201\345\205\250\351\203\250\351\207\215\346\226\260\345\201\232\357\274\214\350\253\213\346\211\213\345\213\225\345\210\252\351\231\244output\350\263\207\346\226\231\345\244\276</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   "
                        " 3.  &quot;chatGPT&quot;\344\276\233\346\270\254\350\251\246key\346\230\257\345\220\246\346\255\243\345\270\270\344\275\277\347\224\250</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("StageTr", "\350\252\252\346\230\216", nullptr));
        label->setText(QCoreApplication::translate("StageTr", "api key:", nullptr));
        txKey->setText(QString());
        btnViewPw->setText(QString());
        btnSaveKey->setText(QCoreApplication::translate("StageTr", "\345\204\262\345\255\230KEY", nullptr));
        label_2->setText(QCoreApplication::translate("StageTr", "<a style='color :green; text-decoration: none' href=https://platform.openai.com/account/api-keys> OpenAI key \347\224\263\350\253\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StageTr: public Ui_StageTr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGETR_H
