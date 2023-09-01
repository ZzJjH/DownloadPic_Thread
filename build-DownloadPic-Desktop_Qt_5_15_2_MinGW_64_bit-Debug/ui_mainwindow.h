/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *PATHlineEdit_1;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *PATHlineEdit_2;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *URLlineEdit_2;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLineEdit *PATHlineEdit_3;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLineEdit *URLlineEdit_3;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *URLlineEdit_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(390, 476);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 335, 32));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        PATHlineEdit_1 = new QLineEdit(layoutWidget);
        PATHlineEdit_1->setObjectName(QString::fromUtf8("PATHlineEdit_1"));
        QFont font;
        font.setPointSize(14);
        PATHlineEdit_1->setFont(font);

        gridLayout_2->addWidget(PATHlineEdit_1, 0, 1, 1, 1);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 200, 335, 32));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        PATHlineEdit_2 = new QLineEdit(layoutWidget_2);
        PATHlineEdit_2->setObjectName(QString::fromUtf8("PATHlineEdit_2"));
        PATHlineEdit_2->setFont(font);

        gridLayout_3->addWidget(PATHlineEdit_2, 0, 1, 1, 1);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 150, 335, 32));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        URLlineEdit_2 = new QLineEdit(layoutWidget_3);
        URLlineEdit_2->setObjectName(QString::fromUtf8("URLlineEdit_2"));
        URLlineEdit_2->setFont(font);

        gridLayout_4->addWidget(URLlineEdit_2, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 320, 335, 32));
        gridLayout_5 = new QGridLayout(layoutWidget_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        PATHlineEdit_3 = new QLineEdit(layoutWidget_4);
        PATHlineEdit_3->setObjectName(QString::fromUtf8("PATHlineEdit_3"));
        PATHlineEdit_3->setFont(font);

        gridLayout_5->addWidget(PATHlineEdit_3, 0, 1, 1, 1);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 270, 335, 32));
        gridLayout_6 = new QGridLayout(layoutWidget_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        URLlineEdit_3 = new QLineEdit(layoutWidget_5);
        URLlineEdit_3->setObjectName(QString::fromUtf8("URLlineEdit_3"));
        URLlineEdit_3->setFont(font);

        gridLayout_6->addWidget(URLlineEdit_3, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 390, 61, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 335, 32));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        URLlineEdit_1 = new QLineEdit(widget);
        URLlineEdit_1->setObjectName(QString::fromUtf8("URLlineEdit_1"));
        URLlineEdit_1->setFont(font);

        gridLayout->addWidget(URLlineEdit_1, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 390, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\233\276\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\233\276\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\233\276\347\211\207\344\270\213\350\275\275\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\233\276\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\233\276\347\211\207\344\270\213\350\275\275\345\234\260\345\235\200</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\233\276\347\211\207\344\270\213\350\275\275\345\234\260\345\235\200</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
