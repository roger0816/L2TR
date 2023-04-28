#include "Global.h"

Global *Global::m_pInstance = nullptr;

Global::Global(QObject *parent)
    : QObject{parent}
{

}

QVariant Global::config(QString sKey)
{
    QVariant v;

    QSettings conf(QApplication::applicationDirPath()+"/config.ini",QSettings::IniFormat);

    QStringList listKey = conf.allKeys();

    //舊版定義遷移
    if(listKey.contains("key"))
    {
        conf.setValue(_CONFIG::GPT_KEY,conf.value("key"));
        conf.remove("key");
        conf.sync();
    }

    if(listKey.contains("path"))
    {
        conf.setValue(_CONFIG::GPT_PATH,conf.value("path"));
        conf.remove("path");
        conf.sync();
    }
    //


    foreach(QString key,conf.allKeys())
    {
        if(key==sKey)
        {
            v =conf.value(key);
        }

    }

    if(sKey==_CONFIG::GPT_KEY)
    {
        if(!v.isValid())
        {
            v= config("key");
            if(v.isValid())
            {
                conf.remove("key");
                conf.sync();
                setConfig(_CONFIG::GPT_KEY,v);
            }
        }
    }

    return v;
}

void Global::setConfig(QString sKey,QVariant value)
{

    QSettings conf(QApplication::applicationDirPath()+"/config.ini",QSettings::IniFormat);

    conf.setValue(sKey,value);

    conf.sync();
}

Global &Global::Instance()
{
    //    static Global global;
    //    return global;

    if(m_pInstance==nullptr)
        m_pInstance=new Global();

    return *m_pInstance;

}

QString Global::getComputerUUID()
{


    QProcess process;
    process.start("wmic", QStringList() << "csproduct" << "get" << "UUID");
    process.waitForFinished(-1);
    QString output = process.readAllStandardOutput();
    QStringList lines = output.split("\n", QString::SkipEmptyParts);
    if (lines.count() < 2) {
        return QString();
    }
    return lines.at(1).trimmed();


}
