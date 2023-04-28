#include "LayerTrDetail.h"
#include "ui_LayerTrDetail.h"

LayerTrDetail::LayerTrDetail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTrDetail)
{
    ui->setupUi(this);
    
    setWindowTitle(" ");


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


    connect(ui->btnClose,&QPushButton::clicked,[=](){ hide();});

    connect(ui->btnSave,&QPushButton::clicked,[=]()
    {
        QMessageBox box;

        box.setText("確定要保存修改嗎？");

        box.setStandardButtons(QMessageBox::Yes |QMessageBox::No  );
        box.setButtonText(QMessageBox::Yes, "是");
        box.setButtonText(QMessageBox::No, "否");

        int iRet = box.exec();

        if(iRet==QMessageBox::Yes)
        {
            saveChange();
            hide();
        }
    });


    connect(ui->btnMove,&QPushButton::clicked,[=]()
    {

        QMessageBox box;

        box.setText("確定要移到未處理(uncheck)資料夾嗎？");

        box.setStandardButtons(QMessageBox::Yes |QMessageBox::No  );
        box.setButtonText(QMessageBox::Yes, "是");
        box.setButtonText(QMessageBox::No, "否");

        int iRet = box.exec();

        if(iRet==QMessageBox::Yes)
        {
            toUncheck();
            emit refresh();
            hide();

        }


    });


}

LayerTrDetail::~LayerTrDetail()
{
    delete ui;
}

void LayerTrDetail::setData(QString sTitle,QString sOriPath, QString sOutPath)
{

    ui->lbTitle->setText(sTitle);

    auto readFile = [=](QString sFilePath)
    {
        QString sRe="";
        QFile file0(sFilePath);

        if(file0.open(QIODevice::ReadOnly))
        {
            QByteArray byte = file0.readAll();

            QString sData(byte);

            file0.close();

            sRe = sData;
        }


        return sRe;
    };



    m_sOriPath = sOriPath;

    m_sOutPath = sOutPath;

    ui->txtOri->setPlainText(readFile(m_sOriPath));

    ui->txtOut->setPlainText(readFile(m_sOutPath));



}

void LayerTrDetail::saveChange()
{
    QString sData = ui->txtOut->toPlainText();

    QFile file(m_sOutPath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QTextStream stream(&file);
        stream << sData;
        file.close();
    }


}

void LayerTrDetail::toUncheck()
{
    QString sourcePath = m_sOutPath;
    QString targetPath =m_sOutPath;

    targetPath.replace("/check/","/uncheck/");


    qDebug()<<" AB : "<<sourcePath;

    qDebug()<<" AC : "<<targetPath;


    // 檢查源檔案是否存在
    if (!QFile::exists(sourcePath))
    {
        qDebug() << "Source file not found.";

    }

    QStringList  listTmp=targetPath.split("/");

    listTmp.pop_back();

    QDir dir;

    if(!dir.exists(listTmp.join("/")))
    {
        dir.mkpath(listTmp.join("/"));
    }


    // 移動檔案
    if (!QFile::rename(sourcePath, targetPath)) {
        qDebug() << "Failed to move file.";

    }
}
