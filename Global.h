#ifndef GLOBAL_H
#define GLOBAL_H

#include <QFileDialog>
#include <QObject>
#include <QDebug>
#include <QApplication>
#include <QSettings>
#define GLOBAL Global::Instance()


namespace _CONFIG {
static QString GPT_KEY="GPT/key";
static QString GPT_PATH="GPT/path";
static QString DEC_ITEM_PATH="DEC/ItemPath";

}



class Global : public QObject
{
    Q_OBJECT
public:
    explicit Global(QObject *parent = nullptr);



    QVariant config(QString sKey);

    void setConfig(QString sKey, QVariant value);

    static Global& Instance();
private:
    static Global *m_pInstance;


signals:

};

#endif // GLOBAL_H
