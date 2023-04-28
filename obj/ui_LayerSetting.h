/********************************************************************************
** Form generated from reading UI file 'LayerSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERSETTING_H
#define UI_LAYERSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerSetting
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txKey;
    QPushButton *btnSaveKey;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *lb0;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LayerSetting)
    {
        if (LayerSetting->objectName().isEmpty())
            LayerSetting->setObjectName(QString::fromUtf8("LayerSetting"));
        LayerSetting->resize(967, 633);
        gridLayout = new QGridLayout(LayerSetting);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(LayerSetting);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txKey = new QLineEdit(widget);
        txKey->setObjectName(QString::fromUtf8("txKey"));

        horizontalLayout->addWidget(txKey);

        btnSaveKey = new QPushButton(widget);
        btnSaveKey->setObjectName(QString::fromUtf8("btnSaveKey"));
        btnSaveKey->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);"));

        horizontalLayout->addWidget(btnSaveKey);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(LayerSetting);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb0 = new QLabel(widget_2);
        lb0->setObjectName(QString::fromUtf8("lb0"));

        gridLayout_2->addWidget(lb0, 0, 0, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(LayerSetting);

        QMetaObject::connectSlotsByName(LayerSetting);
    } // setupUi

    void retranslateUi(QWidget *LayerSetting)
    {
        LayerSetting->setWindowTitle(QCoreApplication::translate("LayerSetting", "Form", nullptr));
        label->setText(QCoreApplication::translate("LayerSetting", "\350\274\270\345\205\245api key:", nullptr));
        btnSaveKey->setText(QCoreApplication::translate("LayerSetting", "\345\204\262\345\255\230KEY", nullptr));
        lb0->setText(QCoreApplication::translate("LayerSetting", "<html><head/><body><p><span style=\" color:#008000;\">https://platform.openai.com/account/api-keys</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerSetting: public Ui_LayerSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERSETTING_H
