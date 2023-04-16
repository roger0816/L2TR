#include "StageTr.h"
#include "ui_StageTr.h"

StageTr::StageTr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageTr)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    QString sKey=GLOBAL.config("GPT/key").toString();
    ui->txKey->setText(sKey);

    if(GLOBAL.config(_CONFIG::GPT_PATH).toString().trimmed()=="")
    {
        ui->tabWidget->setCurrentIndex(2);
    }

}

StageTr::~StageTr()
{
    delete ui;
}

void StageTr::on_btnViewPw_clicked()
{

    if(ui->btnViewPw->isChecked())
        ui->txKey->setEchoMode(QLineEdit::Normal);
    else
        ui->txKey->setEchoMode(QLineEdit::Password);

}


void StageTr::on_btnSaveKey_clicked()
{
    GLOBAL.setConfig("GPT/key",ui->txKey->text().trimmed());
}


void StageTr::on_txKey_textChanged(const QString &arg1)
{
    ui->pageTr->m_api.setKey(arg1.trimmed());
    ui->pageTest->m_api.setKey(arg1.trimmed());
}


void StageTr::on_lineEdit_selectionChanged()
{

    QString slink="https://platform.openai.com/account/api-keys";

   // QDesktopServices::openUrl(QUrl(slink));
}


void StageTr::on_label_2_linkActivated(const QString &link)
{
    QString slink="https://platform.openai.com/account/api-keys";

    QDesktopServices::openUrl(QUrl(slink));
}


