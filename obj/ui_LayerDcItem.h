/********************************************************************************
** Form generated from reading UI file 'LayerDcItem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERDCITEM_H
#define UI_LAYERDCITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "LayerDecodeTxt.h"

QT_BEGIN_NAMESPACE

class Ui_LayerDcItem
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget0;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txPath;
    QPushButton *btnSelectItem;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txDir;
    QPushButton *btnSelectDir;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    LayerDecodeTxt *pageTxt;
    QGridLayout *gridLayout;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;

    void setupUi(QWidget *LayerDcItem)
    {
        if (LayerDcItem->objectName().isEmpty())
            LayerDcItem->setObjectName(QString::fromUtf8("LayerDcItem"));
        LayerDcItem->resize(768, 562);
        verticalLayout = new QVBoxLayout(LayerDcItem);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 0, -1, -1);
        widget0 = new QWidget(LayerDcItem);
        widget0->setObjectName(QString::fromUtf8("widget0"));
        widget0->setMinimumSize(QSize(0, 40));
        widget0->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widget0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget0);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txPath = new QLineEdit(widget0);
        txPath->setObjectName(QString::fromUtf8("txPath"));

        horizontalLayout->addWidget(txPath);

        btnSelectItem = new QPushButton(widget0);
        btnSelectItem->setObjectName(QString::fromUtf8("btnSelectItem"));

        horizontalLayout->addWidget(btnSelectItem);


        verticalLayout->addWidget(widget0);

        widget1 = new QWidget(LayerDcItem);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(0, 40));
        widget1->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txDir = new QLineEdit(widget1);
        txDir->setObjectName(QString::fromUtf8("txDir"));

        horizontalLayout_2->addWidget(txDir);

        btnSelectDir = new QPushButton(widget1);
        btnSelectDir->setObjectName(QString::fromUtf8("btnSelectDir"));

        horizontalLayout_2->addWidget(btnSelectDir);


        verticalLayout->addWidget(widget1);

        widget2 = new QWidget(LayerDcItem);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        pageTxt = new LayerDecodeTxt();
        pageTxt->setObjectName(QString::fromUtf8("pageTxt"));
        gridLayout = new QGridLayout(pageTxt);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget->addTab(pageTxt, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);


        verticalLayout->addWidget(widget2);

        groupBox3 = new QGroupBox(LayerDcItem);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        groupBox3->setMinimumSize(QSize(0, 80));
        groupBox3->setMaximumSize(QSize(16777215, 80));
        gridLayout_3 = new QGridLayout(groupBox3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 20, 0);
        widget_2 = new QWidget(groupBox3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(40, 0));
        lineEdit_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(lineEdit_3);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(40, 0));
        lineEdit_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(lineEdit_4);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(groupBox3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(40, 0));
        lineEdit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(lineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(lineEdit_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(groupBox_3, 0, 1, 2, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 1);

        verticalLayout->addWidget(groupBox3);


        retranslateUi(LayerDcItem);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LayerDcItem);
    } // setupUi

    void retranslateUi(QWidget *LayerDcItem)
    {
        LayerDcItem->setWindowTitle(QCoreApplication::translate("LayerDcItem", "Form", nullptr));
        label->setText(QCoreApplication::translate("LayerDcItem", "\345\260\215\347\205\247\346\252\224: (ItemName-tw.txt)", nullptr));
        btnSelectItem->setText(QCoreApplication::translate("LayerDcItem", "\351\201\270\346\223\207\346\252\224\346\241\210", nullptr));
        label_2->setText(QCoreApplication::translate("LayerDcItem", "XML\350\263\207\346\226\231\345\244\276: (data/stats/items)", nullptr));
        btnSelectDir->setText(QCoreApplication::translate("LayerDcItem", "\351\201\270\346\223\207\350\263\207\346\226\231\345\244\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pageTxt), QCoreApplication::translate("LayerDcItem", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LayerDcItem", "Tab 2", nullptr));
        label_5->setText(QCoreApplication::translate("LayerDcItem", "\345\260\215\347\205\247\346\252\224\347\232\204:", nullptr));
        label_6->setText(QCoreApplication::translate("LayerDcItem", "\345\205\247\345\256\271\357\274\214\346\233\277\346\217\233\345\210\260", nullptr));
        label_7->setText(QCoreApplication::translate("LayerDcItem", "\347\232\204\345\205\247\345\256\271", nullptr));
        label_3->setText(QCoreApplication::translate("LayerDcItem", "\345\260\207\345\260\215\347\205\247\346\252\224\347\232\204id\357\274\214\351\227\234\350\201\257XML \345\261\254\346\200\247:", nullptr));
        label_4->setText(QCoreApplication::translate("LayerDcItem", "\345\272\225\344\270\213\347\232\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerDcItem: public Ui_LayerDcItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERDCITEM_H
