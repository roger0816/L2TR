#ifndef LAYERTRDETAIL_H
#define LAYERTRDETAIL_H

#include <QWidget>
#include <QDebug>
#include <QTextOption>
#include <QFile>
#include <QMessageBox>
#include <QDir>
namespace Ui {
class LayerTrDetail;
}

class LayerTrDetail : public QWidget
{
    Q_OBJECT

public:
    explicit LayerTrDetail(QWidget *parent = nullptr);
    ~LayerTrDetail();
    
    void setData(QString sTitle, QString sOriPath, QString sOutPath);

private:
    Ui::LayerTrDetail *ui;

    QString m_sOriPath;
    QString m_sOutPath;

    void saveChange();

    void toUncheck();
signals:
    emit void refresh();
};

#endif // LAYERTRDETAIL_H
