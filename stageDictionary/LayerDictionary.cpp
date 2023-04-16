#include "LayerDictionary.h"
#include "ui_LayerDictionary.h"

LayerDictionary::LayerDictionary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerDictionary)
{
    ui->setupUi(this);

    QString sItemPath = GLOBAL.config(_CONFIG::DEC_ITEM_PATH).toString();

    ui->txItemPath->setText(sItemPath);

}

LayerDictionary::~LayerDictionary()
{
    delete ui;
}


void LayerDictionary::on_btnSelectItemPath_clicked()
{
    QString sItem=QFileDialog::getOpenFileName(this,"","","*.dat");

    if(sItem.trimmed()!="")
    {
        GLOBAL.setConfig(_CONFIG::DEC_ITEM_PATH,sItem);

        ui->txItemPath->setText(sItem);



    }
}


void LayerDictionary::on_btnStart_clicked()
{
    QString sItem = ui->txItemPath->text().trimmed();

    QFile file(sItem);

    if(file.open(QIODevice::ReadOnly))
    {
     //   QByteArray data = file.readAll();

        QTextStream in(&file);
              // 设置文件编码为合适的编码方式
              in.setCodec(QTextCodec::codecForName("UTF-8")); // 根据实际情况选择编码方式
              QString fileContents = in.readAll();

                  qDebug()<<"AAAAAAAAAAAA0 :"<<fileContents;
        ItemNameDecode dc;
               QString st = dc.decode(fileContents);






        qDebug()<<"AAAAAAAAAAAA :"<<st;

        file.close();
    }
}

