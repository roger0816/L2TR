#include "StageAbout.h"
#include "ui_StageAbout.h"

StageAbout::StageAbout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageAbout)
{
    ui->setupUi(this);

    ui->textEdit->setContentsMargins(40,40,40,40);
}

StageAbout::~StageAbout()
{
    delete ui;
}
