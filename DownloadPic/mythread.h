#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>//1、添加头文件
#include<QUrl>
#include<QDir>
#include<QFile>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QMessageBox>

/*子线程1*/
class MyThread_1 : public QThread//2、继承
{
    Q_OBJECT
public:
    explicit MyThread_1(QObject *parent = nullptr);

signals:

private:
    QString m_URL_1;
    QString m_Path_1;
    QNetworkAccessManager networkmanager_1;
    QNetworkReply *reply_1;
    QFile *onlineFile_1;

//private slots://自定义槽用于接受用户输入的下载信息
public:
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
    QNetworkAccessManager networkmanager_2;
    QNetworkReply *reply_2;
    QFile *onlineFile_2;

public:
    void RecedownLoadInfo_2(QString URL_2,QString Path_2);

signals:

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

private:
    QString m_URL_3;
    QString m_Path_3;
    QNetworkAccessManager networkmanager_3;
    QNetworkReply *reply_3;
    QFile *onlineFile_3;

public:
    void RecedownLoadInfo_3(QString URL_3,QString Path_3);

//重写虚函数
protected:
    void run() override;

};

#endif // MYTHREAD_H
