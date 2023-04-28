#ifndef LAYERVIEWTR_H
#define LAYERVIEWTR_H

#include <QWidget>
#include "Global.h"
#include <QTableWidgetItem>
#include <QDateTime>
#include <QFileInfoList>
#include <QDir>
#include <QButtonGroup>
#include "LayerTrDetail.h"

namespace Ui {
class LayerViewTr;
}

class LayerViewTr : public QWidget
{
    Q_OBJECT

public:
    explicit LayerViewTr(QWidget *parent = nullptr);
    ~LayerViewTr();
public slots:
    void refresh();

private:
    Ui::LayerViewTr *ui;

    QStringList m_listFilePath;

    QString m_sOriDir="";
    QString m_sDir="";

    bool checkFilter(QString sFilePath);

    int fileSize(QString sFilePath);

    bool hasFile(QString sFilePath);

    int status(const QString sOriFile,QString *sPath=nullptr);

    enum tr_statu{_unkown=0,_undone,_uncheck,_check};

    enum _tbItemType{_AUTO=0,_BUTTON,_TXT,_BOOL,_DOUBLE,_TOOLTIP,_DATE,_DATETIME,_HTML};
    QTableWidgetItem * tbItem(QVariant var,int iType=0,int iPixSize=14);

    QStringList searchOriFile(QString sPath);


    QButtonGroup m_btnRb;

    LayerTrDetail *m_layerDeital = new LayerTrDetail();
public slots:
    void slotScan(QString sOriDir,QString sDir);
private slots:
    void on_tableWidget_cellClicked(int row, int column);
};

#endif // LAYERVIEWTR_H
