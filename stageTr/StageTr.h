#ifndef STAGETR_H
#define STAGETR_H

#include <QWidget>
#include "Global.h"
#include <QDesktopServices>

namespace Ui {
class StageTr;
}

class StageTr : public QWidget
{
    Q_OBJECT

public:
    explicit StageTr(QWidget *parent = nullptr);
    ~StageTr();

private slots:
    void on_btnViewPw_clicked();

    void on_btnSaveKey_clicked();

    void on_txKey_textChanged(const QString &arg1);

    void on_lineEdit_selectionChanged();

    void on_label_2_linkActivated(const QString &link);


private:
    Ui::StageTr *ui;
};

#endif // STAGETR_H
