#ifndef LAYERSETTING_H
#define LAYERSETTING_H

#include <QWidget>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class LayerSetting;
}

class LayerSetting : public QWidget
{
    Q_OBJECT

public:
    explicit LayerSetting(QWidget *parent = nullptr);
    ~LayerSetting();

    void setDisplayKey(QString sKey);

private slots:
    void on_txKey_textChanged(const QString &);


    void on_btnSaveKey_clicked();

    void on_lb0_linkActivated(const QString &);


private:
    Ui::LayerSetting *ui;

signals:

    void signalKeyChange(QString sKey,bool sSave=false);
};

#endif // LAYERSETTING_H
