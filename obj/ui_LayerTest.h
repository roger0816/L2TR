/********************************************************************************
** Form generated from reading UI file 'LayerTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERTEST_H
#define UI_LAYERTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerTest
{
public:
    QGridLayout *gridLayout;
    QTextEdit *txt1;
    QTextEdit *txt0;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTalk;

    void setupUi(QWidget *LayerTest)
    {
        if (LayerTest->objectName().isEmpty())
            LayerTest->setObjectName(QString::fromUtf8("LayerTest"));
        LayerTest->resize(596, 395);
        gridLayout = new QGridLayout(LayerTest);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        txt1 = new QTextEdit(LayerTest);
        txt1->setObjectName(QString::fromUtf8("txt1"));

        gridLayout->addWidget(txt1, 0, 2, 1, 1);

        txt0 = new QTextEdit(LayerTest);
        txt0->setObjectName(QString::fromUtf8("txt0"));

        gridLayout->addWidget(txt0, 0, 0, 1, 1);

        widget = new QWidget(LayerTest);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(476, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnTalk = new QPushButton(widget);
        btnTalk->setObjectName(QString::fromUtf8("btnTalk"));

        horizontalLayout->addWidget(btnTalk);


        gridLayout->addWidget(widget, 1, 0, 1, 3);


        retranslateUi(LayerTest);

        QMetaObject::connectSlotsByName(LayerTest);
    } // setupUi

    void retranslateUi(QWidget *LayerTest)
    {
        LayerTest->setWindowTitle(QCoreApplication::translate("LayerTest", "Form", nullptr));
        btnTalk->setText(QCoreApplication::translate("LayerTest", "\345\260\215\350\251\261\351\200\201\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerTest: public Ui_LayerTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERTEST_H
