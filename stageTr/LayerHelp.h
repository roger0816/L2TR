#ifndef LAYERHELP_H
#define LAYERHELP_H

#include <QWidget>

namespace Ui {
class LayerHelp;
}

class LayerHelp : public QWidget
{
    Q_OBJECT

public:
    explicit LayerHelp(QWidget *parent = nullptr);
    ~LayerHelp();

private:
    Ui::LayerHelp *ui;
};

#endif // LAYERHELP_H
