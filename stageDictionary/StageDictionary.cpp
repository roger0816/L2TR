#include "StageDictionary.h"
#include "ui_StageDictionary.h"

StageDictionary::StageDictionary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageDictionary)
{
    ui->setupUi(this);

}

StageDictionary::~StageDictionary()
{
    delete ui;
}


