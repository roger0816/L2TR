#include "LayerTest.h"
#include "ui_LayerTest.h"

LayerTest::LayerTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTest)
{
    ui->setupUi(this);



    m_api.connect(&m_api,&COpenAi::replyChat,this,&LayerTest::replyChat);



}

LayerTest::~LayerTest()
{
    delete ui;
}



void LayerTest::replyChat(QString sId, QByteArray out)
{
    QJsonDocument doc = QJsonDocument::fromJson(out);
    QJsonObject obj = doc.object();

    // Print chat response
    QString st= obj["choices"].toArray()[0].toObject()["message"].toVariant().toMap()["content"].toString();

    ui->txt1->setPlainText(st);
}





void LayerTest::on_btnTalk_clicked()
{


    ui->txt1->clear();
    QString sId = QDateTime::currentDateTime().toString("yyyyMMddhhmmss");
    m_api.sendChat(sId,ui->txt0->toPlainText());
}





