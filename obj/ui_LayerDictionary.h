/********************************************************************************
** Form generated from reading UI file 'LayerDictionary.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERDICTIONARY_H
#define UI_LAYERDICTIONARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerDictionary
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnSelectItemPath;
    QLineEdit *txItemPath;
    QWidget *widget;
    QPushButton *btnStart;

    void setupUi(QWidget *LayerDictionary)
    {
        if (LayerDictionary->objectName().isEmpty())
            LayerDictionary->setObjectName(QString::fromUtf8("LayerDictionary"));
        LayerDictionary->resize(548, 377);
        gridLayout = new QGridLayout(LayerDictionary);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnSelectItemPath = new QPushButton(LayerDictionary);
        btnSelectItemPath->setObjectName(QString::fromUtf8("btnSelectItemPath"));

        gridLayout->addWidget(btnSelectItemPath, 0, 1, 1, 1);

        txItemPath = new QLineEdit(LayerDictionary);
        txItemPath->setObjectName(QString::fromUtf8("txItemPath"));

        gridLayout->addWidget(txItemPath, 0, 0, 1, 1);

        widget = new QWidget(LayerDictionary);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 2, 0, 1, 2);

        btnStart = new QPushButton(LayerDictionary);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        gridLayout->addWidget(btnStart, 1, 1, 1, 1);


        retranslateUi(LayerDictionary);

        QMetaObject::connectSlotsByName(LayerDictionary);
    } // setupUi

    void retranslateUi(QWidget *LayerDictionary)
    {
        LayerDictionary->setWindowTitle(QCoreApplication::translate("LayerDictionary", "Form", nullptr));
        btnSelectItemPath->setText(QCoreApplication::translate("LayerDictionary", "PushButton", nullptr));
        btnStart->setText(QCoreApplication::translate("LayerDictionary", "\345\225\237\345\213\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerDictionary: public Ui_LayerDictionary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERDICTIONARY_H
