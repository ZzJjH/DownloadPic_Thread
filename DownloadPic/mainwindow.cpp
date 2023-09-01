#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<mythread.h>//
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    //1、创建子线程对象(先包含头文件)
//    MyThread_1 *SubThread_1 = new MyThread_1;
//    MyThread_2 *SubThread_2 = new MyThread_2;
//    MyThread_3 *SubThread_3 = new MyThread_3;

    //2、将URL和Path传给子线程
    connect(this, &MainWindow::downLoadInfo_1,SubThread_1,&MyThread_1::RecedownLoadInfo_1);
    connect(this, &MainWindow::downLoadInfo_2,SubThread_2,&MyThread_2::RecedownLoadInfo_2);
    connect(this, &MainWindow::downLoadInfo_3,SubThread_3,&MyThread_3::RecedownLoadInfo_3);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{//void downLoadInfo(QString URL_1,QString Path_1,QString URL_2,QString Path_2,QString URL_3,QString Path_3);
    QString URL_1 = ui->URLlineEdit_1->text().trimmed();
    QString Path_1 = ui->PATHlineEdit_1->text().trimmed();
    QString URL_2 = ui->URLlineEdit_2->text().trimmed();
    QString Path_2 = ui->PATHlineEdit_2->text().trimmed();
    QString URL_3 = ui->URLlineEdit_3->text().trimmed();
    QString Path_3 = ui->PATHlineEdit_3->text().trimmed();
    emit downLoadInfo_1(URL_1,Path_1);
    emit downLoadInfo_2(URL_2,Path_2);
    emit downLoadInfo_3(URL_3,Path_3);//转到2、将URL和Path传给子线程

    //3、启动子线程
    if((!(URL_1.isEmpty()))&&(!(Path_1.isEmpty())))
    {
        SubThread_1->start();
    }

    if((!(URL_2.isEmpty()))&&(!(Path_2.isEmpty())))
    {
        SubThread_2->start();
    }
    if((!(URL_3.isEmpty()))&&(!(Path_3.isEmpty())))
    {
        SubThread_3->start();
    }

}

