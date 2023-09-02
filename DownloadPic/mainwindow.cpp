#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<mythread.h>//
#include<QPixmap>//显示图片

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //固定窗口大小
    setFixedSize(1200,500);

    //设置图片默认保存路径
    QString curPath = QDir::currentPath();
    ui->PATHlineEdit_1->setText(curPath);
    ui->PATHlineEdit_2->setText(curPath);
    ui->PATHlineEdit_3->setText(curPath);

    //下载前：将URL和Path传给子线程
    connect(this, &MainWindow::downLoadInfo_1,SubThread_1,&MyThread_1::RecedownLoadInfo_1);
    connect(this, &MainWindow::downLoadInfo_2,SubThread_2,&MyThread_2::RecedownLoadInfo_2);
    connect(this, &MainWindow::downLoadInfo_3,SubThread_3,&MyThread_3::RecedownLoadInfo_3);

    //下载后：子线程将下载的图片路径传给主线程
    connect(SubThread_1,&MyThread_1::sendFilename,this,&MainWindow::receFilename);
    connect(SubThread_2,&MyThread_2::sendFilename,this,&MainWindow::receFilename_2);
    connect(SubThread_3,&MyThread_3::sendFilename,this,&MainWindow::receFilename_3);



//    connect(SubThread_1,&MyThread_1::finished,this,[=](){
//        qDebug()<<"线程一结束";//未显示
//    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

//点击“下载”按钮
void MainWindow::on_pushButton_clicked()
{//void downLoadInfo(QString URL_1,QString Path_1,QString URL_2,QString Path_2,QString URL_3,QString Path_3);

    //保存URL，Path，触发信号传给子线程
    QString URL_1 = ui->URLlineEdit_1->text().trimmed();
    QString Path_1 = ui->PATHlineEdit_1->text().trimmed();
    QString URL_2 = ui->URLlineEdit_2->text().trimmed();
    QString Path_2 = ui->PATHlineEdit_2->text().trimmed();
    QString URL_3 = ui->URLlineEdit_3->text().trimmed();
    QString Path_3 = ui->PATHlineEdit_3->text().trimmed();
    emit downLoadInfo_1(URL_1,Path_1);
    emit downLoadInfo_2(URL_2,Path_2);
    emit downLoadInfo_3(URL_3,Path_3);//转到2、将URL和Path传给子线程

    ui->URLlineEdit_1->clear();
    ui->URLlineEdit_2->clear();
    ui->URLlineEdit_3->clear();

    //启动子线程
    if((!(URL_1.isEmpty()))&&(!(Path_1.isEmpty())))
    {
        SubThread_1->start();
//        //4、显示图片
//        QPixmap pixmap_1(m_filename_1);
//        ui->showpic_1->setPixmap(m_filename_1);
//        qDebug()<<"显示图片";
        //qDebug()<<"666";(未显示)
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


//显示图片的槽函数
void MainWindow::receFilename(QString filename_1)
{
    m_filename_1 = filename_1;

    QPixmap pixmap_1(m_filename_1);

    //label适应图片大小
    pixmap_1.scaled(ui->showpic_1->size(), Qt::KeepAspectRatio);
    ui->showpic_1->setScaledContents(true);

    ui->showpic_1->setPixmap(m_filename_1);
    //qDebug()<<"显示图片1"<<m_filename_1;
}

void MainWindow::receFilename_2(QString filename_2)
{
    m_filename_2 = filename_2;


    QPixmap pixmap_2(m_filename_2);

    //label适应图片大小
    pixmap_2.scaled(ui->showpic_2->size(), Qt::KeepAspectRatio);
    ui->showpic_2->setScaledContents(true);

    ui->showpic_2->setPixmap(m_filename_2);
    //qDebug()<<"显示图片2"<<m_filename_2;
}

void MainWindow::receFilename_3(QString filename_3)
{
    m_filename_3 = filename_3;


    QPixmap pixmap_3(m_filename_3);

    //label适应图片大小
    pixmap_3.scaled(ui->showpic_3->size(), Qt::KeepAspectRatio);
    ui->showpic_3->setScaledContents(true);

    ui->showpic_3->setPixmap(m_filename_3);
   // qDebug()<<"显示图片3"<<m_filename_3;
    /*pixmap->scaled(ui->label->size();

ui->label->setScaledContents(true);*/
}

