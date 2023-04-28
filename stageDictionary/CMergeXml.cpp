#include "CMergeXml.h"

CMergeXml::CMergeXml(QObject *parent)
    : QObject{parent}
{

}

void CMergeXml::setFile(QString sOriXml, QString sTrXml, QString sOut)
{
    m_sFileOri = sOriXml;

    m_sFileTr = sTrXml;

    m_sFileOut = sOut;
}

void CMergeXml::doneMerge(QString sPoint, QString sKey, QString sTarget)
{
    m_sSartSt= sPoint;
    m_sKey = sKey;
    m_sTarget = sTarget;

    captrueTarget();


}



void CMergeXml::captrueTarget()
{
    auto readFile=[=](QString sFile)
    {

        QFile file(sFile);

        file.open(QIODevice::ReadWrite);

        QTextStream out(&file);

        QString st;// (file.readAll());

        st=out.readAll();

        file.close();

        return st;
    };



    QVariantMap dData;

    QString stOri = readFile(m_sFileOri);


    QString stMerge = readFile(m_sFileTr);

    QString sStart = "<"+m_sSartSt.trimmed();

    QString sEnd =">";    //= ui->txCaptrueEnd->text().trimmed();

    QStringList tmp0 =stOri.split(sStart);
    if(tmp0.length()>0)
        tmp0.pop_front();

    QStringList tmp1 =stMerge.split(sStart);
    if(tmp1.length()>0)
        tmp1.pop_front();



    foreach(QString st,tmp0)
    {
        QString sTmp = sStart+st.split(sEnd).first()+sEnd;

        QString sKey = checkValue(sTmp,m_sKey.trimmed());

        QVariantMap d;
        d["str0"]=sTmp;
        d["data0"]=decode(sTmp);
        d["targetKey"]=m_sTarget;
        dData[sKey]=d;

        // qDebug()<<"key : "<<sKey<<" , "<<sTmp<<" , "<<checkValue(sTmp,ui->txTarget->text().trimmed());
    }


    foreach(QString st,tmp1)
    {
        QString sTmp = sStart+st.split(sEnd).first()+sEnd;

        QString sKey = checkValue(sTmp,m_sKey.trimmed());

        QVariantMap d=dData[sKey].toMap();
        d["str1"]=sTmp;
        d["data1"]=decode(sTmp);
        d["targetKey"]=m_sTarget;

        QString sSt = d["str0"].toString();

        if(sSt.length()>0)
        {
            QString sOriValue = d["data0"].toMap()[m_sTarget].toString();
            QString sTrValue =  d["data1"].toMap()[m_sTarget].toString();

            sSt.replace(sOriValue,sTrValue);

            d["str2"] = sSt;
        }

        dData[sKey]=d;

        // qDebug()<<"key : "<<sKey<<" , "<<sTmp<<" , "<<checkValue(sTmp,ui->txTarget->text().trimmed());
    }



    QString stFile =stOri;

    QStringList listKey = dData.keys();

   for(int i=0;i<listKey.length();i++)
   {
       QVariantMap d = dData[listKey.at(i)].toMap();
       QString sTarget = d["targetKey"].toString();
       QString sOri = d["data0"].toMap()[sTarget].toString();
       QString sTr = d["data1"].toMap()[sTarget].toString();

      // st= st.replace(sOri,sTr);
        stFile=stFile.replace(d["str0"].toString(),d["str2"].toString());
   }

   QFile file(m_sFileOut);

   file.open(QIODevice::WriteOnly);

   file.write(stFile.toLocal8Bit());

   file.close();

}

QString CMergeXml::checkValue(QString st, QString sTargetKey)
{

    return decode(st)[sTargetKey].toString();

    /*
     //因值裡有空格，所以切空格會錯
    QStringList tmp=st.split(" ");


    foreach(st,tmp)
    {
        if(st.length()>0 && st.split("=").length()>1)
        {
            QString sTmp = st.replace("\"","");
            map[sTmp.split("=").first()]=sTmp.split("=").at(1);
        }

    }
    return map[sTargetKey].toString();
            */

}

QVariantMap CMergeXml::decode(QString st)
{

    QVariantMap map;

    QStringList listTmp = st.split("=");


    for(int i=1;i<listTmp.length();i++)
    {
        QString sKey=listTmp.at(i-1).split(" ").last();

        QString sValue ="";

        if(listTmp.at(i).split(" ").length()>0)
        {
            QStringList tmp = listTmp.at(i).split(" ");
            if(listTmp.at(i).right(1)!=">")
                tmp.pop_back();
            sValue = tmp.join(" ").replace("\"","").replace(">","");
        }

        map[sKey]=sValue;

    }

    return map;
}

