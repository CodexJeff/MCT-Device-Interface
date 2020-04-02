#include "mainwindow.h"
#include <iostream>

#include <cstdlib>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


     mctClock = new MCTClock();
    clockTimer = new QTimer(this);
    connect(clockTimer, SIGNAL(timeout()), this, SLOT(on_clockTimer_activated()));
    clockTimer->start(1000);



    battery = new Battery();
    batteryTimer = new QTimer(this);
    batteryPrompt = "Battery: ";
    connect(batteryTimer, SIGNAL(timeout()), this, SLOT(on_batteryTimer_activated()));
    batteryTimer->start(1000);

    ui->setupUi(this);
    setFixedSize(349, 663);

    //ui->listWidget->hide(); // what is listWidget?
    ui->medWidget->hide();
    ui->list_2->hide();
    ui->list_3->hide();
    ui->list_4->hide();
    ui->list_5->hide();
    ui->list_6->hide();
    ui->list_7->hide();


    counter = -1;
    currentList = ui->list;
    mainListSetup();

    // bluetooth related setup
    connect(disc, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    disc->start();
    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
  }

MainWindow::~MainWindow()
{
    delete ui;
}

Battery* MainWindow::getBattery(){return battery;}

void MainWindow::mainListSetup(){

    DenasListItem *program = new DenasListItem;
      program->setText("PROGRAMS");
      program->setTextAlignment(Qt::AlignHCenter);
      program->setSizeHint(QSize(0, 35));
      program->setAssocList(ui->list_2);
      ui->list->insertItem(0, program);

    DenasListItem *frequency = new DenasListItem;
      frequency->setText("FREQUENCY");
      frequency->setTextAlignment(Qt::AlignHCenter);
      frequency->setSizeHint(QSize(0, 35));
      frequency->setAssocList(ui->list_3);
      ui->list->insertItem(1, frequency);

    DenasListItem *med = new DenasListItem;
      med->setText("MED");
      med->setTextAlignment(Qt::AlignHCenter);
      med->setSizeHint(QSize(0, 35));
      med->setAssocList(ui->list_4);
      med->setFlag("economy");
      ui->list->insertItem(2, med);

    DenasListItem *screening = new DenasListItem;
      screening->setText("SCREENING");
      screening->setTextAlignment(Qt::AlignHCenter);
      screening->setAssocList(ui->list_5);
      screening->setSizeHint(QSize(0, 35));
      ui->list->insertItem(3, screening);

    DenasListItem *children = new DenasListItem;
      children->setText("CHILDREN");
      children->setTextAlignment(Qt::AlignHCenter);
      children->setSizeHint(QSize(0, 35));
      children->setAssocList(ui->list_6);
      ui->list->insertItem(4, children);

    DenasListItem *settings = new DenasListItem;
      settings->setText("SETTINGS");
      settings->setTextAlignment(Qt::AlignHCenter);
      settings->setSizeHint(QSize(0, 35));
      settings->setAssocList(ui->list_7);
      ui->list->insertItem(5, settings);
}

void MainWindow::on_batteryTimer_activated(){
    if(battery->drain() == 0) QCoreApplication::quit();
    ui->batteryIndicator->setText(QString::fromStdString(batteryPrompt) + QString::number(battery->batteryStatus()));
}

void MainWindow::on_clockTimer_activated(){
ui->clockIndicator->setText(mctClock->getTime());

}


void MainWindow::on_pushButton_clicked(){



    DenasListItem *dli = ((DenasListItem*)(ui->list->currentItem()));

    if(dli->getFlag().compare("economy") == 0){
        batteryPrompt = "ECO " + batteryPrompt;
    }else{
        if(dli->getAssocList() != NULL){
            history.push(currentList);
            currentList->hide();
            currentList = dli->getAssocList();
            counter = -1;
            currentList->show();
        }
    }
    if(dli->text().compare("MED") == 0){
        ui->medWidget->show();
        ui->label_3->setText("MED");
    }else if(dli->text().compare("SCREENING") == 0){
        ui->medWidget->show();
        ui->label_3->setText("SCREENING");
    }
}

void MainWindow::on_pushButton_3_clicked(){
    if (!(counter > currentList->count() - 2)) counter ++;
    currentList->setCurrentItem(currentList->item(counter));
}

void MainWindow::on_pushButton_2_clicked(){
    if (counter > 0) counter --;
    currentList->setCurrentItem(currentList->item(counter));
}
//back button
void MainWindow::on_pushButton_7_clicked(){

    if(!history.empty()){
        currentList->hide();
        currentList = history.top();
        history.pop();
        counter = -1;
        currentList->show();


    }
    else if (ui->label_3->text().compare("MED") == 0){
        ui->medWidget->hide();
        ui->list->show();


    }else if (ui->label_3->text().compare("SCREENING") == 0){
        ui->medWidget->hide();
        ui->list->show();


    }

}
//menu button
void MainWindow::on_pushButton_8_clicked()
{
    if(!history.empty()){

        currentList->hide();
        currentList = ui->list;
        history.pop();
        counter = -1;
        currentList->show();
        qDebug()<< "test";
    } else if (ui->label_3->text().compare("MED") == 0){
        ui->medWidget->hide();
        ui->list->show();


    }else if (ui->label_3->text().compare("SCREENING") == 0){
        ui->medWidget->hide();
        ui->list->show();


    }


}

// bluetooth function definitions

void MainWindow::on_Find_Device_clicked(){
    ui->listWidget->show();
    ui->listWidget->clear();
    disc->stop();
    disc->start();
}

void MainWindow::on_Bluetooth_On_clicked() {socket->write("ON");}

void MainWindow::on_Bluetoot_Off_clicked() {socket->write("OFF");}

void MainWindow::deviceDiscovered(const QBluetoothDeviceInfo &device){
    ui->listWidget->addItem(device.address().toString());
    ui->listWidget->setCurrentRow(1);
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item){
    string = item->text();
    ui->listWidget->addItem(string);
    static const QString serviceUuid(QStringLiteral("00001101-0000-1000-8000-00805F9B34FB"));
    socket->connectToService(QBluetoothAddress(string), QBluetoothUuid(serviceUuid), QIODevice::ReadWrite);
}




