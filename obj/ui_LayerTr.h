/********************************************************************************
** Form generated from reading UI file 'LayerTr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERTR_H
#define UI_LAYERTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerTr
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbToken;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbMsg;
    QLabel *lbError;
    QLabel *lbCount;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnUnCheck;
    QPushButton *btnRefresh;
    QPushButton *btnCheck;
    QGroupBox *rbGounp1;
    QGridLayout *gridLayout_4;
    QRadioButton *rbAuto;
    QRadioButton *rbManual;
    QFrame *line;
    QLabel *label_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *rbSkip;
    QRadioButton *rbReplace;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *txtOri;
    QTextEdit *txtOut;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btnSelectDir;
    QLabel *label_3;
    QLineEdit *txOutPath;
    QLineEdit *txPath;
    QLabel *label;
    QPushButton *btnGoto;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbFileName;
    QComboBox *cbType;
    QPushButton *btnRun;

    void setupUi(QWidget *LayerTr)
    {
        if (LayerTr->objectName().isEmpty())
            LayerTr->setObjectName(QString::fromUtf8("LayerTr"));
        LayerTr->resize(789, 450);
        QFont font;
        font.setPointSize(10);
        LayerTr->setFont(font);
        gridLayout = new QGridLayout(LayerTr);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(LayerTr);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 36));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lbToken = new QLabel(widget_5);
        lbToken->setObjectName(QString::fromUtf8("lbToken"));
        lbToken->setMinimumSize(QSize(40, 0));

        horizontalLayout_5->addWidget(lbToken);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lbMsg = new QLabel(widget_5);
        lbMsg->setObjectName(QString::fromUtf8("lbMsg"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbMsg->sizePolicy().hasHeightForWidth());
        lbMsg->setSizePolicy(sizePolicy);
        lbMsg->setMinimumSize(QSize(120, 0));
        lbMsg->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbMsg);

        lbError = new QLabel(widget_5);
        lbError->setObjectName(QString::fromUtf8("lbError"));
        lbError->setMinimumSize(QSize(250, 0));
        lbError->setStyleSheet(QString::fromUtf8("font: 9pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout_5->addWidget(lbError);

        lbCount = new QLabel(widget_5);
        lbCount->setObjectName(QString::fromUtf8("lbCount"));
        lbCount->setMinimumSize(QSize(75, 0));

        horizontalLayout_5->addWidget(lbCount);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(200, 0));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnUnCheck = new QPushButton(widget_4);
        btnUnCheck->setObjectName(QString::fromUtf8("btnUnCheck"));

        horizontalLayout->addWidget(btnUnCheck);

        btnRefresh = new QPushButton(widget_4);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        horizontalLayout->addWidget(btnRefresh);

        btnCheck = new QPushButton(widget_4);
        btnCheck->setObjectName(QString::fromUtf8("btnCheck"));

        horizontalLayout->addWidget(btnCheck);


        horizontalLayout_5->addWidget(widget_4);


        horizontalLayout_4->addWidget(widget_5);


        gridLayout->addWidget(widget_2, 3, 0, 1, 4);

        rbGounp1 = new QGroupBox(LayerTr);
        rbGounp1->setObjectName(QString::fromUtf8("rbGounp1"));
        gridLayout_4 = new QGridLayout(rbGounp1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(4, 0, 4, 0);
        rbAuto = new QRadioButton(rbGounp1);
        rbAuto->setObjectName(QString::fromUtf8("rbAuto"));
        rbAuto->setChecked(true);

        gridLayout_4->addWidget(rbAuto, 0, 1, 1, 1);

        rbManual = new QRadioButton(rbGounp1);
        rbManual->setObjectName(QString::fromUtf8("rbManual"));
        rbManual->setChecked(false);

        gridLayout_4->addWidget(rbManual, 0, 2, 1, 1);

        line = new QFrame(rbGounp1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 3);

        label_2 = new QLabel(rbGounp1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        widget_7 = new QWidget(rbGounp1);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(0, 24));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        rbSkip = new QRadioButton(widget_7);
        rbSkip->setObjectName(QString::fromUtf8("rbSkip"));
        rbSkip->setChecked(true);

        horizontalLayout_3->addWidget(rbSkip);

        rbReplace = new QRadioButton(widget_7);
        rbReplace->setObjectName(QString::fromUtf8("rbReplace"));

        horizontalLayout_3->addWidget(rbReplace);


        gridLayout_4->addWidget(widget_7, 2, 0, 1, 3);


        gridLayout->addWidget(rbGounp1, 0, 3, 1, 1);

        widget_3 = new QWidget(LayerTr);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 100));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        txtOri = new QTextEdit(widget_3);
        txtOri->setObjectName(QString::fromUtf8("txtOri"));
        txtOri->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:1px solid #cccccc;\n"
"border-radius: 5px; \n"
"\n"
""));
        txtOri->setReadOnly(true);

        horizontalLayout_2->addWidget(txtOri);

        txtOut = new QTextEdit(widget_3);
        txtOut->setObjectName(QString::fromUtf8("txtOut"));
        txtOut->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(txtOut);


        gridLayout->addWidget(widget_3, 2, 0, 1, 4);

        widget = new QWidget(LayerTr);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 40));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnSelectDir = new QPushButton(widget);
        btnSelectDir->setObjectName(QString::fromUtf8("btnSelectDir"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSelectDir->sizePolicy().hasHeightForWidth());
        btnSelectDir->setSizePolicy(sizePolicy2);
        btnSelectDir->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(btnSelectDir, 0, 4, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        txOutPath = new QLineEdit(widget);
        txOutPath->setObjectName(QString::fromUtf8("txOutPath"));

        gridLayout_2->addWidget(txOutPath, 1, 2, 1, 2);

        txPath = new QLineEdit(widget);
        txPath->setObjectName(QString::fromUtf8("txPath"));

        gridLayout_2->addWidget(txPath, 0, 2, 1, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        btnGoto = new QPushButton(widget);
        btnGoto->setObjectName(QString::fromUtf8("btnGoto"));

        gridLayout_2->addWidget(btnGoto, 1, 4, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 3);

        widget_6 = new QWidget(LayerTr);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, 0, 0);
        lbFileName = new QLabel(widget_6);
        lbFileName->setObjectName(QString::fromUtf8("lbFileName"));

        horizontalLayout_6->addWidget(lbFileName);

        cbType = new QComboBox(widget_6);
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->setObjectName(QString::fromUtf8("cbType"));
        cbType->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(cbType);

        btnRun = new QPushButton(widget_6);
        btnRun->setObjectName(QString::fromUtf8("btnRun"));
        btnRun->setMinimumSize(QSize(120, 0));
        btnRun->setMaximumSize(QSize(120, 16777215));
        btnRun->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(btnRun);


        gridLayout->addWidget(widget_6, 1, 0, 1, 4);


        retranslateUi(LayerTr);

        QMetaObject::connectSlotsByName(LayerTr);
    } // setupUi

    void retranslateUi(QWidget *LayerTr)
    {
        LayerTr->setWindowTitle(QCoreApplication::translate("LayerTr", "Form", nullptr));
        lbToken->setText(QString());
        lbMsg->setText(QString());
        lbError->setText(QString());
        lbCount->setText(QString());
        btnUnCheck->setText(QCoreApplication::translate("LayerTr", "\345\276\205\347\242\272\350\252\215", nullptr));
        btnRefresh->setText(QCoreApplication::translate("LayerTr", "\351\207\215\350\251\246", nullptr));
        btnCheck->setText(QCoreApplication::translate("LayerTr", "\347\271\274\347\272\214", nullptr));
        rbAuto->setText(QCoreApplication::translate("LayerTr", "\350\207\252\345\213\225\351\200\262\350\241\214", nullptr));
        rbManual->setText(QCoreApplication::translate("LayerTr", "\346\211\213\345\213\225\347\242\272\350\252\215", nullptr));
        label_2->setText(QCoreApplication::translate("LayerTr", "\346\250\241\345\274\217:", nullptr));
        label_4->setText(QCoreApplication::translate("LayerTr", "\350\274\270\345\207\272\346\252\224\345\255\230\345\234\250\346\231\202:", nullptr));
        rbSkip->setText(QCoreApplication::translate("LayerTr", "\350\267\263\351\201\216", nullptr));
        rbReplace->setText(QCoreApplication::translate("LayerTr", "\346\233\277\346\217\233", nullptr));
        btnSelectDir->setText(QCoreApplication::translate("LayerTr", "\351\201\270\346\223\207\350\263\207\346\226\231\345\244\276", nullptr));
        label_3->setText(QCoreApplication::translate("LayerTr", "\350\274\270\345\207\272:", nullptr));
        label->setText(QCoreApplication::translate("LayerTr", "\344\276\206\346\272\220:", nullptr));
        btnGoto->setText(QCoreApplication::translate("LayerTr", "\345\211\215\345\276\200\350\263\207\346\226\231\345\244\276", nullptr));
        lbFileName->setText(QString());
        cbType->setItemText(0, QCoreApplication::translate("LayerTr", "\347\271\201\351\253\224\344\270\255\346\226\207", nullptr));
        cbType->setItemText(1, QCoreApplication::translate("LayerTr", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));

        btnRun->setText(QCoreApplication::translate("LayerTr", "\345\225\237\345\213\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerTr: public Ui_LayerTr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERTR_H
