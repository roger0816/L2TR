#include "LayerHelp.h"
#include "ui_LayerHelp.h"

LayerHelp::LayerHelp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerHelp)
{
    ui->setupUi(this);
}

LayerHelp::~LayerHelp()
{
    delete ui;
}
