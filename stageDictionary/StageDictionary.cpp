#include "StageDictionary.h"
#include "ui_StageDictionary.h"

StageDictionary::StageDictionary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageDictionary)
{
    ui->setupUi(this);

    m_btns.addButton(ui->btn0,0);

    m_btns.addButton(ui->btn1,1);

    m_btns.addButton(ui->btn2,2);

}

StageDictionary::~StageDictionary()
{
    delete ui;
}


