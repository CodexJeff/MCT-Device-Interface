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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMED;
    QAction *actionScreenings;
    QAction *actionAllergy;
    QAction *actionPain;
    QAction *actionDystonia;
    QAction *actionGyn_Pain;
    QAction *actionHypotonia;
    QAction *actionHead;
    QAction *actionAbd_Pain;
    QAction *actionCold;
    QAction *actionPotency;
    QAction *actionJoints;
    QAction *actionNausea;
    QAction *actionConstipation;
    QAction *actionInt_Pain;
    QAction *actionBloating;
    QAction *actionGynecology;
    QAction *actionHypertension;
    QAction *actionThroat;
    QAction *actionDiarrhea;
    QAction *actionMuscles;
    QAction *actionCough;
    QAction *actionKidneys;
    QAction *actionBack;
    QAction *actionTrauma;
    QAction *actionAsphyxia;
    QAction *action1_0_9_9HZ;
    QAction *action10_Hz;
    QAction *action20_HZ;
    QAction *action60_Hz;
    QAction *action77_Hz;
    QAction *action125_Hz;
    QAction *action140_Hz;
    QAction *action200_Hz;
    QAction *action7710;
    QAction *action7720;
    QAction *action77AM;
    QAction *actionDisable;
    QAction *actionUp_to_year_1_year;
    QAction *action1_3_Years;
    QAction *action4_7_Years;
    QAction *action7_12_Years;
    QAction *actionGeneral;
    QAction *actionSound_cont;
    QAction *actionSOund_But;
    QAction *actionBrightness;
    QAction *actionEconomy;
    QAction *actionRecording;
    QAction *actionClock;
    QAction *actionTurquoise;
    QAction *actionWinter;
    QAction *actionBrozne;
    QAction *actionNight;
    QAction *actionOff;
    QAction *actionSingly;
    QAction *actionDaily;
    QAction *actionEnglish;
    QAction *actionFrench;
    QAction *actionRussian;
    QAction *actionItalian;
    QAction *actionSpanish;
    QAction *actionDeutsch;
    QAction *actionPrograms_2;
    QAction *actionFrequency_2;
    QAction *actionSettings_2;
    QAction *actionChildren_2;
    QAction *actionMED_2;
    QAction *actionScreening;
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
    QLabel *label_2;
    QListWidget *list;
    QLabel *label_3;
    QWidget *widget;
    QLabel *batteryIndicator;
    QLabel *clockIndicator;
    QListWidget *list_2;
    QListWidget *list_3;
    QListWidget *list_4;
    QListWidget *list_5;
    QListWidget *list_6;
    QListWidget *list_7;
    QWidget *medWidget;
    QLCDNumber *lcdNumber;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(349, 663);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#BDF0FD;"));
        actionMED = new QAction(MainWindow);
        actionMED->setObjectName(QString::fromUtf8("actionMED"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/MED.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMED->setIcon(icon);
        actionScreenings = new QAction(MainWindow);
        actionScreenings->setObjectName(QString::fromUtf8("actionScreenings"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/Screening.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScreenings->setIcon(icon1);
        actionAllergy = new QAction(MainWindow);
        actionAllergy->setObjectName(QString::fromUtf8("actionAllergy"));
        actionPain = new QAction(MainWindow);
        actionPain->setObjectName(QString::fromUtf8("actionPain"));
        actionDystonia = new QAction(MainWindow);
        actionDystonia->setObjectName(QString::fromUtf8("actionDystonia"));
        actionGyn_Pain = new QAction(MainWindow);
        actionGyn_Pain->setObjectName(QString::fromUtf8("actionGyn_Pain"));
        actionHypotonia = new QAction(MainWindow);
        actionHypotonia->setObjectName(QString::fromUtf8("actionHypotonia"));
        actionHead = new QAction(MainWindow);
        actionHead->setObjectName(QString::fromUtf8("actionHead"));
        actionAbd_Pain = new QAction(MainWindow);
        actionAbd_Pain->setObjectName(QString::fromUtf8("actionAbd_Pain"));
        actionCold = new QAction(MainWindow);
        actionCold->setObjectName(QString::fromUtf8("actionCold"));
        actionPotency = new QAction(MainWindow);
        actionPotency->setObjectName(QString::fromUtf8("actionPotency"));
        actionJoints = new QAction(MainWindow);
        actionJoints->setObjectName(QString::fromUtf8("actionJoints"));
        actionNausea = new QAction(MainWindow);
        actionNausea->setObjectName(QString::fromUtf8("actionNausea"));
        actionConstipation = new QAction(MainWindow);
        actionConstipation->setObjectName(QString::fromUtf8("actionConstipation"));
        actionInt_Pain = new QAction(MainWindow);
        actionInt_Pain->setObjectName(QString::fromUtf8("actionInt_Pain"));
        actionBloating = new QAction(MainWindow);
        actionBloating->setObjectName(QString::fromUtf8("actionBloating"));
        actionGynecology = new QAction(MainWindow);
        actionGynecology->setObjectName(QString::fromUtf8("actionGynecology"));
        actionHypertension = new QAction(MainWindow);
        actionHypertension->setObjectName(QString::fromUtf8("actionHypertension"));
        actionThroat = new QAction(MainWindow);
        actionThroat->setObjectName(QString::fromUtf8("actionThroat"));
        actionDiarrhea = new QAction(MainWindow);
        actionDiarrhea->setObjectName(QString::fromUtf8("actionDiarrhea"));
        actionMuscles = new QAction(MainWindow);
        actionMuscles->setObjectName(QString::fromUtf8("actionMuscles"));
        actionCough = new QAction(MainWindow);
        actionCough->setObjectName(QString::fromUtf8("actionCough"));
        actionKidneys = new QAction(MainWindow);
        actionKidneys->setObjectName(QString::fromUtf8("actionKidneys"));
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionTrauma = new QAction(MainWindow);
        actionTrauma->setObjectName(QString::fromUtf8("actionTrauma"));
        actionAsphyxia = new QAction(MainWindow);
        actionAsphyxia->setObjectName(QString::fromUtf8("actionAsphyxia"));
        action1_0_9_9HZ = new QAction(MainWindow);
        action1_0_9_9HZ->setObjectName(QString::fromUtf8("action1_0_9_9HZ"));
        action10_Hz = new QAction(MainWindow);
        action10_Hz->setObjectName(QString::fromUtf8("action10_Hz"));
        action20_HZ = new QAction(MainWindow);
        action20_HZ->setObjectName(QString::fromUtf8("action20_HZ"));
        action60_Hz = new QAction(MainWindow);
        action60_Hz->setObjectName(QString::fromUtf8("action60_Hz"));
        action77_Hz = new QAction(MainWindow);
        action77_Hz->setObjectName(QString::fromUtf8("action77_Hz"));
        action125_Hz = new QAction(MainWindow);
        action125_Hz->setObjectName(QString::fromUtf8("action125_Hz"));
        action140_Hz = new QAction(MainWindow);
        action140_Hz->setObjectName(QString::fromUtf8("action140_Hz"));
        action200_Hz = new QAction(MainWindow);
        action200_Hz->setObjectName(QString::fromUtf8("action200_Hz"));
        action7710 = new QAction(MainWindow);
        action7710->setObjectName(QString::fromUtf8("action7710"));
        action7720 = new QAction(MainWindow);
        action7720->setObjectName(QString::fromUtf8("action7720"));
        action77AM = new QAction(MainWindow);
        action77AM->setObjectName(QString::fromUtf8("action77AM"));
        actionDisable = new QAction(MainWindow);
        actionDisable->setObjectName(QString::fromUtf8("actionDisable"));
        actionUp_to_year_1_year = new QAction(MainWindow);
        actionUp_to_year_1_year->setObjectName(QString::fromUtf8("actionUp_to_year_1_year"));
        action1_3_Years = new QAction(MainWindow);
        action1_3_Years->setObjectName(QString::fromUtf8("action1_3_Years"));
        action4_7_Years = new QAction(MainWindow);
        action4_7_Years->setObjectName(QString::fromUtf8("action4_7_Years"));
        action7_12_Years = new QAction(MainWindow);
        action7_12_Years->setObjectName(QString::fromUtf8("action7_12_Years"));
        actionGeneral = new QAction(MainWindow);
        actionGeneral->setObjectName(QString::fromUtf8("actionGeneral"));
        actionSound_cont = new QAction(MainWindow);
        actionSound_cont->setObjectName(QString::fromUtf8("actionSound_cont"));
        actionSOund_But = new QAction(MainWindow);
        actionSOund_But->setObjectName(QString::fromUtf8("actionSOund_But"));
        actionBrightness = new QAction(MainWindow);
        actionBrightness->setObjectName(QString::fromUtf8("actionBrightness"));
        actionEconomy = new QAction(MainWindow);
        actionEconomy->setObjectName(QString::fromUtf8("actionEconomy"));
        actionRecording = new QAction(MainWindow);
        actionRecording->setObjectName(QString::fromUtf8("actionRecording"));
        actionClock = new QAction(MainWindow);
        actionClock->setObjectName(QString::fromUtf8("actionClock"));
        actionTurquoise = new QAction(MainWindow);
        actionTurquoise->setObjectName(QString::fromUtf8("actionTurquoise"));
        actionWinter = new QAction(MainWindow);
        actionWinter->setObjectName(QString::fromUtf8("actionWinter"));
        actionBrozne = new QAction(MainWindow);
        actionBrozne->setObjectName(QString::fromUtf8("actionBrozne"));
        actionNight = new QAction(MainWindow);
        actionNight->setObjectName(QString::fromUtf8("actionNight"));
        actionOff = new QAction(MainWindow);
        actionOff->setObjectName(QString::fromUtf8("actionOff"));
        actionSingly = new QAction(MainWindow);
        actionSingly->setObjectName(QString::fromUtf8("actionSingly"));
        actionDaily = new QAction(MainWindow);
        actionDaily->setObjectName(QString::fromUtf8("actionDaily"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionFrench = new QAction(MainWindow);
        actionFrench->setObjectName(QString::fromUtf8("actionFrench"));
        actionRussian = new QAction(MainWindow);
        actionRussian->setObjectName(QString::fromUtf8("actionRussian"));
        actionItalian = new QAction(MainWindow);
        actionItalian->setObjectName(QString::fromUtf8("actionItalian"));
        actionSpanish = new QAction(MainWindow);
        actionSpanish->setObjectName(QString::fromUtf8("actionSpanish"));
        actionDeutsch = new QAction(MainWindow);
        actionDeutsch->setObjectName(QString::fromUtf8("actionDeutsch"));
        actionPrograms_2 = new QAction(MainWindow);
        actionPrograms_2->setObjectName(QString::fromUtf8("actionPrograms_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/icons/syringe.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrograms_2->setIcon(icon2);
        actionFrequency_2 = new QAction(MainWindow);
        actionFrequency_2->setObjectName(QString::fromUtf8("actionFrequency_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/icons/frequency.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFrequency_2->setIcon(icon3);
        actionSettings_2 = new QAction(MainWindow);
        actionSettings_2->setObjectName(QString::fromUtf8("actionSettings_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings_2->setIcon(icon4);
        actionChildren_2 = new QAction(MainWindow);
        actionChildren_2->setObjectName(QString::fromUtf8("actionChildren_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/icons/Children.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChildren_2->setIcon(icon5);
        actionMED_2 = new QAction(MainWindow);
        actionMED_2->setObjectName(QString::fromUtf8("actionMED_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/icons/MED.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMED_2->setIcon(icon6);
        actionScreening = new QAction(MainWindow);
        actionScreening->setObjectName(QString::fromUtf8("actionScreening"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/icons/Screening.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScreening->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget->setMouseTracking(true);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 560, 52, 52));
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
        pushButton_3->setGeometry(QRect(160, 480, 50, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/icons/down.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 410, 50, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/icons/left.png);\n"
"background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 410, 50, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/icons/right.png);\n"
" background-color: white;\n"
" border-radius:25px;\n"
" border-color: black;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 410, 52, 52));
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
        pushButton_8->setGeometry(QRect(280, 300, 50, 50));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/icons/menu.png);\n"
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
        pushButton_2->setGeometry(QRect(160, 340, 50, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/icons/up.png);\n"
"background-color: white;\n"
"border-radius:25px;\n"
"border-color: black;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 300, 50, 50));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/icons/back.png);\n"
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 101, 31));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: BLACK;"));
        list = new QListWidget(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 100, 331, 181));
        list->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 69, 331, 31));
        label_3->setStyleSheet(QString::fromUtf8("background: grey;"));
        label_3->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 50, 331, 21));
        widget->setStyleSheet(QString::fromUtf8("background: #B1B1B1;"));
        batteryIndicator = new QLabel(widget);
        batteryIndicator->setObjectName(QString::fromUtf8("batteryIndicator"));
        batteryIndicator->setGeometry(QRect(5, 3, 101, 16));
        batteryIndicator->setAlignment(Qt::AlignCenter);
        clockIndicator = new QLabel(widget);
        clockIndicator->setObjectName(QString::fromUtf8("clockIndicator"));
        clockIndicator->setGeometry(QRect(140, 0, 121, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("System"));
        font2.setBold(true);
        font2.setWeight(75);
        clockIndicator->setFont(font2);
        clockIndicator->setStyleSheet(QString::fromUtf8("font-style:comic-sans"));
        list_2 = new QListWidget(centralwidget);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        new QListWidgetItem(list_2);
        list_2->setObjectName(QString::fromUtf8("list_2"));
        list_2->setEnabled(true);
        list_2->setGeometry(QRect(10, 100, 331, 181));
        list_2->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        list_3 = new QListWidget(centralwidget);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(list_3);
        __qlistwidgetitem->setForeground(brush);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        new QListWidgetItem(list_3);
        list_3->setObjectName(QString::fromUtf8("list_3"));
        list_3->setEnabled(true);
        list_3->setGeometry(QRect(10, 100, 331, 181));
        list_3->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        list_4 = new QListWidget(centralwidget);
        list_4->setObjectName(QString::fromUtf8("list_4"));
        list_4->setGeometry(QRect(10, 100, 331, 181));
        list_4->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        list_5 = new QListWidget(centralwidget);
        list_5->setObjectName(QString::fromUtf8("list_5"));
        list_5->setGeometry(QRect(10, 100, 331, 181));
        list_5->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        list_6 = new QListWidget(centralwidget);
        new QListWidgetItem(list_6);
        new QListWidgetItem(list_6);
        new QListWidgetItem(list_6);
        new QListWidgetItem(list_6);
        new QListWidgetItem(list_6);
        list_6->setObjectName(QString::fromUtf8("list_6"));
        list_6->setGeometry(QRect(10, 100, 331, 181));
        list_6->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        list_7 = new QListWidget(centralwidget);
        new QListWidgetItem(list_7);
        list_7->setObjectName(QString::fromUtf8("list_7"));
        list_7->setGeometry(QRect(10, 100, 331, 181));
        list_7->setStyleSheet(QString::fromUtf8("background : white ;\n"
"color : black ;\n"
"font-size: 20px ;\n"
""));
        medWidget = new QWidget(centralwidget);
        medWidget->setObjectName(QString::fromUtf8("medWidget"));
        medWidget->setGeometry(QRect(10, 100, 331, 181));
        medWidget->setStyleSheet(QString::fromUtf8("background: white ;\n"
""));
        lcdNumber = new QLCDNumber(medWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(70, 30, 181, 111));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 280, 331, 16));
        label_4->setStyleSheet(QString::fromUtf8("background: grey;"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
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
        label_2->raise();
        list->raise();
        label_3->raise();
        widget->raise();
        list_2->raise();
        list_3->raise();
        list_4->raise();
        list_5->raise();
        list_6->raise();
        list_7->raise();
        medWidget->raise();
        label_4->raise();
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
        actionMED->setText(QCoreApplication::translate("MainWindow", "MED", nullptr));
        actionScreenings->setText(QCoreApplication::translate("MainWindow", "Screenings", nullptr));
        actionAllergy->setText(QCoreApplication::translate("MainWindow", "Allergy", nullptr));
        actionPain->setText(QCoreApplication::translate("MainWindow", "Pain", nullptr));
        actionDystonia->setText(QCoreApplication::translate("MainWindow", "Dystonia", nullptr));
        actionGyn_Pain->setText(QCoreApplication::translate("MainWindow", "Gyn.Pain", nullptr));
        actionHypotonia->setText(QCoreApplication::translate("MainWindow", "Hypotonia", nullptr));
        actionHead->setText(QCoreApplication::translate("MainWindow", "Head", nullptr));
        actionAbd_Pain->setText(QCoreApplication::translate("MainWindow", "Abd. Pain", nullptr));
        actionCold->setText(QCoreApplication::translate("MainWindow", "Cold", nullptr));
        actionPotency->setText(QCoreApplication::translate("MainWindow", "Potency", nullptr));
        actionJoints->setText(QCoreApplication::translate("MainWindow", "Joints", nullptr));
        actionNausea->setText(QCoreApplication::translate("MainWindow", "Nausea", nullptr));
        actionConstipation->setText(QCoreApplication::translate("MainWindow", "Constipation", nullptr));
        actionInt_Pain->setText(QCoreApplication::translate("MainWindow", "Int. Pain", nullptr));
        actionBloating->setText(QCoreApplication::translate("MainWindow", "Bloating", nullptr));
        actionGynecology->setText(QCoreApplication::translate("MainWindow", "Gynecology", nullptr));
        actionHypertension->setText(QCoreApplication::translate("MainWindow", "Hypertension", nullptr));
        actionThroat->setText(QCoreApplication::translate("MainWindow", "Throat", nullptr));
        actionDiarrhea->setText(QCoreApplication::translate("MainWindow", "Diarrhea", nullptr));
        actionMuscles->setText(QCoreApplication::translate("MainWindow", "Muscles", nullptr));
        actionCough->setText(QCoreApplication::translate("MainWindow", "Cough", nullptr));
        actionKidneys->setText(QCoreApplication::translate("MainWindow", "Kidneys", nullptr));
        actionBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        actionTrauma->setText(QCoreApplication::translate("MainWindow", "Trauma", nullptr));
        actionAsphyxia->setText(QCoreApplication::translate("MainWindow", "Asphyxia", nullptr));
        action1_0_9_9HZ->setText(QCoreApplication::translate("MainWindow", "1,0-9,9HZ", nullptr));
        action10_Hz->setText(QCoreApplication::translate("MainWindow", "10 Hz", nullptr));
        action20_HZ->setText(QCoreApplication::translate("MainWindow", "20 Hz", nullptr));
        action60_Hz->setText(QCoreApplication::translate("MainWindow", "60 Hz", nullptr));
        action77_Hz->setText(QCoreApplication::translate("MainWindow", "77 Hz", nullptr));
        action125_Hz->setText(QCoreApplication::translate("MainWindow", "125 Hz", nullptr));
        action140_Hz->setText(QCoreApplication::translate("MainWindow", "140 Hz", nullptr));
        action200_Hz->setText(QCoreApplication::translate("MainWindow", "200 Hz", nullptr));
        action7710->setText(QCoreApplication::translate("MainWindow", "7710", nullptr));
        action7720->setText(QCoreApplication::translate("MainWindow", "7720", nullptr));
        action77AM->setText(QCoreApplication::translate("MainWindow", "77AM", nullptr));
        actionDisable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        actionUp_to_year_1_year->setText(QCoreApplication::translate("MainWindow", "Up to 1 year", nullptr));
        action1_3_Years->setText(QCoreApplication::translate("MainWindow", "1-3 Years", nullptr));
        action4_7_Years->setText(QCoreApplication::translate("MainWindow", "4-7 Years", nullptr));
        action7_12_Years->setText(QCoreApplication::translate("MainWindow", "7-12 Years", nullptr));
        actionGeneral->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        actionSound_cont->setText(QCoreApplication::translate("MainWindow", "Sound cont.", nullptr));
        actionSOund_But->setText(QCoreApplication::translate("MainWindow", "Sound But.", nullptr));
        actionBrightness->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        actionEconomy->setText(QCoreApplication::translate("MainWindow", "Economy", nullptr));
        actionRecording->setText(QCoreApplication::translate("MainWindow", "Recording", nullptr));
        actionClock->setText(QCoreApplication::translate("MainWindow", "Clock", nullptr));
        actionTurquoise->setText(QCoreApplication::translate("MainWindow", "Turquoise", nullptr));
        actionWinter->setText(QCoreApplication::translate("MainWindow", "Winter", nullptr));
        actionBrozne->setText(QCoreApplication::translate("MainWindow", "Bronze", nullptr));
        actionNight->setText(QCoreApplication::translate("MainWindow", "Night", nullptr));
        actionOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        actionSingly->setText(QCoreApplication::translate("MainWindow", "Singly", nullptr));
        actionDaily->setText(QCoreApplication::translate("MainWindow", "Daily", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        actionFrench->setText(QCoreApplication::translate("MainWindow", "French", nullptr));
        actionRussian->setText(QCoreApplication::translate("MainWindow", "Russian", nullptr));
        actionItalian->setText(QCoreApplication::translate("MainWindow", "Italian", nullptr));
        actionSpanish->setText(QCoreApplication::translate("MainWindow", "Spanish", nullptr));
        actionDeutsch->setText(QCoreApplication::translate("MainWindow", "Deutsch", nullptr));
        actionPrograms_2->setText(QCoreApplication::translate("MainWindow", "Programs", nullptr));
        actionFrequency_2->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        actionSettings_2->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionChildren_2->setText(QCoreApplication::translate("MainWindow", "Children", nullptr));
        actionMED_2->setText(QCoreApplication::translate("MainWindow", "MED", nullptr));
        actionScreening->setText(QCoreApplication::translate("MainWindow", "Screening", nullptr));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "MCT", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "MAIN MENU", nullptr));
        batteryIndicator->setText(QCoreApplication::translate("MainWindow", "Battery: 100", nullptr));
        clockIndicator->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));

        const bool __sortingEnabled = list_2->isSortingEnabled();
        list_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = list_2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Allergy", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = list_2->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Pain", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = list_2->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Int. Pain", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = list_2->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Bloating", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = list_2->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Dystonia", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = list_2->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Gyn. pain", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = list_2->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "Gynecology", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = list_2->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "Hypertension", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = list_2->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainWindow", "Hyptonia", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = list_2->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainWindow", "Head", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = list_2->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("MainWindow", "Throat", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = list_2->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("MainWindow", "Diarrhea", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = list_2->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("MainWindow", "Abd. pain", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = list_2->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("MainWindow", "Constipation", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = list_2->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("MainWindow", "Muscles", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = list_2->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("MainWindow", "Cold", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = list_2->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("MainWindow", "Potency", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = list_2->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("MainWindow", "Cough", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = list_2->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("MainWindow", "Kidnerys", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = list_2->item(19);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = list_2->item(20);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("MainWindow", "Joints", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = list_2->item(21);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("MainWindow", "Nausea", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = list_2->item(22);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("MainWindow", "Trauma", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = list_2->item(23);
        ___qlistwidgetitem23->setText(QCoreApplication::translate("MainWindow", "Ashphyxia", nullptr));
        list_2->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = list_3->isSortingEnabled();
        list_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem24 = list_3->item(0);
        ___qlistwidgetitem24->setText(QCoreApplication::translate("MainWindow", "1-0 - 9,9 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = list_3->item(1);
        ___qlistwidgetitem25->setText(QCoreApplication::translate("MainWindow", "10 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = list_3->item(2);
        ___qlistwidgetitem26->setText(QCoreApplication::translate("MainWindow", "20 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem27 = list_3->item(3);
        ___qlistwidgetitem27->setText(QCoreApplication::translate("MainWindow", "60 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem28 = list_3->item(4);
        ___qlistwidgetitem28->setText(QCoreApplication::translate("MainWindow", " 77 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem29 = list_3->item(5);
        ___qlistwidgetitem29->setText(QCoreApplication::translate("MainWindow", "125 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem30 = list_3->item(6);
        ___qlistwidgetitem30->setText(QCoreApplication::translate("MainWindow", "140 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem31 = list_3->item(7);
        ___qlistwidgetitem31->setText(QCoreApplication::translate("MainWindow", "200 Hz", nullptr));
        QListWidgetItem *___qlistwidgetitem32 = list_3->item(8);
        ___qlistwidgetitem32->setText(QCoreApplication::translate("MainWindow", "<<7710>>", nullptr));
        QListWidgetItem *___qlistwidgetitem33 = list_3->item(9);
        ___qlistwidgetitem33->setText(QCoreApplication::translate("MainWindow", "<<7720>>", nullptr));
        QListWidgetItem *___qlistwidgetitem34 = list_3->item(10);
        ___qlistwidgetitem34->setText(QCoreApplication::translate("MainWindow", "<<77AM>>", nullptr));
        list_3->setSortingEnabled(__sortingEnabled1);


        const bool __sortingEnabled2 = list_6->isSortingEnabled();
        list_6->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem35 = list_6->item(0);
        ___qlistwidgetitem35->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        QListWidgetItem *___qlistwidgetitem36 = list_6->item(1);
        ___qlistwidgetitem36->setText(QCoreApplication::translate("MainWindow", "Up to 1 Year", nullptr));
        QListWidgetItem *___qlistwidgetitem37 = list_6->item(2);
        ___qlistwidgetitem37->setText(QCoreApplication::translate("MainWindow", "1-3 Years", nullptr));
        QListWidgetItem *___qlistwidgetitem38 = list_6->item(3);
        ___qlistwidgetitem38->setText(QCoreApplication::translate("MainWindow", "4-7 Years", nullptr));
        QListWidgetItem *___qlistwidgetitem39 = list_6->item(4);
        ___qlistwidgetitem39->setText(QCoreApplication::translate("MainWindow", "7-12 Years", nullptr));
        list_6->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = list_7->isSortingEnabled();
        list_7->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem40 = list_7->item(0);
        ___qlistwidgetitem40->setText(QCoreApplication::translate("MainWindow", "Economy", nullptr));
        list_7->setSortingEnabled(__sortingEnabled3);

        label_4->setText(QCoreApplication::translate("MainWindow", "TIMER  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
