#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QListWidgetItem>
#include <QtBluetooth>
#include <QDebug>
#include <QStack>
#include <QSlider>

#include <iostream>
#include <stack>
#include <string>

#include "mctclock.h"
#include "battery.h"
#include "ui_mainwindow.h"
#include "children.h"
#include "frequency.h"
#include "med.h"
#include "programs.h"
#include "screening.h"
#include "settings.h"
#include "denaslistitem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Battery* getBattery();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_pushButton_clicked();
    void on_clockTimer_activated();
    void on_batteryTimer_activated();
    void on_pulseTimer_activated();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_freq_adjusted();
    // bluetooth related slots
    void on_Find_Device_clicked();
    void on_Bluetooth_On_clicked();
    void on_Bluetoot_Off_clicked();
    void deviceDiscovered(const QBluetoothDeviceInfo &device);
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();

    void on_list_7_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    int counter;
    int pulseCounter;
    int therapyCounter;
    int curFreq;
    MCTClock *mctClock;
    Battery *battery;
    QWidget *currentWidget;
    stack<QWidget*> history;
    QLCDNumber *currentCountdown;
    string batteryPrompt;

    // bluetooth related member variables
    QBluetoothDeviceDiscoveryAgent *disc = new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
    QString string;
    QTimer *batteryTimer;
    QTimer *clockTimer;
    QTimer *pulseTimer;

    void mainListSetup();
    void updateScreen(QWidget*);
    void updateScreen(QWidget*, int, int, int);
    void closePotentialTherapy();
};
#endif // MAINWINDOW_H
