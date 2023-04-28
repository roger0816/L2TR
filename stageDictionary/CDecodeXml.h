#ifndef CDECODEXML_H
#define CDECODEXML_H

#include <QObject>
#include <QFile>
#include <QTextStream>

class CDecodeXml : public QObject
{
    Q_OBJECT
public:
    explicit CDecodeXml(QObject *parent = nullptr);

    static QStringList toList(QString sFilePath,QString sPropertyName);


signals:

};

#endif // CDECODEXML_H
