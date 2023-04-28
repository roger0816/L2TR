#include "LayerMergeXml.h"
#include "ui_LayerMergeXml.h"

LayerMergeXml::LayerMergeXml(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerMergeXml)
{
    ui->setupUi(this);
}

LayerMergeXml::~LayerMergeXml()
{
    delete ui;
}

void LayerMergeXml::on_btnSelectOri_clicked()
{
    QString sFile= QFileDialog::getOpenFileName(this,"open file",".","*.xml");

    if(sFile!="")
    {
        ui->txOri->setText(sFile);
    }
}


void LayerMergeXml::on_btnSelectTr_clicked()
{
    QString sFile= QFileDialog::getOpenFileName(this,"open file",".","*.xml");

    if(sFile!="")
    {
        ui->txTr->setText(sFile);
    }
}


void LayerMergeXml::on_btnSend_clicked()
{

    QString sFileName = ui->txOri->text().replace("\\","/").split("/").last().split(".").first();

    m_cMerge.setFile(ui->txOri->text(),ui->txTr->text(),QApplication::applicationDirPath()+"/"+sFileName+"_.xml");

    m_cMerge.doneMerge(ui->txCapStart->text(),ui->txKey->text(),ui->txTarget->text());
}


