/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QPushButton *pushButton_6;
    QPushButton *Find_Device;
    QPushButton *Bluetooth_On;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QPushButton *Bluetoot_Off;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QListWidget *listWidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(349, 663);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#e3e0d5;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget->setMouseTracking(true);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 560, 52, 52));
        pushButton_6->setStyleSheet(QString::fromUtf8(" background-color: #434343;\n"
"color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        Find_Device = new QPushButton(centralwidget);
        Find_Device->setObjectName(QString::fromUtf8("Find_Device"));
        Find_Device->setGeometry(QRect(90, 630, 171, 41));
        Bluetooth_On = new QPushButton(centralwidget);
        Bluetooth_On->setObjectName(QString::fromUtf8("Bluetooth_On"));
        Bluetooth_On->setGeometry(QRect(90, 680, 171, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 480, 50, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(/Users/jeffreyjose/Object-Oriented Software Eng/Github/MCT-Device-Interface/MyGUI/down.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 410, 50, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(/Users/jeffreyjose/Object-Oriented Software Eng/Github/MCT-Device-Interface/MyGUI/left.png);\n"
"background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 410, 50, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(/Users/jeffreyjose/Object-Oriented Software Eng/Github/MCT-Device-Interface/MyGUI/right.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 410, 52, 52));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setAcceptDrops(false);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8(" background-color: #434343;\n"
"color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(270, 300, 50, 50));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(/Users/jeffreyjose/Object-Oriented Software Eng/Github/MCT-Device-Interface/MyGUI/menu.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        Bluetoot_Off = new QPushButton(centralwidget);
        Bluetoot_Off->setObjectName(QString::fromUtf8("Bluetoot_Off"));
        Bluetoot_Off->setGeometry(QRect(90, 730, 171, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 340, 50, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(/Users/jeffreyjose/Object-Oriented Software Eng/Github/MCT-Device-Interface/MyGUI/up.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 300, 50, 50));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(/Users/jeffreyjose/Object-Oriented Software Eng/Github/MCT-Device-Interface/MyGUI/back.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 870, 231, 71));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 100, 311, 171));
        graphicsView->setStyleSheet(QString::fromUtf8(" background-color: grey"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 111, 41));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: BLACK;"));
        MainWindow->setCentralWidget(centralwidget);
        pushButton_6->raise();
        Bluetooth_On->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        pushButton_4->raise();
        pushButton->raise();
        pushButton_8->raise();
        Bluetoot_Off->raise();
        pushButton_2->raise();
        pushButton_7->raise();
        listWidget->raise();
        Find_Device->raise();
        graphicsView->raise();
        label->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 349, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_6, SIGNAL(released()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MCT", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "POWER", nullptr));
        Find_Device->setText(QCoreApplication::translate("MainWindow", "Find Device", nullptr));
        Bluetooth_On->setText(QCoreApplication::translate("MainWindow", "Bluetooth On", nullptr));
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        pushButton_8->setText(QString());
        Bluetoot_Off->setText(QCoreApplication::translate("MainWindow", "Bluetooth Off", nullptr));
        pushButton_2->setText(QString());
        pushButton_7->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "DENAS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
