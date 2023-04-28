#ifndef GLOBAL_H
#define GLOBAL_H

#include <QFileDialog>
#include <QObject>
#include <QProcess>
#include <QDebug>
#include <QApplication>
#include <QSettings>
#define GLOBAL Global::Instance()


#define _VER 1.04.1

namespace _CONFIG {
static QString UUID="uuid";
static QString GPT_KEY="GPT/key";
static QString GPT_PATH="GPT/path";
static QString GPT_TYPE="GPT/type";
static QString DEC_ITEM_TXT="DEC/txt";
static QString DEC_ITEM_DIR="DEC/dir";

}



class Global : public QObject
{
    Q_OBJECT
public:
    explicit Global(QObject *parent = nullptr);



    QVariant config(QString sKey);

    void setConfig(QString sKey, QVariant value);

    static Global& Instance();

    QString getComputerUUID();

private:
    static Global *m_pInstance;


signals:

};

#endif // GLOBAL_H
