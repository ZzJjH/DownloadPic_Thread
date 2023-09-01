#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<mythread.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //1、创建子线程对象(先包含头文件)
    MyThread_1 *SubThread_1 = new MyThread_1;
    MyThread_2 *SubThread_2 = new MyThread_2;
    MyThread_3 *SubThread_3 = new MyThread_3;

private:
    Ui::MainWindow *ui;
signals:
    //用于传输用户的下载信息给子线程
    void downLoadInfo_1(QString URL_1,QString Path_1);
    void downLoadInfo_2(QString URL_2,QString Path_2);
    void downLoadInfo_3(QString URL_3,QString Path_3);

private slots:
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
