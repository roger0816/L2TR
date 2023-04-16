#ifndef LAYERTR_H
#define LAYERTR_H

#include <QWidget>
#include <QProcess>
#include <QFileDialog>
#include <QFileInfoList>
#include <QDir>
#include <QDateTime>
#include <QDebug>
#include <QButtonGroup>
#include <QSettings>
#include <QFile>
#include <QTimer>
#include <QTimerEvent>
#include <QMessageBox>
#include <QTextOption>
#include <QDesktopServices>
#include "COpenAi.h"
#include "Global.h"

static QString TR_FILES="*.htm*";

namespace Ui {
class LayerTr;
}

class LayerTr : public QWidget
{
    Q_OBJECT

public:
    explicit LayerTr(QWidget *parent = nullptr);
    ~LayerTr();

    QVariantMap loadConf();



      COpenAi m_api;

private slots:
    void on_btnSelectDir_clicked();

    void on_btnRun_clicked();

    void slotReply(int iType,QString sId,QByteArray data,QString sError);


    void slotTimerout();

    void on_btnRefresh_clicked();

    void on_btnCheck_clicked();

    void on_btnUnCheck_clicked();

    void slotAni();

    void slotCheckRetry();

    void on_btnGoto_clicked();

private:
    Ui::LayerTr *ui;

    void timerEvent(QTimerEvent *) override;



    QString m_sOriRoot;

    QString m_sOutputRoot;


    QString m_sPathUnDone;

    QString m_sPathCheck;

    QString m_sPathUnCheck;


    void setPath(QString sPath);

    void copyHtml();

    void searchDir(QString sDir);

    void doTr(int iIdx=0);


    void decodeFile(QString sUndoFileName, QString sData, QString sIntoDirPath);

    void delFile(QString sFilePath);


    void saveFile(QString sFilePath,QString sData);

    QButtonGroup m_rbs[2];

    void refreshCount();


//    void copyFilesWithExtension(const QString& sourceDirPath, const QString& destDirPath, const QStringList& listExtension);




    QStringList m_listReadFile;

    QStringList m_listWirte;

    int m_iIdx=0;

   // QTimer m_timer;

    int m_iRetry=0;

    bool m_bLock=false;

    int m_iTotal;
    int m_iCount;

    QFileInfo info;

    QTimer m_timerAni;
    QString m_sOriData;

    QString m_sOriFileName;
    QString m_sOutData;

    int m_iAniIdx=0;
    bool m_bAniOk=false;

    void updateTx();

    int m_iRecorIdx=0;

    QTimer m_timerReTry;


    bool m_bRun= false;
};

#endif // LAYERTR_H
