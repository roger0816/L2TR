#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle(" ");


    QFile file(":/css/menu.css");
    if(file.open(QIODevice::ReadOnly))
    {

        QString css = QLatin1String(file.readAll());

        ui->LeftMenu->setStyleSheet(css);

        file.close();
    }

    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(this);
     ui->stackedWidget->setGraphicsEffect(opacityEffect);

    m_animation = new QPropertyAnimation(opacityEffect, "opacity");
    m_animation->setDuration(500); // 设置渐变效果的持续时间（毫秒）
    m_animation->setStartValue(0.0); // 设置渐变效果的起始值
    m_animation->setEndValue(1.0); // 设置渐变效果的结束值


    //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

    m_btns.addButton(ui->btn0,0);

    m_btns.addButton(ui->btn1,1);

    m_btns.addButton(ui->btn2,2);

    m_btns.addButton(ui->btn3,3);

    ui->btn3->hide();

    connect(&m_btns,&QButtonGroup::idClicked,this,&Widget::slotChangePage);


   // QVariantMap conf =ui->pageTr->loadConf();

  //  QString sHistoryKey=conf["key"].toString();


    ui->stackedWidget->setCurrentWidget(ui->pageSetting);



   // ui->pageSetting->setDisplayKey(sHistoryKey);




}

Widget::~Widget()
{
    delete ui;
}





void Widget::slotChangePage(int iIdx)
{

    ui->stackedWidget->setCurrentIndex(iIdx);

    m_animation->stop();
    m_animation->start();
}

void Widget::slotChangeKey(QString sKey, bool bSave)
{

    qDebug()<<"api setKey : "<<sKey;

//    ui->pageTr->m_api.setKey(sKey);

//    ui->pageTest->m_api.setKey(sKey);


//    if(bSave)
//    {

//        QVariantMap conf = ui->pageTr->loadConf();

//        conf["key"]=sKey.trimmed();

//        ui->pageTr->writeConf(conf);
//    }
}


