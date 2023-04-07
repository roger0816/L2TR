#include "COpenAi.h"

COpenAi::COpenAi(QObject *parent)
    : QObject{parent}
{
    //OPENAI
    //chencan
    //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
    //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
    //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

    //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

    connect(manager, &QNetworkAccessManager::finished, this, &COpenAi::onResponse);


}

void COpenAi::setKey(QString apiKey)
{
    qDebug()<<"set api key : "<<apiKey;
    m_apiKey = apiKey;


  //  getModel();
}

QStringList COpenAi::getModel()
{
    QStringList listRe;

    QString url = "https://api.openai.com/v1/models";
    QNetworkRequest request(url);

    request.setRawHeader("Content-Type","application/json");
    request.setRawHeader("Authorization",QString("Bearer %1").arg(m_apiKey).toUtf8());

    request.setRawHeader("OpenAI-Organization","org-VTvCWe8s1dNHUJQbsLOcDUYy");


    QNetworkReply *reply = manager->get(request);
    reply->setProperty("api",_API_Model);


    return listRe;
}

void COpenAi::sendChat(QString prompt)
{




    qDebug()<<"send data : "<<prompt;
    QString url = "https://api.openai.com/v1/chat/completions";

    QVariantMap header;
    header["Authorization"]=QString("Bearer %1").arg(m_apiKey).toUtf8();
    header["Content-Type"]="application/json";

    header["OpenAI-Organization"]="org-VTvCWe8s1dNHUJQbsLOcDUYy";
    // Set the request data (prompt)
    QJsonObject requestData;
    requestData.insert("model","gpt-3.5-turbo");
    requestData.insert("temperature",0);

    QJsonArray list;

    QJsonObject obj;
    obj.insert("role","user");

    obj.insert("content",prompt);


    list.append(obj);

    requestData.insert("messages",list);

    QVariantMap property;
    property["api"]=_API_Chat;


    doPost(url,header,requestData,property);


    /*

    QNetworkRequest request(url);

    // Add API key to the request header

    QByteArray headerData = QString("Bearer %1").arg(m_apiKey).toUtf8();
    request.setRawHeader("Authorization", headerData);
    request.setRawHeader("Content-Type", "application/json");
    request.setRawHeader("OpenAI-Organization", "org-VTvCWe8s1dNHUJQbsLOcDUYy");




    QJsonDocument doc(requestData);
    QByteArray requestDataBytes = doc.toJson();

    // Send the request
    // QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    QNetworkReply *reply = manager->post(request, requestDataBytes);
    reply->setProperty("prompt", prompt);
    reply->setProperty("api","chat");
    // Clean up

    //  manager->deleteLater();
    */
}

void COpenAi::sendAda(QString prompt)
{


//    curl https://api.openai.com/v1/completions \
//      -H "Content-Type: application/json" \
//      -H "Authorization: Bearer $OPENAI_API_KEY" \
//      -d '{
//        "model": "text-ada-001",
//        "prompt": "Say this is a test",
//        "max_tokens": 7,
//        "temperature": 0
//      }'



    qDebug()<<"send data : "<<prompt;
    QString url = "https://api.openai.com/v1/completions";

    QVariantMap header;
    header["Authorization"]=QString("Bearer %1").arg(m_apiKey).toUtf8();
    header["Content-Type"]="application/json";

    //header["OpenAI-Organization"]="org-VTvCWe8s1dNHUJQbsLOcDUYy";
    // Set the request data (prompt)
    QJsonObject requestData;
    requestData.insert("model","text-ada-001");
    requestData.insert("temperature",0);
    requestData.insert("max_tokens",7);
    requestData.insert("prompt",prompt);




    QVariantMap property;
    property["api"]=_API_Ada;


    doPost(url,header,requestData,property);
}

void COpenAi::callTextDavinci(QString prompt)
{
//    curl https://api.openai.com/v1/completions \
//      -H "Content-Type: application/json" \
//      -H "Authorization: Bearer $OPENAI_API_KEY" \
//      -d '{
//        "model": "text-davinci-003",
//        "prompt": "Say this is a test",
//        "max_tokens": 2048,
//        "temperature": 0
//      }'


//    {
//      "id": "cmpl-uqkvlQyYK7bGYrRHQ0eXlWi7",
//      "object": "text_completion",
//      "created": 1589478378,
//      "model": "text-davinci-003",
//      "choices": [
//        {
//          "text": "\n\nThis is indeed a test",
//          "index": 0,
//          "logprobs": null,
//          "finish_reason": "length"
//        }
//      ],
//      "usage": {
//        "prompt_tokens": 5,
//        "completion_tokens": 7,
//        "total_tokens": 12
//      }
//    }


    QString url = "https://api.openai.com/v1/completions";

    QVariantMap header;
    header["Authorization"]=QString("Bearer %1").arg(m_apiKey).toUtf8();
    header["Content-Type"]="application/json";

    // Set the request data (prompt)
    QJsonObject requestData;
    requestData.insert("model","text-davinci-003");
    requestData.insert("temperature",0);
    requestData.insert("prompt",prompt);
     requestData.insert("max_tokens",2048);
         requestData.insert("n",1);
    QVariantMap property;
    property["api"]=_API_TextDavinci;


    doPost(url,header,requestData,property);


}

QByteArray COpenAi::blockCallTextDavince(QString prompt)
{


      QUrlQuery query;
      query.addQueryItem("model", "text-davinci-002");
      query.addQueryItem("text", prompt);
      query.addQueryItem("temperature", "0");
      query.addQueryItem("max_tokens", "2048");
      query.addQueryItem("n", "1");

      QUrl url("https://api.openai.com/v1/completions");
      url.setQuery(query);

      QNetworkRequest request(url);
      request.setRawHeader("Content-Type", "application/json");
      request.setRawHeader("Authorization", "Bearer " + m_apiKey.toUtf8());

      QNetworkAccessManager manager;
      QNetworkReply *reply = manager.post(request, QByteArray());
      QEventLoop loop;
      QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
      loop.exec();

      QByteArray response = reply->readAll();


      return response;
//      QJsonDocument json = QJsonDocument::fromJson(response);
//      QJsonArray choices = json["choices"].toArray();
//      QJsonObject tokens = choices[0].toObject()["tokens"].toObject();

//      int tokenCount = tokens["length"].toInt();
//      qDebug() << "Token count:" << tokenCount;

}


void COpenAi::doPost(QString url, QVariantMap headerData, QJsonObject json, QVariantMap property)
{


    QNetworkRequest request(url);

    // Add API key to the request header
    QStringList listHeader =headerData.keys();
    foreach(QString key,listHeader)
    {
        QVariant var = headerData[key];
        request.setRawHeader(key.toLatin1(),var.toByteArray());
    }


    QJsonDocument doc(json);
    QByteArray requestDataBytes = doc.toJson();

    QNetworkReply *reply = manager->post(request, requestDataBytes);


    foreach(QString key,property.keys())
    {
        QVariant var = property[key];
        reply->setProperty(key.toStdString().c_str(),var);
    }

}



void COpenAi::onResponse(QNetworkReply *reply)
{
    QString sErrorStr="";
    if (reply->error() != QNetworkReply::NoError) {
        sErrorStr = reply->errorString();
        qDebug()<<"error : "<<sErrorStr;
        return;
    }

    QString prompt = reply->property("prompt").toString();
    QByteArray responseData = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(responseData);

    int iType=reply->property("api").toInt();
    qDebug()<<"AAAAA : emit "<<iType<<" , "<<responseData<<" , "<<sErrorStr;
    emit replyData(iType,responseData,sErrorStr);

    if(iType==_API_Chat)
    {
        emit replyChat(responseData,sErrorStr);
    }
    else if(iType==_API_Model)
    {
       // qDebug()<<"AAAA : "<<responseData.toStdString().c_str()<<" , "<<sErrorStr;
         emit replyChat(responseData,sErrorStr);
    }

    else if(iType==_API_Ada)
    {
       // qDebug()<<"AAAA : "<<responseData.toStdString().c_str()<<" , "<<sErrorStr;
         emit replyAda(responseData,sErrorStr);
    }
}
