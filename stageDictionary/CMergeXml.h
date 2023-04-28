#ifndef CMERGEXML_H
#define CMERGEXML_H

#include <QObject>
#include <QVariantMap>
#include <QVariantList>
#include <QFile>
#include <QDebug>

class CMergeXml : public QObject
{
    Q_OBJECT
public:
    explicit CMergeXml(QObject *parent = nullptr);

    void setFile(QString sOriXml,QString sTrXml,QString sOut);

    void doneMerge(QString sPoint,QString sKey,QString sTarget);

private:


    void captrueTarget();

    QString checkValue(QString st,QString sTargetKey);

    QVariantMap decode(QString st);

    QString m_sFileOri;
    QString m_sFileTr;
    QString m_sFileOut;

    QString m_sSartSt;
    QString m_sKey;
    QString m_sTarget;




signals:

};

#endif // CMERGEXML_H
