#ifndef CFILEREADER_H
#define CFILEREADER_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QRunnable>


namespace _CFILE_READER
{

class CReader : public QObject
{
    Q_OBJECT

public:
    QByteArray dData;

public slots:
    void readFile(const QString& filePath)
    {
        QFile file(filePath);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);

        dData=in.readAll().toUtf8();
//        QString line = in.readLine();
//        while (!line.isNull())
//        {
//            // 處理每行內容
//            // ...

//            line = in.readLine();
//        }

        file.close();
    }
};

}




class CFileReader : public QObject
{
    Q_OBJECT
public:
    explicit CFileReader(QObject *parent = nullptr);

    void read(QString sFilePath);

signals:
    void finished();
};

#endif // CFILEREADER_H
