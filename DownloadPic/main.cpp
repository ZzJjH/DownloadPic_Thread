#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
/*
.pro +network
添加一个class文件,mythread
在mythread中添加三个子线程的类（m_URL,m_Path)
mainwindow(signals:void downloadInfo(url,path)×3


*/
