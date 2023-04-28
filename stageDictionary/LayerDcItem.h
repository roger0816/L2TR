#ifndef LAYERDCITEM_H
#define LAYERDCITEM_H

#include <QWidget>
#include "Global.h"
#include <QStandardItemModel>
#include <QDateTime>
namespace Ui {
class LayerDcItem;
}




namespace _ITEM_KEY
{
    static QString id="id";
    static QString name="name";
    static QString description="description";
}


class LayerDcItem : public QWidget
{
    Q_OBJECT

public:
    explicit LayerDcItem(QWidget *parent = nullptr);
    ~LayerDcItem();

private:
    Ui::LayerDcItem *ui;



    QString toMap(QStringList listData,QVariantMap &out);





};

#endif // LAYERDCITEM_H
