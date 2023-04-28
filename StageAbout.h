#ifndef STAGEABOUT_H
#define STAGEABOUT_H

#include <QWidget>
#include <QTextEdit>

namespace Ui {
class StageAbout;
}

class StageAbout : public QWidget
{
    Q_OBJECT

public:
    explicit StageAbout(QWidget *parent = nullptr);
    ~StageAbout();

private:
    Ui::StageAbout *ui;
};

#endif // STAGEABOUT_H
