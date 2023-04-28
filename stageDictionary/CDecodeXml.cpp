#include "CDecodeXml.h"

CDecodeXml::CDecodeXml(QObject *parent)
    : QObject{parent}
{

}

QStringList CDecodeXml::toList(QString sFilePath, QString sPropertyName)
{
    auto readFile=[=](QString sFile)
    {

        QFile file(sFile);

        file.open(QIODevice::ReadOnly);

        QTextStream out(&file);

        QString st;// (file.readAll());

        st=out.readAll();

        file.close();

        return st;
    };

    QVariantMap dData;

    QString stOri = readFile(sFilePath);

    QString sStart = "<"+sPropertyName.trimmed();

    QString sEnd =">";    //= ui->txCaptrueEnd->text().trimmed();

    //  <item id="1" name="Short Sword" type="Weapon">


    QStringList tmp0 =stOri.split(sStart);
    if(tmp0.length()>0)
        tmp0.pop_front();


    for(int i=0;i<tmp0.length();i++)
    {
        tmp0[i]="<"+sPropertyName.trimmed()+" "+tmp0.at(i);
    }

    return tmp0;
}
