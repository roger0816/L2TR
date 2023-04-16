#ifndef LAYERLOGIN_H
#define LAYERLOGIN_H

#include <QWidget>
#include <QGraphicsEffect>
#include <QPropertyAnimation>
#include <QResizeEvent>
#include <QDebug>
#include <QPixmap>
#include <QLabel>
#include <QShowEvent>

namespace Ui {
class LayerLogin;
}

class LayerLogin : public QWidget
{
    Q_OBJECT

public:
    explicit LayerLogin(QWidget *parent = nullptr);
    ~LayerLogin();

    void resizeEvent(QResizeEvent *) override;

    void showEvent(QShowEvent * )override;

    void rollIn();

private slots:

    void on_btnClose_clicked();

    void on_btnTest_clicked();

private:
    Ui::LayerLogin *ui;

    QPixmap *image;
    signals:
    void finished();

};

#endif // LAYERLOGIN_H
