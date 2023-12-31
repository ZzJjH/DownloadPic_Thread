#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>//添加头文件
#include<QUrl>
#include<QDir>
#include<QFile>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QMessageBox>

/*子线程1*/
class MyThread_1 : public QThread//继承
{
    Q_OBJECT
public:
    explicit MyThread_1(QObject *parent = nullptr);

signals:
    void sendFilename(QString filename_1);

private:
    //图片下载地址和保存路径
    QString m_URL_1;
    QString m_Path_1;

    //带文件名的保存路径
    QString fullFilename_1;

    //QNetworkAccessManager networkmanager_1;
    QNetworkReply *reply_1;

    //创建文件对象用于进行“写（下载）” 操作
    QFile *onlineFile_1;

//private slots://自定义槽用于接受用户输入的下载信息
public:
    //将主窗口的URL，Path传输给m_URL,m_Path
    void RecedownLoadInfo_1(QString URL_1,QString Path_1);

//重写虚函数
protected:
    void run() override;

};


/*子线程2*/
class MyThread_2 : public QThread//2、继承
{
    Q_OBJECT
public:
    explicit MyThread_2(QObject *parent = nullptr);

private:
    QString m_URL_2;
    QString m_Path_2;
    QString fullFilename_2;
    //QNetworkAccessManager networkmanager_2;
    QNetworkReply *reply_2;
    QFile *onlineFile_2;

public:
    void RecedownLoadInfo_2(QString URL_2,QString Path_2);

signals:
    void sendFilename(QString filename_2);

//重写虚函数
protected:
    void run() override;


};


/*子线程3*/
class MyThread_3 : public QThread//2、继承
{
    Q_OBJECT
public:
    explicit MyThread_3(QObject *parent = nullptr);

signals:
    void sendFilename(QString filename_3);
private:
    QString m_URL_3;
    QString m_Path_3;
    QString fullFilename_3;
    //QNetworkAccessManager networkmanager_3;
    QNetworkReply *reply_3;
    QFile *onlineFile_3;

public:
    void RecedownLoadInfo_3(QString URL_3,QString Path_3);

//重写虚函数
protected:
    void run() override;

};

#endif // MYTHREAD_H
