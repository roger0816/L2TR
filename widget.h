#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDesktopServices>
#include <QVariantMap>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_lb0_linkActivated(const QString &link);

    void on_btnSet_clicked();

    void on_txKey_textChanged(const QString &arg1);

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
