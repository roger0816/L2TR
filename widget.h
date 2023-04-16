#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QDesktopServices>
#include <QVariantMap>
#include <QButtonGroup>
#include <QFile>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();




private:
    Ui::Widget *ui;

    QPropertyAnimation* m_animation;

    QButtonGroup m_btns;
private slots:
    void slotChangePage(int iIdx);

    void slotChangeKey(QString sKey,bool bSave);

};
#endif // WIDGET_H
