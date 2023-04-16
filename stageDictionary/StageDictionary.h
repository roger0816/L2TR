#ifndef STAGEDICTIONARY_H
#define STAGEDICTIONARY_H

#include <QWidget>
#include <QFileDialog>
#include <QDebug>

namespace Ui {
class StageDictionary;
}

class StageDictionary : public QWidget
{
    Q_OBJECT

public:
    explicit StageDictionary(QWidget *parent = nullptr);
    ~StageDictionary();

private slots:

private:
    Ui::StageDictionary *ui;
};

#endif // STAGEDICTIONARY_H
