/********************************************************************************
** Form generated from reading UI file 'LayerTrDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERTRDETAIL_H
#define UI_LAYERTRDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerTrDetail
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *lbTitle;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *txtOri;
    QTextEdit *txtOut;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnMove;
    QPushButton *btnSave;
    QWidget *widget_4;
    QPushButton *btnClose;

    void setupUi(QWidget *LayerTrDetail)
    {
        if (LayerTrDetail->objectName().isEmpty())
            LayerTrDetail->setObjectName(QString::fromUtf8("LayerTrDetail"));
        LayerTrDetail->resize(846, 612);
        verticalLayout = new QVBoxLayout(LayerTrDetail);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(LayerTrDetail);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 40));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbTitle = new QLabel(widget);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Microsoft JhengHei UI\";"));
        lbTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbTitle, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(LayerTrDetail);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        txtOri = new QTextEdit(widget_2);
        txtOri->setObjectName(QString::fromUtf8("txtOri"));
        txtOri->setReadOnly(true);

        horizontalLayout->addWidget(txtOri);

        txtOut = new QTextEdit(widget_2);
        txtOut->setObjectName(QString::fromUtf8("txtOut"));

        horizontalLayout->addWidget(txtOut);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(LayerTrDetail);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 40));
        widget_3->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(556, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnMove = new QPushButton(widget_3);
        btnMove->setObjectName(QString::fromUtf8("btnMove"));

        horizontalLayout_2->addWidget(btnMove);

        btnSave = new QPushButton(widget_3);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout_2->addWidget(btnSave);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(20, 0));

        horizontalLayout_2->addWidget(widget_4);

        btnClose = new QPushButton(widget_3);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addWidget(widget_3);


        retranslateUi(LayerTrDetail);

        QMetaObject::connectSlotsByName(LayerTrDetail);
    } // setupUi

    void retranslateUi(QWidget *LayerTrDetail)
    {
        LayerTrDetail->setWindowTitle(QCoreApplication::translate("LayerTrDetail", "Form", nullptr));
        lbTitle->setText(QString());
        btnMove->setText(QCoreApplication::translate("LayerTrDetail", "\347\247\273\345\210\260\346\234\252\350\231\225\347\220\206", nullptr));
        btnSave->setText(QCoreApplication::translate("LayerTrDetail", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        btnClose->setText(QCoreApplication::translate("LayerTrDetail", "\351\227\234\351\226\211\350\246\226\347\252\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerTrDetail: public Ui_LayerTrDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERTRDETAIL_H
