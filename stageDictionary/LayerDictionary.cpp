#include "LayerDictionary.h"
#include "ui_LayerDictionary.h"

LayerDictionary::LayerDictionary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerDictionary)
{
    ui->setupUi(this);


}

LayerDictionary::~LayerDictionary()
{
    delete ui;
}




