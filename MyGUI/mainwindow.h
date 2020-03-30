#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QListWidgetItem>
#include "battery.h"

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
    void on_Find_Device_clicked();

    void on_Bluetooth_On_clicked();

    void on_Bluetoot_Off_clicked();

    void deviceDiscovered(const QBluetoothDeviceInfo &device);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_batteryTimer_activated();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QBluetoothDeviceDiscoveryAgent *disc = new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
    QString string;
    QTimer *batteryTimer;
    int counter;
    Battery *battery;
};
#endif // MAINWINDOW_H

//testing 123
