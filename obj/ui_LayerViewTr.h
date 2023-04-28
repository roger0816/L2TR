/********************************************************************************
** Form generated from reading UI file 'LayerViewTr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERVIEWTR_H
#define UI_LAYERVIEWTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerViewTr
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbAll;
    QRadioButton *rbUndone;
    QRadioButton *rbCheck;
    QRadioButton *rbUncheck;

    void setupUi(QWidget *LayerViewTr)
    {
        if (LayerViewTr->objectName().isEmpty())
            LayerViewTr->setObjectName(QString::fromUtf8("LayerViewTr"));
        LayerViewTr->resize(818, 525);
        gridLayout = new QGridLayout(LayerViewTr);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(LayerViewTr);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        widget = new QWidget(LayerViewTr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 36));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(519, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbAll = new QRadioButton(widget_2);
        rbAll->setObjectName(QString::fromUtf8("rbAll"));
        rbAll->setChecked(true);

        horizontalLayout->addWidget(rbAll);

        rbUndone = new QRadioButton(widget_2);
        rbUndone->setObjectName(QString::fromUtf8("rbUndone"));

        horizontalLayout->addWidget(rbUndone);

        rbCheck = new QRadioButton(widget_2);
        rbCheck->setObjectName(QString::fromUtf8("rbCheck"));

        horizontalLayout->addWidget(rbCheck);

        rbUncheck = new QRadioButton(widget_2);
        rbUncheck->setObjectName(QString::fromUtf8("rbUncheck"));

        horizontalLayout->addWidget(rbUncheck);


        horizontalLayout_2->addWidget(widget_2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(LayerViewTr);

        QMetaObject::connectSlotsByName(LayerViewTr);
    } // setupUi

    void retranslateUi(QWidget *LayerViewTr)
    {
        LayerViewTr->setWindowTitle(QCoreApplication::translate("LayerViewTr", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LayerViewTr", "\346\252\224\346\241\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LayerViewTr", "\345\216\237\346\252\224\345\244\247\345\260\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("LayerViewTr", "\350\231\225\347\220\206\345\276\214\345\244\247\345\260\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("LayerViewTr", "\347\213\200\346\205\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("LayerViewTr", "\350\251\263\347\264\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("LayerViewTr", "\345\216\237\346\252\224\350\267\257\345\276\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("LayerViewTr", "\350\231\225\347\220\206\345\276\214\350\267\257\345\276\221", nullptr));
        rbAll->setText(QCoreApplication::translate("LayerViewTr", "\345\205\250\351\203\250", nullptr));
        rbUndone->setText(QCoreApplication::translate("LayerViewTr", "\347\255\211\345\276\205\350\231\225\347\220\206", nullptr));
        rbCheck->setText(QCoreApplication::translate("LayerViewTr", "\345\267\262\350\231\225\347\220\206", nullptr));
        rbUncheck->setText(QCoreApplication::translate("LayerViewTr", "\346\234\252\350\231\225\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerViewTr: public Ui_LayerViewTr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERVIEWTR_H
