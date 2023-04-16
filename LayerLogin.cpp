#include "LayerLogin.h"
#include "ui_LayerLogin.h"

LayerLogin::LayerLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerLogin)
{
    ui->setupUi(this);

    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    image = new QPixmap(":/logo.png");
    ui->label->setStyleSheet("background-color:rgba(255,255,255)");
    // QPixmap pix=image->scaled(m_lb->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label->setPixmap(QPixmap(":/logo.png").scaled(ui->label->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));

    ui->btnTest->hide();

}

LayerLogin::~LayerLogin()
{
    delete ui;
}

void LayerLogin::resizeEvent(QResizeEvent *)
{
    //m_lb->setGeometry(rect());

    ui->label->setPixmap(QPixmap(":/logo.png").scaled(ui->label->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void LayerLogin::showEvent(QShowEvent *)
{
    ui->label->setPixmap(QPixmap(":/logo.png").scaled(ui->label->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
     rollIn();
}

void LayerLogin::rollIn()
{
    // 创建 QGraphicsOpacityEffect 对象
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(this);
    ui->label->setGraphicsEffect(opacityEffect);

    // 创建动画对象
    QPropertyAnimation* animation = new QPropertyAnimation(opacityEffect, "opacity");
    animation->setDuration(2000); // 设置动画持续时间为500毫秒
    animation->setStartValue(0.0); // 设置起始值为1.0（完全不透明）
    animation->setEndValue(1.0); // 设置结束值为0.0（完全透明）

    // 启动动画
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    animation->connect(animation,&QPropertyAnimation::finished,[=]()
    {
        hide();
        emit finished();
    });
}



void LayerLogin::on_btnClose_clicked()
{
    qApp->quit();
}


void LayerLogin::on_btnTest_clicked()
{

}

