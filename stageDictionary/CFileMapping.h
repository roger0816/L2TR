#ifndef CFILEMAPPING_H
#define CFILEMAPPING_H

#include <QObject>

class CFileMapping : public QObject
{
    Q_OBJECT
public:
    explicit CFileMapping(QObject *parent = nullptr);

    void setDir(QString sOri,QString sTr);

signals:

};

#endif // CFILEMAPPING_H
