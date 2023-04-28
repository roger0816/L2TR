#include "LayerDecodeTxt.h"
#include "ui_LayerDecodeTxt.h"

LayerDecodeTxt::LayerDecodeTxt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerDecodeTxt)
{
    ui->setupUi(this);

    ui->tbTx->setModel(m_model);

    ui->tbTx->setColumnWidth(0,30);


}

LayerDecodeTxt::~LayerDecodeTxt()
{
    delete ui;
}

void LayerDecodeTxt::setFile(QString sFilePath)
{
    m_sFilePath = sFilePath;

    loadTxt();
    refresh();
}

void LayerDecodeTxt::refresh()
{

    m_model->clear();


    if(m_dData.keys().length()<1)
    {
        return;
    }

    QStringList listId=m_dData.keys();



    std::sort(listId.begin(), listId.end(), [](const QString& s1, const QString& s2) {
        return s1.toInt() < s2.toInt();
    });



    QStringList listHeader;;


    for (int row = 0; row < listId.length(); ++row)
    {
        QStringList listTarget = m_dData.value(listId.at(row)).toStringList();
      //  qDebug()<<listTarget;
        if(row==0)
        {
            m_model->setColumnCount(listTarget.length());

            auto getHeaders= [=]()
            {
                QStringList listRe;

                foreach(QString v,listTarget)
                {
                    listRe.append(v.split("=").first());
                }

                return listRe;
            };

            listHeader = getHeaders();

            m_model->setHorizontalHeaderLabels(listHeader);

        }

        m_model->setRowCount(row+1);

        for (int i = 0; i < listTarget.length(); ++i)
        {
            QString v = listTarget.at(i);

            QString sKey = v.split("=").first();

            QString sValue = v.split("=").last();

            int iCol  = listHeader.indexOf(sKey);

            if(iCol<0)
                continue;

            QModelIndex index = m_model->index(row, iCol, QModelIndex());



            m_model->setData(index, sValue);


        }
    }


    qDebug()<<"AA2: "<<QDateTime::currentDateTime().toString("hh:mm:ss:zzz");

    //ui->tbTx->viewport()->update();
}

void LayerDecodeTxt::loadTxt()
{
    m_dData.clear();
    QFile file(m_sFilePath);

    if(file.open(QIODevice::ReadOnly))
    {

        QTextStream in(&file);
        QString text = in.readAll();

        QStringList tmp= text.replace("\r\n","\n").split("\n");


        foreach(QString v,tmp)
        {
            QStringList list=v.split("\t");

            if(list.length()>0 &&
                    list.first().split("=").length()<2)
                list.pop_front();

            if(list.length()>0 &&
                    list.last().split("=").length()<2)
                list.pop_back();


            int idx =listIndexHasStr(list,"id=");

            if(idx>=0)
            {
                QString sId = list.at(idx).split("=").last();

                m_dData[sId]=list;

            }


        }


        file.close();
    }

}



int LayerDecodeTxt::listIndexHasStr(QStringList list, QString sKey)
{

        if(list.length()<1)
            return -1;


        for(int i=0;i<list.length();i++)
        {
            if(list.at(i).contains(sKey))
                return i;
        }

        return -1;

}
