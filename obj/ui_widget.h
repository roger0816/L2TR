/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "LayerHelp.h"
#include "StageDictionary.h"
#include "StageTr.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *LeftMenu;
    QGridLayout *gridLayout_2;
    QPushButton *btn0;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn1;
    QStackedWidget *stackedWidget;
    LayerHelp *pageMain;
    StageTr *pageTr;
    StageDictionary *pageDictionary;
    QWidget *pageSetting;
    QWidget *wTitle;
    QGridLayout *gridLayout_3;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 800);
        Widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LeftMenu = new QWidget(Widget);
        LeftMenu->setObjectName(QString::fromUtf8("LeftMenu"));
        LeftMenu->setMinimumSize(QSize(160, 0));
        LeftMenu->setMaximumSize(QSize(160, 16777215));
        LeftMenu->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(LeftMenu);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn0 = new QPushButton(LeftMenu);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setCheckable(true);
        btn0->setChecked(true);

        gridLayout_2->addWidget(btn0, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        btn2 = new QPushButton(LeftMenu);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setCheckable(true);

        gridLayout_2->addWidget(btn2, 2, 0, 1, 1);

        btn3 = new QPushButton(LeftMenu);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setCheckable(true);
        btn3->setChecked(false);

        gridLayout_2->addWidget(btn3, 4, 0, 1, 1);

        btn1 = new QPushButton(LeftMenu);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setCheckable(true);

        gridLayout_2->addWidget(btn1, 1, 0, 1, 1);


        gridLayout->addWidget(LeftMenu, 1, 0, 2, 1);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        pageMain = new LayerHelp();
        pageMain->setObjectName(QString::fromUtf8("pageMain"));
        stackedWidget->addWidget(pageMain);
        pageTr = new StageTr();
        pageTr->setObjectName(QString::fromUtf8("pageTr"));
        stackedWidget->addWidget(pageTr);
        pageDictionary = new StageDictionary();
        pageDictionary->setObjectName(QString::fromUtf8("pageDictionary"));
        stackedWidget->addWidget(pageDictionary);
        pageSetting = new QWidget();
        pageSetting->setObjectName(QString::fromUtf8("pageSetting"));
        stackedWidget->addWidget(pageSetting);

        gridLayout->addWidget(stackedWidget, 2, 1, 1, 2);

        wTitle = new QWidget(Widget);
        wTitle->setObjectName(QString::fromUtf8("wTitle"));
        wTitle->setMinimumSize(QSize(120, 60));
        wTitle->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border-bottom: 1px solid #cccccc;\n"
"\n"
"background-color:#344648;\n"
"background-color:#2d3e4e;\n"
""));
        gridLayout_3 = new QGridLayout(wTitle);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(10, 0, 10, 0);
        label = new QLabel(wTitle);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"font: 700 26px \"Microsoft JhengHei UI\"; "));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(wTitle, 0, 0, 1, 3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn0->setText(QCoreApplication::translate("Widget", "\344\270\273\351\240\201\351\235\242", nullptr));
        btn2->setText(QCoreApplication::translate("Widget", "\346\237\245\350\241\250\345\260\215\347\205\247", nullptr));
        btn3->setText(QCoreApplication::translate("Widget", "\350\250\255\345\256\232", nullptr));
        btn1->setText(QCoreApplication::translate("Widget", " \347\277\273\350\255\257html", nullptr));
        label->setText(QCoreApplication::translate("Widget", "L2TR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
