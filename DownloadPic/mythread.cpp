#include "mythread.h"
#include<QDebug>

MyThread_1::MyThread_1(QObject *parent)
    : QThread{parent}
{

}

void MyThread_1::RecedownLoadInfo_1(QString URL_1, QString Path_1)
{
    m_URL_1 = URL_1;
    m_Path_1 = Path_1;
}

void MyThread_1::run()
{
    qDebug()<<"子线程一";
    //1、获取URL(m_URL,m_Path)

    //2、识别URL是否可用
    QUrl newUrl_1 =QUrl::fromUserInput(m_URL_1);//需要包含头文件<QUrl>
    if(newUrl_1.isValid())
    {
        qDebug()<<"有效下载地址1";
    }
    else
    {
        qDebug()<<"无效下载地址1";
    }

    //3、获取文件保存地址(保存的文件夹)
    QString saveDir_1 = m_Path_1;
    saveDir_1.replace('\\','/');
    QDir dir(saveDir_1);              //需要包含头文件<QDir>
    if(!dir.exists("temp"))
    {
        dir.mkdir("temp");
    }else
    {
        qDebug()<<"文件夹已经存在";
    }
    saveDir_1 = saveDir_1+"/temp/";

    //4、获取文件完整路径（文件夹+文件名）
    QString fullFilename_1 = saveDir_1+newUrl_1.fileName()+".jpg";
    //    QString full = saveDir_1 + "1";
    //    QString fullFilename_1 = full+".jpg";
    if(QFile::exists(fullFilename_1))
    {
        QFile::remove(fullFilename_1);
        qDebug()<<"该图片已经存在";
    }

    onlineFile_1 = new QFile(fullFilename_1);
    if(!onlineFile_1->open((QIODevice::WriteOnly)))
    {
        qDebug()<<"临时文件一打开错误";
        //QMessageBox::information(this,"错误","临时文件1打开错误");
        return;
    }

    reply_1 = networkmanager_1.get(QNetworkRequest(newUrl_1));
    connect(reply_1,&QNetworkReply::finished,this,[=](){
        qDebug()<<"reply_1完成";
        QFileInfo fileInfo;
        fileInfo.setFile(onlineFile_1->fileName());
        onlineFile_1->close();
        delete onlineFile_1;
        onlineFile_1 = Q_NULLPTR;
        reply_1->deleteLater();
        reply_1 = Q_NULLPTR;
    });

    connect(reply_1,&QNetworkReply::readyRead,this,[=](){
        onlineFile_1->write(reply_1->readAll());
        qDebug()<<"图片一下载成功";
    });

    this->exec();//?
}


MyThread_2::MyThread_2(QObject *parent)
    : QThread{parent}
{

}

void MyThread_2::RecedownLoadInfo_2(QString URL_2, QString Path_2)
{
    m_URL_2 = URL_2;
    m_Path_2 = Path_2;
}

void MyThread_2::run()
{
    qDebug()<<"子线程二";
    //1、获取URL(m_URL,m_Path)

    //2、识别URL是否可用
    QUrl newUrl_2 =QUrl::fromUserInput(m_URL_2);//需要包含头文件<QUrl>
    if(newUrl_2.isValid())
    {
        qDebug()<<"有效下载地址2";
    }
    else
    {
        qDebug()<<"无效下载地址2";
    }

    //3、获取文件保存地址(保存的文件夹)
    QString saveDir_2 = m_Path_2;
    saveDir_2.replace('\\','/');
    QDir dir(saveDir_2);              //需要包含头文件<QDir>
    if(!dir.exists("temp"))
    {
        dir.mkdir("temp");
    }else
    {
        qDebug()<<"文件夹已经存在";
    }
    saveDir_2= saveDir_2+"/temp/";

    //4、获取文件完整路径（文件夹+文件名）
    QString fullFilename_2 = saveDir_2+newUrl_2.fileName()+".jpg";
    //    QString full = saveDir_2 + "2";
    //    QString fullFilename_2 = full+".jpg";
    if(QFile::exists(fullFilename_2))
    {
        QFile::remove(fullFilename_2);
        qDebug()<<"该图片已经存在";
    }

    onlineFile_2 = new QFile(fullFilename_2);
    if(!onlineFile_2->open((QIODevice::WriteOnly)))
    {
        qDebug()<<"临时文件二打开错误";
        //QMessageBox::information(this,"错误","临时文件2打开错误");
        return;
    }

    reply_2 = networkmanager_2.get(QNetworkRequest(newUrl_2));
    connect(reply_2,&QNetworkReply::finished,this,[=](){
        qDebug()<<"reply_1完成";
        QFileInfo fileInfo;
        fileInfo.setFile(onlineFile_2->fileName());
        onlineFile_2->close();
        delete onlineFile_2;
        onlineFile_2 = Q_NULLPTR;
        reply_2->deleteLater();
        reply_2 = Q_NULLPTR;
    });

    connect(reply_2,&QNetworkReply::readyRead,this,[=](){
        onlineFile_2->write(reply_2->readAll());
        qDebug()<<"图片二下载成功";
    });

    this->exec();//?
}



MyThread_3::MyThread_3(QObject *parent)
    : QThread{parent}
{

}

void MyThread_3::RecedownLoadInfo_3(QString URL_3, QString Path_3)
{
    m_URL_3 = URL_3;
    m_Path_3 = Path_3;
}

void MyThread_3::run()
{
    qDebug()<<"子线程三";
    //1、获取URL(m_URL,m_Path)

    //2、识别URL是否可用
    QUrl newUrl_3 =QUrl::fromUserInput(m_URL_3);//需要包含头文件<QUrl>
    if(newUrl_3.isValid())
    {
        qDebug()<<"有效下载地址3";
    }
    else
    {
        qDebug()<<"无效下载地址3";
    }

    //3、获取文件保存地址(保存的文件夹)
    QString saveDir_3 = m_Path_3;
    saveDir_3.replace('\\','/');
    QDir dir(saveDir_3);              //需要包含头文件<QDir>
    if(!dir.exists("temp"))
    {
        dir.mkdir("temp");
    }else
    {
        qDebug()<<"文件夹已经存在";
    }
    saveDir_3 = saveDir_3+"/temp/";

    //4、获取文件完整路径（文件夹+文件名）
    QString fullFilename_3 = saveDir_3+newUrl_3.fileName()+".jpg";
    //    QString full = saveDir_3 + "3";
    //    QString fullFilename_3 = full+".jpg";
    if(QFile::exists(fullFilename_3))
    {
        QFile::remove(fullFilename_3);
        qDebug()<<"该图片已经存在";
    }

    onlineFile_3 = new QFile(fullFilename_3);
    if(!onlineFile_3->open((QIODevice::WriteOnly)))
    {
        qDebug()<<"临时文件一打开错误";
        //QMessageBox::information(this,"错误","临时文件1打开错误");
        return;
    }

    reply_3 = networkmanager_3.get(QNetworkRequest(newUrl_3));
    connect(reply_3,&QNetworkReply::finished,this,[=](){
        qDebug()<<"reply_1完成";
        QFileInfo fileInfo;
        fileInfo.setFile(onlineFile_3->fileName());
        onlineFile_3->close();
        delete onlineFile_3;
        onlineFile_3 = Q_NULLPTR;
        reply_3->deleteLater();
        reply_3 = Q_NULLPTR;
    });

    connect(reply_3,&QNetworkReply::readyRead,this,[=](){
        onlineFile_3->write(reply_3->readAll());
        qDebug()<<"图片三下载成功";
    });

    this->exec();//?
}
