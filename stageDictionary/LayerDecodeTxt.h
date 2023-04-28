#ifndef LAYERDECODETXT_H
#define LAYERDECODETXT_H

#include <QWidget>
#include "Global.h"
#include <QStandardItemModel>
#include <QDateTime>

namespace Ui {
class LayerDecodeTxt;
}

class LayerDecodeTxt : public QWidget
{
    Q_OBJECT

public:
    explicit LayerDecodeTxt(QWidget *parent = nullptr);
    ~LayerDecodeTxt();

    void setFile(QString sFilePath);

    void refresh();

    QVariantMap m_dData;

private:
    Ui::LayerDecodeTxt *ui;

    QString m_sFilePath;

    void loadTxt();

    int listIndexHasStr(QStringList list, QString sKey);

      QStandardItemModel* m_model = new QStandardItemModel(this);
};

#endif // LAYERDECODETXT_H
