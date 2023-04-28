#include "LayerViewTr.h"
#include "ui_LayerViewTr.h"

LayerViewTr::LayerViewTr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerViewTr)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnWidth(0,400);

    m_btnRb.addButton(ui->rbAll,0);
    m_btnRb.addButton(ui->rbUndone,1);
    m_btnRb.addButton(ui->rbCheck,2);
    m_btnRb.addButton(ui->rbUncheck,3);

    connect(&m_btnRb,&QButtonGroup::idClicked,[=](int )
    {
        refresh();
    });

    ui->tableWidget->hideColumn(5);

    ui->tableWidget->hideColumn(6);

    m_layerDeital->hide();

    connect(m_layerDeital,&LayerTrDetail::refresh,this,&LayerViewTr::refresh);

}

LayerViewTr::~LayerViewTr()
{
    delete m_layerDeital;

    delete ui;
}

void LayerViewTr::refresh()
{

    QModelIndex index= ui->tableWidget->currentIndex();

    m_listFilePath =searchOriFile(m_sOriDir);

    qDebug()<<"refresh : "<<m_listFilePath.length();
    ui->tableWidget->setRowCount(0);

    for(int i=0;i<m_listFilePath.length();i++)
    {
        const QString sTarget =QString(m_listFilePath.at(i)).replace("\\","/");

        QString sFileName = sTarget.split("/").last();

        if(!checkFilter(sTarget))
            continue;

        int iRow = ui->tableWidget->rowCount();

        ui->tableWidget->setRowCount(iRow+1);


        QString samplePath = sTarget;
        samplePath.replace(m_sOriDir+"/","");

        ui->tableWidget->setItem(iRow,0,tbItem(samplePath));

        int iOriSize = fileSize(sTarget);

        ui->tableWidget->setItem(iRow,1,tbItem(iOriSize));




        QString sCheckPath;

        int iTmp=status(sTarget,&sCheckPath);

        QStringList listStatusSt={"未知","等待處理","未處理","已處理"};

        ui->tableWidget->setItem(iRow,5,tbItem(sTarget));

        ui->tableWidget->setItem(iRow,6,tbItem(sCheckPath));



        QTableWidgetItem *item =tbItem(listStatusSt.at(iTmp));

        if(iTmp==_check)
        {
            item->setForeground(QColor("green"));

            int iS = fileSize(sCheckPath);
            QTableWidgetItem *itemSize = tbItem(iS);

            if(iS*1.15<iOriSize || iOriSize*1.15 <iS)
             itemSize->setForeground(QColor("red"));

            ui->tableWidget->setItem(iRow,2,itemSize);

            ui->tableWidget->setItem(iRow,4,tbItem("內容",1));

        }

        if(iTmp==_uncheck)
        {
            item->setForeground(QColor("red"));
        }

        ui->tableWidget->setItem(iRow,3,item);


    }



    if(ui->tableWidget->rowCount()>index.row() && index.row()>=0
            &&ui->tableWidget->columnCount()>index.column() && index.column()>=0)
    {
        ui->tableWidget->setCurrentIndex(index);
    }

}

bool LayerViewTr::checkFilter(QString sFilePath)
{
    bool bRe = false;

    QString sTmp;

    if(ui->rbUndone->isChecked())
    {
        if(status(sFilePath)==_undone)
            bRe =true;
    }
    else if(ui->rbUncheck->isChecked())
    {
        if(status(sFilePath)==_uncheck)
            bRe =true;
    }
    else if(ui->rbCheck->isChecked())
    {
        if(status(sFilePath)==_check)
            bRe =true;
    }
    else if(ui->rbAll->isChecked())
        bRe =true;



    return bRe;
}

int LayerViewTr::fileSize(QString sFilePath)
{
    int iRe =0;
    QFile f(sFilePath);

    if(f.open(QIODevice::ReadOnly))
    {
        iRe = f.readAll().size();

        f.close();
    }

    return iRe;
}

bool LayerViewTr::hasFile(QString sFilePath)
{
    QFileInfo info(sFilePath);

    bool bHas = false;

    bHas = info.exists();


    qDebug()<<sFilePath<<" : "<<bHas;

    return bHas;
}

int LayerViewTr::status(const QString sOriFile, QString *sPath)
{

     int iRe =_unkown;

    QString path;

    QString sTarget = sOriFile;

    QString sRootPath= m_sOriDir.split("/").last();


    QString sFileName = sOriFile;

    sFileName.replace(m_sOriDir,"");

    QString sCheck=m_sDir+"/check/"+sRootPath+sFileName;

    QString sUncheck = m_sDir+"/uncheck/"+sRootPath+sFileName;

    QString sUndone=m_sDir+"/undone/"+sRootPath+sFileName;

    if(hasFile(sCheck))
    {
        path = sCheck;
        iRe = _check;
    }
    else  if(hasFile(sUncheck))
    {
        path = sUncheck;
        iRe = _uncheck;
    }
    else  if(hasFile(sUndone))
    {
        path = sUndone;
        iRe = _undone;
    }
    else
    {
        path ="";
        iRe= _unkown;
    }

    if(sPath!=nullptr)
    {
        *sPath=path;
    }

    return iRe;
}

void LayerViewTr::slotScan(QString sOriDir, QString sDir)
{
    QString sTmpOri,sTmpDir;

    sTmpOri = sOriDir;

    sTmpDir = sDir;

    sTmpOri =sTmpOri.replace("\\","/");

    sTmpDir = sTmpDir.replace("\\","/");

    qDebug()<<"ori : "<<sOriDir<<" , "<<sDir;

    if(sTmpOri.trimmed()=="" || sTmpDir.trimmed()=="")
        return;

    if(sTmpOri.trimmed()==m_sOriDir.trimmed() &&
            sTmpDir.trimmed()==m_sDir.trimmed())
        return;


    m_sOriDir = sTmpOri;

    m_sDir=sTmpDir;

    refresh();


}


QStringList LayerViewTr::searchOriFile(QString sPath)
{

    QStringList listRe;



    QStringList fileExtensions = { "html", "htm","xml"};

    QDir dir(sPath);
    dir.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    dir.setSorting(QDir::DirsFirst);


    if (dir.exists())
    {

        QStringList fileList = dir.entryList();
        for (const auto &fileName : fileList)
        {


            QFileInfo fileInfo(sPath + "/" + fileName);

            if(fileInfo.isDir())
            {

                listRe.append(searchOriFile(sPath + "/" + fileName));
            }
            else
            {


                QString suffix = fileInfo.suffix();
                if (fileExtensions.contains(suffix, Qt::CaseInsensitive))
                {
                    listRe.append(sPath + "/" + fileName);
                    // 文件符合要求，可以进行相应操作
                  //  qDebug() << fileName << " has extension " << suffix;
                }
            }
        }
    }

    return listRe;
}


QTableWidgetItem *LayerViewTr::tbItem(QVariant var, int iType, int iPixSize)
{
    QString st = var.toString();

    int type =iType;

    if(type==_AUTO)
    {
        if(var.type()==QVariant::Bool)
            type = _BOOL;
        else if(var.type()==QVariant::Double)
            type = _DOUBLE;
        else if(var.type()==QVariant::Date)
            type = _DATE;
        else if(var.type()==QVariant::DateTime)
            type = _DATETIME;
        else
            type = _TXT;

    }




    QTableWidgetItem *item = new QTableWidgetItem();

    QFont f =item->font();


    if(type == _BOOL)
    {
        st ="是";

        if(!var.toBool())
            st="否";
    }
    else if(type == _DOUBLE)
    {
        st = QString::number(var.toDouble(),'f', 2);
    }
    else if(type == _DATE)
    {
        st = var.toDateTime().toString("yyyy/MM/dd");

    }
    else if(type == _DATETIME)
    {
        st = var.toDateTime().toString("yyyy/MM/dd hh:mm");
        f.setPixelSize(12);
    }
    else if(type == _BUTTON)
    {
        f.setUnderline(true);

        item->setForeground(QColor(85,170,255));
    }
    else if(type == _TOOLTIP)
    {
        item->setForeground(QColor(77,77,77));
    }
    else if(type==_HTML)
    {
        //to do
    }
    else{}

    item->setText(st);


    if(iPixSize!=14)
        f.setPixelSize(iPixSize);


    item->setFont(f);


    item->setTextAlignment(Qt::AlignCenter);




    return item;
}




void LayerViewTr::on_tableWidget_cellClicked(int row, int column)
{
    if(row<0 || ui->tableWidget->rowCount()<1)
        return ;

    if(column==4 && ui->tableWidget->item(row,4)->text().trimmed()!="")
    {
        m_layerDeital->setData(ui->tableWidget->item(row,0)->text(),
                               ui->tableWidget->item(row,5)->text(),
                               ui->tableWidget->item(row,6)->text());

        m_layerDeital->show();

        m_layerDeital->raise();

    }

}

