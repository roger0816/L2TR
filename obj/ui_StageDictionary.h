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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "LayerDictionary.h"

QT_BEGIN_NAMESPACE

class Ui_StageDictionary
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    LayerDictionary *pageDictionary;
    QWidget *pageHelp;

    void setupUi(QWidget *StageDictionary)
    {
        if (StageDictionary->objectName().isEmpty())
            StageDictionary->setObjectName(QString::fromUtf8("StageDictionary"));
        StageDictionary->resize(665, 447);
        gridLayout = new QGridLayout(StageDictionary);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(StageDictionary);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        pageDictionary = new LayerDictionary();
        pageDictionary->setObjectName(QString::fromUtf8("pageDictionary"));
        tabWidget->addTab(pageDictionary, QString());
        pageHelp = new QWidget();
        pageHelp->setObjectName(QString::fromUtf8("pageHelp"));
        tabWidget->addTab(pageHelp, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(StageDictionary);

        QMetaObject::connectSlotsByName(StageDictionary);
    } // setupUi

    void retranslateUi(QWidget *StageDictionary)
    {
        StageDictionary->setWindowTitle(QCoreApplication::translate("StageDictionary", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pageDictionary), QCoreApplication::translate("StageDictionary", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pageHelp), QCoreApplication::translate("StageDictionary", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StageDictionary: public Ui_StageDictionary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEDICTIONARY_H
