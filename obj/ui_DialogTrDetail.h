/********************************************************************************
** Form generated from reading UI file 'DialogTrDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTRDETAIL_H
#define UI_DIALOGTRDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogTrDetail
{
public:

    void setupUi(QDialog *DialogTrDetail)
    {
        if (DialogTrDetail->objectName().isEmpty())
            DialogTrDetail->setObjectName(QString::fromUtf8("DialogTrDetail"));
        DialogTrDetail->resize(400, 300);

        retranslateUi(DialogTrDetail);

        QMetaObject::connectSlotsByName(DialogTrDetail);
    } // setupUi

    void retranslateUi(QDialog *DialogTrDetail)
    {
        DialogTrDetail->setWindowTitle(QCoreApplication::translate("DialogTrDetail", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTrDetail: public Ui_DialogTrDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTRDETAIL_H
