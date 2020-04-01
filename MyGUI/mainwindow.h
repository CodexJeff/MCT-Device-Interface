#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QListWidgetItem>
#include <QtBluetooth>
#include <QDebug>
#include <QStack>
#include <stack>


#include "battery.h"
#include "ui_mainwindow.h"
#include "children.h"
#include "frequency.h"
#include "med.h"
#include "programs.h"
#include "screening.h"
#include "settings.h"
#include "denaslistitem.h"

using namespace std;

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
    void on_batteryTimer_activated();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    // bluetooth related slots
    void on_Find_Device_clicked();
    void on_Bluetooth_On_clicked();
    void on_Bluetoot_Off_clicked();
    void deviceDiscovered(const QBluetoothDeviceInfo &device);
    void on_pushButton_7_clicked();


    void on_pushButton_8_clicked();


    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    int counter;

    Battery *battery;
    QListWidget *currentList;
    stack<QListWidget*> history;
    stack<QWidget*> historyWid;
    QListWidget *currentWidget;

    string batteryPrompt;
    // bluetooth related member variables
    QBluetoothDeviceDiscoveryAgent *disc = new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
    QString string;
    QTimer *batteryTimer;

    void mainListSetup();
};
#endif // MAINWINDOW_H
