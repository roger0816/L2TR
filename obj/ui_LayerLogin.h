/********************************************************************************
** Form generated from reading UI file 'LayerLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERLOGIN_H
#define UI_LAYERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerLogin
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnTest;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *LayerLogin)
    {
        if (LayerLogin->objectName().isEmpty())
            LayerLogin->setObjectName(QString::fromUtf8("LayerLogin"));
        LayerLogin->resize(1280, 720);
        gridLayout = new QGridLayout(LayerLogin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(LayerLogin);
        wBg->setObjectName(QString::fromUtf8("wBg"));
        wBg->setStyleSheet(QString::fromUtf8("QWidget#wBg{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px  solid  lightGray;\n"
"border-radius:5px;\n"
"};"));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(wBg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(600, 200));
        label->setMaximumSize(QSize(600, 16777215));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        widget_2 = new QWidget(wBg);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 40));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(1160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnClose = new QPushButton(widget_2);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft JhengHei UI\";"));
        btnClose->setFlat(true);

        horizontalLayout->addWidget(btnClose);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        widget = new QWidget(wBg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(40, 40));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(1160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        btnTest = new QPushButton(widget);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));

        horizontalLayout_2->addWidget(btnTest);


        gridLayout_2->addWidget(widget, 5, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        widget_3 = new QWidget(wBg);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 80));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 0, 2, 1);


        gridLayout_2->addWidget(widget_3, 4, 0, 1, 3);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(LayerLogin);

        QMetaObject::connectSlotsByName(LayerLogin);
    } // setupUi

    void retranslateUi(QWidget *LayerLogin)
    {
        LayerLogin->setWindowTitle(QCoreApplication::translate("LayerLogin", "Form", nullptr));
        label->setText(QString());
        btnClose->setText(QCoreApplication::translate("LayerLogin", "X", nullptr));
        btnTest->setText(QCoreApplication::translate("LayerLogin", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerLogin: public Ui_LayerLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERLOGIN_H
