#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //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

    ui->lb0->setOpenExternalLinks(true);
    ui->lb0->setTextFormat(Qt::RichText);
    ui->lb0->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->lb0->setOpenExternalLinks(true);

    QVariantMap conf =ui->pageTr->loadConf();

    ui->txKey->setText(conf["key"].toString());

    ui->pageTr->m_api.setKey(ui->txKey->text().trimmed());

    ui->pageTest->m_api.setKey(ui->txKey->text().trimmed());


    ui->tabWidget->setCurrentIndex(0);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_lb0_linkActivated(const QString &link)
{
    QString slink="https://platform.openai.com/account/api-keys";

    QDesktopServices::openUrl(slink);
}


void Widget::on_btnSet_clicked()
{
    ui->pageTr->m_api.setKey(ui->txKey->text().trimmed());

    ui->pageTest->m_api.setKey(ui->txKey->text().trimmed());

    QVariantMap conf = ui->pageTr->loadConf();

    conf["key"]=ui->txKey->text().trimmed();

    ui->pageTr->writeConf(conf);
}


void Widget::on_txKey_textChanged(const QString &arg1)
{


    ui->pageTr->m_api.setKey(ui->txKey->text().trimmed());

    ui->pageTest->m_api.setKey(ui->txKey->text().trimmed());


}

