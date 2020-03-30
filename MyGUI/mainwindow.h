#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QListWidgetItem>
#include <QtBluetooth>
#include <QDebug>

#include <map>

#include "battery.h"
#include "ui_mainwindow.h"
#include "children.h"
#include "frequency.h"
#include "med.h"
#include "programs.h"
#include "screening.h"
#include "settings.h"

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

private:
    Ui::MainWindow *ui;
    map<QListWidgetItem*,QListWidget*> m;
    QBluetoothDeviceDiscoveryAgent *disc = new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
    QString string;
    QTimer *batteryTimer;
    int counter;
    Battery *battery;

    void mainListSetup();
};
#endif // MAINWINDOW_H
