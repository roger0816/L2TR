#include "LayerTr.h"
#include "ui_LayerTr.h"

LayerTr::LayerTr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTr)
{
    ui->setupUi(this);

    setWindowTitle("L2TR ");

    m_api.connect(&m_api,&COpenAi::replyData,this,&LayerTr::slotReply);


    setPath(GLOBAL.config(_CONFIG::GPT_PATH).toString());

    m_rbs[0].addButton(ui->rbAuto,0);

    m_rbs[0].addButton(ui->rbManual,1);

    m_rbs[1].addButton(ui->rbReplace,0);

    m_rbs[1].addButton(ui->rbSkip,1);

    ui->btnCheck->hide();
    ui->btnRefresh->hide();
    ui->btnUnCheck->hide();

    m_rbs[0].connect(&m_rbs[0],&QButtonGroup::idClicked,[=](int i){

        ui->btnCheck->setVisible(i==1);
        ui->btnRefresh->setVisible(i==1);
        ui->btnUnCheck->setVisible(i==1);

    });

    startTimer(500);

    QFont font = ui->txtOri->font();
    int fontSize = font.pointSize();

    QFontMetrics fontMetrics(font);
    int tabWidth = fontMetrics.horizontalAdvance("    "); // 4 個空格代表一個 tab
    int indentLevel = 2; // 您所需的縮進級別
    int indentWidth = tabWidth * indentLevel;

    QTextOption textOption = ui->txtOri->document()->defaultTextOption();
    textOption.setTabStop(indentWidth);
    ui->txtOri->document()->setDefaultTextOption(textOption);

    ui->txtOut->document()->setDefaultTextOption(textOption);


    m_timerAni.connect(&m_timerAni,&QTimer::timeout,this,&LayerTr::slotAni);
    m_timerAni.start(50);

    m_timerReTry.connect(&m_timerReTry,&QTimer::timeout,this,&LayerTr::slotCheckRetry);
    m_timerReTry.start(1000*60*5);
}

LayerTr::~LayerTr()
{
    delete ui;
}

void LayerTr::on_btnSelectDir_clicked()
{
    QString sPath =QFileDialog::getExistingDirectory(this,"選擇資料夾",ui->txPath->text());

    if(sPath!="")
    {
        setPath(sPath);

        GLOBAL.setConfig(_CONFIG::GPT_PATH,sPath);


    }

}


void LayerTr::on_btnRun_clicked()
{

    if(m_api.key().trimmed()=="")
    {
        QMessageBox msg;

        msg.resize(400,300);

        msg.setText("請設定API KEY");

        msg.exec();
        return;
    }

    if(ui->txPath->text().trimmed()=="")
    {

        QMessageBox msg;

        msg.resize(400,300);

        msg.setText("請選擇來源資料夾");

        msg.exec();
        return;
    }

    m_bRun = true;

    ui->rbReplace->setEnabled(false);
    ui->rbSkip->setEnabled(false);

    QDir().mkpath(m_sOutputRoot);

    QString sTargetDir = m_sOriRoot.split("/").last();

    m_sPathUnDone=m_sOutputRoot+"/undone/"+sTargetDir;

    QDir().mkpath(m_sPathUnDone);

    m_sPathCheck=m_sOutputRoot+"/check/"+sTargetDir;

    QDir().mkpath(m_sPathCheck);

    m_sPathUnCheck=m_sOutputRoot+"/uncheck/"+sTargetDir;

    QDir().mkpath(m_sPathUnCheck);


    copyHtml();

    m_listReadFile.clear();

    m_iIdx=0;

    m_iRetry=0;

    m_iCount=0;

    m_iTotal=0;

    searchDir(m_sPathUnDone);

    doTr(m_iIdx);
}

void LayerTr::slotReply(int iType, QString sId, QByteArray data, QString sError)
{
    qDebug()<<"reply : "<<sId<<" \n "<<data<<" \n "<<sError<<"\n\n";
    QString sOriFileName = sId;

    ui->lbError->setText(sError);
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject obj = doc.object();

    QString sMessage;

    bool bIsDisplay= false;

    if(iType==_API_Chat)
    {
        bIsDisplay = true;

        sMessage= obj["choices"].toArray()[0].toObject()["message"].toVariant().toMap()["content"].toString();

    }

    else if(iType==_API_TextDavinci)
    {
        bIsDisplay =true;
        sMessage = obj["choices"].toArray()[0].toObject()["text"].toString();

    }


    if(bIsDisplay)
    {
        updateTx();




        m_sOriFileName =sOriFileName;

        m_sOutData = sMessage;

        m_bAniOk=false;

        m_iAniIdx = 0;

        if(sError.contains("Error transferring") || sError.toLower().contains("bad request"))
        {

             decodeFile(sOriFileName,m_sOriData,m_sPathUnCheck);
        }

        else if(sMessage.trimmed().length()>0)
        {
            ui->lbMsg->clear();

            //            m_timer.stop();

            if(ui->rbAuto->isChecked())
            {
                if(!m_bLock)
                {
                    m_bLock=true;  //它常常會連回二次重發訊息，所以等個幾秒再處理，也為此要lock住才不會連跳二個index
                    QTimer::singleShot(2000,this,[=](){decodeFile(sOriFileName,sMessage,m_sPathCheck);});
                }
            }

        }
    }

}



void LayerTr::slotTimerout()
{
    if(m_iIdx>=m_listReadFile.length())
    {
        return ;
    }


    m_iRetry++;

    if(m_iRetry>3)
    {
        ui->lbMsg->setText("timeout retry多次失敗，進行下一個");

        m_iRetry=0;

        doTr(++m_iIdx);
    }
    else
    {
        ui->lbMsg->setText("timeout retry :"+QString::number(m_iRetry));

        doTr(m_iIdx);
    }




}

void LayerTr::setPath(QString sPath)
{
    ui->txPath->setText(sPath);

    m_sOriRoot=ui->txPath->text().trimmed().replace("\\","/");

    if(m_sOriRoot.right(1)=="/")
        m_sOriRoot.remove(m_sOriRoot.length()-1,1);

    QStringList listTmp = ui->txPath->text().replace("\\","/").split("/");
    QString sDirName = listTmp.last();
    listTmp.pop_back();

    QString sOutPath = QApplication::applicationDirPath()+"/output";



    m_sOutputRoot = sOutPath;

    ui->txOutPath->setText(m_sOutputRoot);
}

void LayerTr::copyHtml()
{
    QString sTmp=m_sPathUnDone;

    QString sCmd = "echo D|xcopy /S /Y "+m_sOriRoot.replace("/","\\")+"\\"+TR_FILES+" "+sTmp.replace("/","\\");
    qDebug()<<"cmd : "<<sCmd;
    system(sCmd.toStdString().c_str());

    //   sCmd = "xcopy /S /Y "+m_sOriPath.replace("/","\\")+"\\*.htm "+m_sOutputRoot.replace("/","\\")+"\\undo";

    //    system(sCmd.toStdString().c_str());

    //  copyFilesWithExtension(m_sOriPath,m_sOutputRoot+"/undone",QStringList()<<"*.html"<<"*.htm");
}

void LayerTr::searchDir(QString sDir)
{
    QDir dir(sDir);
    dir.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    dir.setSorting(QDir::DirsFirst);
    QFileInfoList list=dir.entryInfoList();


    foreach(QFileInfo info,list)
    {
        if(info.isDir())
        {
            QString sTmp =info.absoluteFilePath();
            sTmp.replace(m_sPathUnDone,"");

            QDir dir;

            //            dir.mkdir(m_sPathCheck+sTmp);

            //            dir.mkdir(m_sPathUnCheck+sTmp);


            searchDir(info.filePath());
        }
        else
        {


            m_iTotal++;

            //  dir /s /a-d /b *.htm *.html | find /v /c ""


            QString tmp0 =info.absoluteFilePath();

            QString uncheck=tmp0.replace(m_sPathUnDone,m_sPathUnCheck);

            QString tmp1 =info.absoluteFilePath();

            QString check=tmp1.replace(m_sPathUnDone,m_sPathCheck);

            QFileInfo info0(uncheck);
            bool bHasCheck = info0.exists();


            QFileInfo info1(check);
            bool bHasUbCheck = info1.exists();


            if( (bHasCheck|| bHasUbCheck) && ui->rbSkip->isChecked())
            {
                m_iCount++;

                delFile(info.absoluteFilePath());
            }
            else
            {
                m_listReadFile.append(info.absoluteFilePath());
            }

        }


    }


    ui->lbCount->setText(QString::number(m_iCount)+"/"+QString::number(m_iTotal));


}

void LayerTr::doTr(int iIdx)
{
    if(!m_bRun)
        return;


    if(m_listReadFile.length()<1)
    {
        QMessageBox msg;

        msg.resize(400,300);

        msg.setText("找不到 *.htm 與 *.html");

        msg.exec();
        return ;
    }
    if(iIdx>=m_listReadFile.length())
    {
        QMessageBox box;

        box.setText("處理完成");

        box.exec();

        return ;
    }


    ui->txtOut->clear();

    QString sFile=m_listReadFile.at(iIdx);

    QFile file(sFile);

    if(file.open(QIODevice::ReadOnly))
    {

        QByteArray read=file.readAll();

        qDebug()<<"read : "<<read.toStdString().c_str();

        m_sOriData = read;

        if(m_iIdx==0)
            updateTx();
        m_api.sendChat(sFile,"html翻譯成繁體中文 : "+read);

        //m_api.sendChat("html翻成简体中文 : "+read);

        //m_api.callTextDavinci("翻譯成繁體中文,行數要對齊 : "+read);
        ui->lbMsg->setText("處理中");
        file.close();
        //        m_timer.stop();
        //        m_timer.start(30*1000);
    }
    else
    {
        doTr(++iIdx);
    }

}



void LayerTr::decodeFile(QString sUndoFileName, QString sData, QString sIntoDirPath)
{
    //不能只取類別成員的資料，因為自動下一個時有秒差，可能導致檔內容被前讀檔被蓋掉
    // QString sFilePath = m_listReadFile.at(m_iIdx);

    QString sTmp = sUndoFileName;

    QString sFileNew = sTmp.replace(m_sPathUnDone,sIntoDirPath);

    saveFile(sFileNew,sData);


    delFile(sUndoFileName);


    doTr(++m_iIdx);

    m_bLock=false;
}

void LayerTr::delFile(QString sFilePath)
{


    QStringList tmp= sFilePath.replace("\\","/").split("/");
    tmp.pop_back();
    QString sPath =tmp.join("/");

    QDir dir(sPath);
    dir.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    QStringList files = dir.entryList();


    QProcess pro;

    if(files.length()<=1)
    {

        QString tmpPath = "rd /s /q "+sPath.replace("/","\\");
        qDebug()<<"rd "<<tmpPath;
        pro.start("cmd.exe",QStringList()<<"/c"<<tmpPath);
        pro.waitForFinished();

    }
    else
    {
        QString sCmd = "del /f /q "+sFilePath.replace("/","\\");

        //        system(sCmd.toStdString().c_str());

        pro.start("cmd.exe",QStringList()<<"/c"<<sCmd);
        pro.waitForFinished();


    }



}



void LayerTr::saveFile(QString sFilePath, QString sData)
{
    qDebug()<<"save file : "<<sFilePath;
    qDebug()<<"save data : "<<sData;
    QFileInfo info(sFilePath);

    if(!QDir(info.absolutePath()).exists())
    {
        QDir dir(info.absolutePath());

        QDir().mkpath(info.absolutePath());
        qDebug()<<"mk path : "<<info.absolutePath();

        qDebug()<<"AAAAAAAAAAAAAAAAAAAAAA"<<dir.exists();

        dir.mkpath(info.absolutePath());


    }

    QFile file(sFilePath);

    if(file.open(QIODevice::WriteOnly))
    {

        QTextStream out(&file);
        out.setCodec("UTF-8");  // 設置編碼方式為 UTF-8
        out<<sData;

        file.close();
    }
    else
    {
        qDebug()<<"open write error"<<sFilePath;
    }

}

void LayerTr::refreshCount()
{
    ui->lbCount->setText(QString::number(m_iCount+(m_iIdx+1))+"/"+QString::number(m_iTotal));
}

void LayerTr::updateTx()
{
    ui->lbFileName->setText(m_listReadFile.at(m_iIdx));

    ui->txtOri->setPlainText(m_sOriData);

    refreshCount();
}

//void LayerTr::copyFilesWithExtension(const QString &sourceDirPath, const QString &destDirPath, const QStringList &listExtension)
//{
//    QDir sourceDir(sourceDirPath);
//    QDir destDir(destDirPath);


//    QStringList files = sourceDir.entryList(QStringList() << listExtension, QDir::Files);

//    foreach (QString filename, files) {
//        QString srcFilePath = sourceDir.filePath(filename);
//        QString destFilePath = destDir.filePath(filename);
//        QFile::copy(srcFilePath, destFilePath);
//    }


//    QStringList subDirs = sourceDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
//    foreach (QString subDir, subDirs) {
//        QString srcSubDirPath = sourceDir.filePath(subDir);
//        QString destSubDirPath = destDir.filePath(subDir);
//        copyFilesWithExtension(srcSubDirPath, destSubDirPath, listExtension);
//    }
//}

QVariantMap LayerTr::loadConf()
{
    QVariantMap data;

    QSettings conf(QApplication::applicationDirPath()+"/config.ini",QSettings::IniFormat);



    foreach(QString key,conf.allKeys())
    {
        QVariant v=conf.value(key);

        data[key]=v;

        if(key.toLower()=="path")
        {
            setPath(v.toString());
        }
    }


    return data;
}




void LayerTr::on_btnRefresh_clicked()
{
    doTr(m_iIdx);
}


void LayerTr::on_btnCheck_clicked()
{

    if(ui->txtOut->toPlainText().trimmed().length()<1)
        return;


    decodeFile(m_sOriFileName,m_sOriData,m_sPathCheck);


}


void LayerTr::on_btnUnCheck_clicked()
{


    decodeFile(m_sOriFileName,m_sOriData,m_sPathUnCheck);

}

void LayerTr::slotAni()
{
    if(m_sOutData.length()<1)
    {
        ui->txtOut->clear();
        m_bAniOk = true;
        return;
    }


    int iIdx=qBound(0,m_iAniIdx+=16,m_sOutData.length()-1);


    QString s=m_sOutData.mid(0,iIdx);

    if(!m_bAniOk)
        ui->txtOut->setPlainText(s);


    m_bAniOk =m_iAniIdx>=m_sOutData.length();


}

void LayerTr::slotCheckRetry()
{
    if(m_iRecorIdx!=m_iIdx)
    {
        m_iRecorIdx = m_iIdx;
        return;
    }
    else
    {
        m_iRecorIdx = m_iIdx;
        on_btnRefresh_clicked();
    }

}

void LayerTr::timerEvent(QTimerEvent *)
{
    QString msg = ui->lbMsg->text();

    if(msg.contains("處理中"))
    {
        if(msg.length()<13)
        {
            msg+=".";
        }
        else
        {
            msg="處理中";
        }

        ui->lbMsg->setText(msg);

    }




}




void LayerTr::on_btnGoto_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->txOutPath->text()));
}

