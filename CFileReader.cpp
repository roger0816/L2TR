#include "CFileReader.h"

CFileReader::CFileReader(QObject *parent)
    : QObject{parent}
{

}

void CFileReader::read(QString sFilePath)
{
    // 在主程式中

//    // 創建一個QRunnable對象
//    QRunnable* runnable = new QRunnable();
//    _CFILE_READER::CReader* reader = new _CFILE_READER::CReader();
//    QObject::connect(runnable, &QRunnable::destroyed, reader, &QObject::deleteLater);
//    runnable->setAutoDelete(true);
//    runnable->setTask([=]() { reader->readFile(sFilePath); });

}
