#include "LayerDcItem.h"
#include "ui_LayerDcItem.h"

LayerDcItem::LayerDcItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerDcItem)
{
    ui->setupUi(this);







    connect(ui->btnSelectItem,&QPushButton::clicked,[=]()
    {
        QString tmp = GLOBAL.config(_CONFIG::DEC_ITEM_TXT).toString();

        QString sFile=QFileDialog::getOpenFileName(this,"請選擇ItemName-tw.txt",tmp,"*.txt");

        if(sFile.trimmed()!="")
        {

            GLOBAL.setConfig(_CONFIG::DEC_ITEM_TXT,ui->txPath->text());

            ui->txPath->setText(sFile);

            ui->pageTxt->setFile(sFile);
        }



    });


    connect(ui->btnSelectDir,&QPushButton::clicked,[=]()
    {
        QString tmp = GLOBAL.config(_CONFIG::DEC_ITEM_DIR).toString();

        QString sDir=QFileDialog::getExistingDirectory(this,"請選擇data/stats/items資料夾",tmp);

        if(sDir.trimmed()!="")
        {
            ui->txDir->setText(sDir);

            GLOBAL.setConfig(_CONFIG::DEC_ITEM_DIR,ui->txDir->text());

            //  loadItemTxt();
        }



    });


    QString sItemPath = GLOBAL.config(_CONFIG::DEC_ITEM_TXT).toString();


    if(sItemPath!="")
    {
        ui->txPath->setText(sItemPath);

        ui->pageTxt->setFile(sItemPath);
    }


    QString sItemDir = GLOBAL.config(_CONFIG::DEC_ITEM_DIR).toString();


    if(sItemPath!="")
    {
        ui->txDir->setText(sItemPath);

        // loadItemTxt();
    }



}

LayerDcItem::~LayerDcItem()
{
    delete ui;
}



QString LayerDcItem::toMap(QStringList listData, QVariantMap &out)
{
    QString sReId="";

    out.clear();

    foreach(QString v,listData)
    {

        if(v.contains("id="))
        {
            out[_ITEM_KEY::id]=v.split("=").last();
        }

        if(v.contains("name="))
        {
            out[_ITEM_KEY::name]=v.split("=").last().replace("[","").replace("]","");
        }

        if(v.contains("description="))
        {
            out[_ITEM_KEY::description]=v.split("=").last().replace("[","").replace("]","");
        }

    }


    return sReId;
}



