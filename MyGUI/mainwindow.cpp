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

    battery = new Battery();

    // this is the ui setup
    ui->setupUi(this);
    ui->listWidget->hide();
    connect(disc, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    disc->start();

    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);

    // timer setup
    batteryTimer = new QTimer(this);
    connect(batteryTimer, SIGNAL(timeout()), this, SLOT(on_batteryTimer_activated()));
    batteryTimer->start(1000);

    // testing hide property
    //ui->testButton->hide();
    setFixedSize(349, 663);

    // trying to add button to widget
    //QPushButton *btn = new QPushButton("Tes Button", ui->widget);
    counter = -1;
    //ui->list->

    QListWidgetItem *program = new QListWidgetItem;
      program->setText("Programs");
      program->setTextAlignment(Qt::AlignHCenter);
      program->setSizeHint(QSize(0, 35));
      ui->list->insertItem(0, program);

    QListWidgetItem *frequency = new QListWidgetItem;
      frequency->setText("Frequency");
      frequency->setTextAlignment(Qt::AlignHCenter);
      frequency->setSizeHint(QSize(0, 35));
      ui->list->insertItem(1, frequency);

    QListWidgetItem *med = new QListWidgetItem;
      med->setText("Med");
      med->setTextAlignment(Qt::AlignHCenter);
      med->setSizeHint(QSize(0, 35));
      ui->list->insertItem(2, med);

    QListWidgetItem *screening = new QListWidgetItem;
      screening->setText("Screening");
      screening->setTextAlignment(Qt::AlignHCenter);
      screening->setSizeHint(QSize(0, 35));
      ui->list->insertItem(2, screening);

    QListWidgetItem *children = new QListWidgetItem;
      children->setText("Children");
      children->setTextAlignment(Qt::AlignHCenter);
      children->setSizeHint(QSize(0, 35));
      ui->list->insertItem(2, children);

    QListWidgetItem *settings = new QListWidgetItem;
      settings->setText("Settings");
      settings->setTextAlignment(Qt::AlignHCenter);
      settings->setSizeHint(QSize(0, 35));
      ui->list->insertItem(2, settings);
    //ui->list->addItem()
  }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_batteryTimer_activated(){
    if(battery->drain() == 0) QCoreApplication::quit();
    ui->batteryIndicator->setText("Battery: " + QString::number(battery->batteryStatus()));
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
    ui->listWidget->setCurrentRow(1);
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
//    if (ui->label->text() == "Status: ON"){
//        ui->label->setText("Status: OFF");
//    }else {
//       ui->label->setText("Status: ON");
//    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (!(counter > ui->list->count() - 2)){
        counter ++;
    }
    ui->list->setCurrentItem(ui->list->item(counter));
}

void MainWindow::on_pushButton_2_clicked()
{
    if (counter > 0){
        counter --;
    }
    ui->list->setCurrentItem(ui->list->item(counter));
}
