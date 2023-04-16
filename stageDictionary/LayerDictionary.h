#ifndef LAYERDICTIONARY_H
#define LAYERDICTIONARY_H

#include <QWidget>
#include "Global.h"
#include "ItemNameDecode.h"
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

    void on_btnSelectItemPath_clicked();

    void on_btnStart_clicked();

private:
    Ui::LayerDictionary *ui;
};

#endif // LAYERDICTIONARY_H
