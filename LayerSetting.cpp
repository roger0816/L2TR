#include "LayerSetting.h"
#include "ui_LayerSetting.h"

LayerSetting::LayerSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerSetting)
{
    ui->setupUi(this);

    ui->lb0->setOpenExternalLinks(true);
    ui->lb0->setTextFormat(Qt::RichText);
    ui->lb0->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->lb0->setOpenExternalLinks(true);
}

LayerSetting::~LayerSetting()
{
    delete ui;
}

void LayerSetting::setDisplayKey(QString sKey)
{
    ui->txKey->setText(sKey);
}

void LayerSetting::on_txKey_textChanged(const QString &)
{
    emit signalKeyChange(ui->txKey->text().trimmed(),false);
}



void LayerSetting::on_btnSaveKey_clicked()
{
    emit signalKeyChange(ui->txKey->text().trimmed(),true);
}

void LayerSetting::on_lb0_linkActivated(const QString &)
{
    QString slink="https://platform.openai.com/account/api-keys";

    QDesktopServices::openUrl(QUrl(slink));
}


