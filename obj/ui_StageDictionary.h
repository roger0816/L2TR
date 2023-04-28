/********************************************************************************
** Form generated from reading UI file 'StageDictionary.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGEDICTIONARY_H
#define UI_STAGEDICTIONARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "LayerDcItem.h"

QT_BEGIN_NAMESPACE

class Ui_StageDictionary
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn0;
    QPushButton *btn1;
    QPushButton *btn2;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *stackedWidget;
    LayerDcItem *pageItem;
    QWidget *stackedWidgetPage2;
    QWidget *stackedWidgetPage3;

    void setupUi(QWidget *StageDictionary)
    {
        if (StageDictionary->objectName().isEmpty())
            StageDictionary->setObjectName(QString::fromUtf8("StageDictionary"));
        StageDictionary->resize(665, 447);
        gridLayout = new QGridLayout(StageDictionary);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(StageDictionary);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 36));
        widget->setStyleSheet(QString::fromUtf8("font: 700 14px \"Microsoft JhengHei UI\";"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn0 = new QPushButton(widget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setCheckable(true);
        btn0->setChecked(true);

        horizontalLayout->addWidget(btn0);

        btn1 = new QPushButton(widget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setCheckable(true);

        horizontalLayout->addWidget(btn1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setCheckable(true);

        horizontalLayout->addWidget(btn2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(StageDictionary);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageItem = new LayerDcItem();
        pageItem->setObjectName(QString::fromUtf8("pageItem"));
        stackedWidget->addWidget(pageItem);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        stackedWidget->addWidget(stackedWidgetPage3);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(StageDictionary);

        QMetaObject::connectSlotsByName(StageDictionary);
    } // setupUi

    void retranslateUi(QWidget *StageDictionary)
    {
        StageDictionary->setWindowTitle(QCoreApplication::translate("StageDictionary", "Form", nullptr));
        btn0->setText(QCoreApplication::translate("StageDictionary", "Item", nullptr));
        btn1->setText(QCoreApplication::translate("StageDictionary", "Npc", nullptr));
        btn2->setText(QCoreApplication::translate("StageDictionary", "Skill", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StageDictionary: public Ui_StageDictionary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEDICTIONARY_H
