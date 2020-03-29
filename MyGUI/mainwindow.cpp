#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtBluetooth>
#include <QDebug>
#include "children.h"
#include "frequency.h"
#include "med.h"
#include "programs.h"
#include "screening.h"
#include "settings.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // this is the ui setup
    ui->setupUi(this);
    ui->listWidget->hide();
    connect(disc, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    disc->start();

    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);

    // timer setup
    ui->lcdNumber->display(30);
    qDebug() << ui->lcdNumber->value();
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
    timer->start(1000);
  }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MyTimerSlot(){
    if(ui->lcdNumber->value() > 0){
        ui->lcdNumber->display(ui->lcdNumber->value() - 1);
    }
}

void MainWindow::on_Find_Device_clicked()
{
    ui->listWidget->show();
    ui->listWidget->clear();
    disc->stop();
    disc->start();
}

void MainWindow::on_Bluetooth_On_clicked()
{
    socket->write("ON");
}

void MainWindow::on_Bluetoot_Off_clicked()
{
    socket->write("OFF");
}

void MainWindow::deviceDiscovered(const QBluetoothDeviceInfo &device)
{
    ui->listWidget->addItem(device.address().toString());
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    string = item->text();
    ui->listWidget->addItem(string);
    static const QString serviceUuid(QStringLiteral("00001101-0000-1000-8000-00805F9B34FB"));
    socket->connectToService(QBluetoothAddress(string), QBluetoothUuid(serviceUuid), QIODevice::ReadWrite);
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->label->text() == "Status: ON"){
        ui->label->setText("Status: OFF");
    }else {
       ui->label->setText("Status: ON");
    }
}
