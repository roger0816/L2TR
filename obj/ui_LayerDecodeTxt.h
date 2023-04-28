/********************************************************************************
** Form generated from reading UI file 'LayerDecodeTxt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERDECODETXT_H
#define UI_LAYERDECODETXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerDecodeTxt
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTableView *tbTx;

    void setupUi(QWidget *LayerDecodeTxt)
    {
        if (LayerDecodeTxt->objectName().isEmpty())
            LayerDecodeTxt->setObjectName(QString::fromUtf8("LayerDecodeTxt"));
        LayerDecodeTxt->resize(400, 300);
        gridLayout = new QGridLayout(LayerDecodeTxt);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(LayerDecodeTxt);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tbTx = new QTableView(widget);
        tbTx->setObjectName(QString::fromUtf8("tbTx"));
        tbTx->horizontalHeader()->setDefaultSectionSize(160);
        tbTx->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tbTx, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(LayerDecodeTxt);

        QMetaObject::connectSlotsByName(LayerDecodeTxt);
    } // setupUi

    void retranslateUi(QWidget *LayerDecodeTxt)
    {
        LayerDecodeTxt->setWindowTitle(QCoreApplication::translate("LayerDecodeTxt", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerDecodeTxt: public Ui_LayerDecodeTxt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERDECODETXT_H
