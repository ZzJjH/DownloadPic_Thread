#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
/*线程
添加一个class文件,mythread
在mythread中添加三个子线程的类
对象：m_URL是图片的下载地址、m_Path是图片的保存路径
    fullFilename是下载后图片的完整路径
    networkmanager、reply用于图片下载
    onlineFile用于操作文件读写

信号：void sendFilename(QString filename);
    用于下载后给主线程传输完整图片路径用于显示

槽：void RecedownLoadInfo(QString URL,QString Path);
    用于接收用户在界面输入的URL和PATH

run函数重写：
    1、识别用户的URL是否有效
    2、根据path和URL获得完整文件名并创建一个文件，并改为可写入
    3、用QNetworkAccessManager下载
    4、下载finished()后结束线程
*/
