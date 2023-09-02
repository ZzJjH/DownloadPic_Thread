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

    //创建三个子线程对象(需包含头文件#include<mythread.h>)
    MyThread_1 *SubThread_1 = new MyThread_1;
    MyThread_2 *SubThread_2 = new MyThread_2;
    MyThread_3 *SubThread_3 = new MyThread_3;

    //在子线程下载图片完成后，主线程需要接收子线程传来的文件路径用于显示图片
    QString m_filename_1;//子线程无法访问主窗口的控件
    QString m_filename_2;
    QString m_filename_3;


private:
    Ui::MainWindow *ui;
signals:
    //用于传输用户输入的下载信息给子线程(URL：图片下载地址，Path：图片保存路径)
    void downLoadInfo_1(QString URL_1,QString Path_1);
    void downLoadInfo_2(QString URL_2,QString Path_2);
    void downLoadInfo_3(QString URL_3,QString Path_3);

private slots:
    void on_pushButton_clicked();

    //用于主线程接受图片路径显示图片
    void receFilename(QString filename_1);
    void receFilename_2(QString filename_2);
    void receFilename_3(QString filename_3);
};
#endif // MAINWINDOW_H
