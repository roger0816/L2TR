#include "widget.h"
#include <QDateTime>
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include "LayerLogin.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    bool bRoot = false;

    if(argc>=2)
    {
        if(QString(argv[1]).toLower()=="root")
            bRoot =true;
    }

    QFile file(":/css/style.css");
    if(file.open(QIODevice::ReadOnly))
    {

        QString css = QLatin1String(file.readAll());

        a.setStyleSheet(css);

        file.close();
    }

    LayerLogin login;
    Widget w;

    login.connect(&login,&LayerLogin::finished,&w,&Widget::show);

    QDateTime date=QDateTime::currentDateTimeUtc();
    if(date.toString("yyyyMMdd")<"20260701")
    {

        if(bRoot)
            w.show();
        else
            login.show();
    }
    else
    {
        QMessageBox msgBox;

        msgBox.setText("無法使用，請索取新版本");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setIcon(QMessageBox::Information);

        msgBox.exec();

        return 0;
    }
    return a.exec();
}


