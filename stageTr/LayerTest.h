#ifndef LAYERTEST_H
#define LAYERTEST_H

#include <QWidget>
#include "COpenAi.h"

namespace Ui {
class LayerTest;
}

class LayerTest : public QWidget
{
    Q_OBJECT

public:
    explicit LayerTest(QWidget *parent = nullptr);
    ~LayerTest();

    COpenAi m_api;
private slots:

    void on_btnTalk_clicked();



public slots:
    void replyChat(QString sId,QByteArray out);



private:
    Ui::LayerTest *ui;
};

#endif // LAYERTEST_H
