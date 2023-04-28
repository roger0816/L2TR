#ifndef LAYERDICTIONARY_H
#define LAYERDICTIONARY_H

#include <QWidget>
#include "Global.h"
#include <QTextCodec>

namespace Ui {
class LayerDictionary;
}

class LayerDictionary : public QWidget
{
    Q_OBJECT

public:
    explicit LayerDictionary(QWidget *parent = nullptr);
    ~LayerDictionary();

private slots:


private:
    Ui::LayerDictionary *ui;
};

#endif // LAYERDICTIONARY_H
