#ifndef COPENAI_H
#define COPENAI_H

#include <QObject>
#include <QDebug>
#include <QEventLoop>
#include <QtNetwork>
#include <QNetworkAccessManager>
enum{_API_Chat=0,_API_Ada,_API_Model,_API_TextDavinci};

class COpenAi : public QObject
{
    Q_OBJECT
public:
    explicit COpenAi(QObject *parent = nullptr);

    //void setKey(QString apiKey="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");

    void setKey(QString apiKey);

    QString key(){return m_apiKey;}

    QStringList getModel();

    void sendChat(QString sId, QString prompt);


    void callTextDavinci(QString prompt);

    QByteArray blockCallTextDavince(QString prompt);

private :

    QStringList m_listModel;


    QString m_apiKey;

    QNetworkAccessManager *manager=new QNetworkAccessManager(this) ;

    void doPost(QString url,QVariantMap headerData,QJsonObject json,QVariantMap property);


signals:
  //  void sendReply(QByteArray );
    void replyChat(QString sId,QByteArray ,QString sErrorStr);


    void replyModel(QByteArray ,QString sErrorStr);

    void replyData(int iApi,QString sId,QByteArray data,QString sErrorStr);

public slots:
    void onResponse(QNetworkReply *reply);

};

#endif // COPENAI_H
