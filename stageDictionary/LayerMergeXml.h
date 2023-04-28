#ifndef LAYERMERGEXML_H
#define LAYERMERGEXML_H

#include <QWidget>
#include <QDebug>
#include <QFileDialog>
#include "CMergeXml.h"

namespace Ui {
class LayerMergeXml;
}

class LayerMergeXml : public QWidget
{
    Q_OBJECT

public:
    explicit LayerMergeXml(QWidget *parent = nullptr);
    ~LayerMergeXml();

private slots:
    void on_btnSelectOri_clicked();

    void on_btnSelectTr_clicked();

    void on_btnSend_clicked();

private:
    Ui::LayerMergeXml *ui;

    CMergeXml m_cMerge;
};

#endif // LAYERMERGEXML_H
