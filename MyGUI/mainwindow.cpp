#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtBluetooth>

//hi
//hi test
//I hate git
//I can wreck omar in cod
//Imagine GIT still being ass in 2020
//イタチ大好き
//One last time
// some body once told me the world....
//hello

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //parent->setStyleSheet("background-color:white");
    ui->listWidget->hide();
    connect(disc, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    disc->start();


    QGraphicsScene scene;
        QPixmap pixmap("/Users/omarsyed/MCT-Device-Interface/MyGui/temp.jpg");
        scene.addPixmap(pixmap);
        //ui->viewer->setScene(&scene);

        // add here
        ui->graphicsView->setScene(&scene);
        ui->graphicsView->show();


    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
  }


MainWindow::~MainWindow()
{
    delete ui;

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
