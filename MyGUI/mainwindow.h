#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QListWidgetItem>

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

private:
    Ui::MainWindow *ui;
    QBluetoothDeviceDiscoveryAgent *disc = new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
    QString string;
};
#endif // MAINWINDOW_H
