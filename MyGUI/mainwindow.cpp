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

    pulseCounter = 0;
    therapyCounter = 20*60;
    pulseTimer = new QTimer(this);
    connect(pulseTimer, SIGNAL(timeout()), this, SLOT(on_pulseTimer_activated()));

    battery = new Battery();
    batteryTimer = new QTimer(this);
    batteryPrompt = "Battery: ";
    connect(batteryTimer, SIGNAL(timeout()), this, SLOT(on_batteryTimer_activated()));
    batteryTimer->start(1000);

    ui->setupUi(this);
    setFixedSize(349, 663);

    //ui->listWidget->hide(); // what is listWidget?
    ui->allergy_widget->hide();
    ui->medWidget->hide();
    ui->list_2->hide();
    ui->list_3->hide();
    ui->list_4->hide();
    ui->list_5->hide();
    ui->list_6->hide();
    ui->list_7->hide();


    counter = -1;
    currentWidget = ui->list;
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

void MainWindow::on_pulseTimer_activated(){
    if(pulseCounter > 0){
        pulseCounter --;
        currentCountdown->display(pulseCounter);
    }else if(therapyCounter > 0){
        pulseCounter = 0;
        currentCountdown->display(therapyCounter);
        therapyCounter --;
        ui->label->setText("Therapy is now active");
    }else{
        therapyCounter = 0;
        pulseTimer->stop();
    }
}

void MainWindow::on_clockTimer_activated(){
    ui->clockIndicator->setText(mctClock->getTime());
}

void MainWindow::updateScreen(QWidget *w){
    history.push(currentWidget);
    currentWidget->hide();
    currentWidget = w;
    counter = -1;
    currentWidget->show();
}

void MainWindow::on_pushButton_clicked(){

    qDebug() << currentWidget->metaObject()->className();

    std::string cWClass = currentWidget->metaObject()->className();
    if(cWClass.compare("QListWidget") == 0){
        QListWidgetItem *item = ((QListWidget*)currentWidget)->currentItem();
        ui->label_3->setText(item->text());
        if(item->text().compare("PROGRAMS") == 0){
            updateScreen(ui->list_2);
        }else if(item->text().compare("SETTINGS") == 0){
            updateScreen(ui->list_7);
        }else if(item->text().compare("Allergy") == 0){
            updateScreen(ui->allergy_widget);
            ui->label->clear();
            qDebug() << "OMEGA LUL...... WARZONE IS A SHIT GAME";
            ui->label->setText("Place electrode at upper abdomen\n and 7th cervical vertebra area. You\n have 30 seconds before therapy begins.");

            currentCountdown = ui->lcdNumber_2;
            pulseCounter = 30;
            therapyCounter = 20*60;
            currentCountdown->display(pulseCounter);
            pulseTimer->start(1000);
        }
        else if(item->text().compare("Pain") == 0){
                    updateScreen(ui->allergy_widget);
                    ui->label->clear();
                    ui->label->setText("Place electrode at painful area.\n You have 30 seconds before therapy begins.");
                    currentCountdown = ui->lcdNumber_2;
                    pulseCounter = 30;
                    currentCountdown->display(pulseCounter);
                    pulseTimer->start(1000);
                }

        else if(item->text().compare("Int. Pain") == 0){
            updateScreen(ui->allergy_widget);
            ui->label->clear();
            ui->label->setText("Place electrode at intesnely painful area.\n You have 30 seconds before therapy begins.");
            currentCountdown = ui->lcdNumber_2;
            pulseCounter = 30;
            currentCountdown->display(pulseCounter);
            pulseTimer->start(1000);
        }else if(item->text().compare("Economy") == 0){
            item->setText("Economy is ON");
            batteryPrompt = "ECO " + batteryPrompt;
        }else if(item->text().compare("Economy is ON") == 0){
            item->setText("Economy is OFF");
        }else if(item->text().compare("Economy is OFF") == 0){
            item->setText("Economy is ON");
        }else if(item->text().compare("MED") == 0){
            updateScreen(ui->medWidget);
            ui->label_3->setText("MED");
            pulseCounter = 15;
            currentCountdown = ui->lcdNumber;
            ui->lcdNumber->display(pulseCounter);
            pulseTimer->start(1000);
        }else if(item->text().compare("SCREENING") == 0){
            updateScreen(ui->medWidget);
            currentCountdown = ui->lcdNumber;
            ui->label_3->setText("SCREENING");
            ui->lcdNumber->display(pulseCounter);
            pulseTimer->start(1000);
        }
        qDebug() << item->text();
    }else{

    }

    /*
    DenasListItem *dli = ((DenasListItem*)(ui->list->currentItem()));
    ui->label_3->setText(dli->text());

    if(dli->getFlag().compare("economy") == 0){
        batteryPrompt = "ECO " + batteryPrompt;
    }else{
        if(dli->getAssocList() != NULL){
            history.push(currentWidget);
            currentWidget->hide();
            currentWidget = dli->getAssocList();
            counter = -1;
            currentWidget->show();
        }
    }
    if(dli->text().compare("MED") == 0){
        ui->medWidget->show();
        ui->label_3->setText("MED");
        if(pulseCounter <= 0){ // make sure user cannot "spam" ok-button (would result in countdown being reset during countdown)
            ui->medWidget->show();
            ui->label_3->setText("MED");
            pulseCounter = 15;
            ui->lcdNumber->display(pulseCounter);
            pulseTimer->start(1000);
        }
    }else if(dli->text().compare("SCREENING") == 0){
        ui->medWidget->show();
        ui->label_3->setText("SCREENING");
    }
    */
}

void MainWindow::on_pushButton_3_clicked(){
    if (!(counter > ((QListWidget*)(currentWidget))->count() - 2)) counter ++;
    ((QListWidget*)(currentWidget))->setCurrentItem(((QListWidget*)(currentWidget))->item(counter));
}

void MainWindow::on_pushButton_2_clicked(){
    if (counter > 0) counter --;
    ((QListWidget*)(currentWidget))->setCurrentItem(((QListWidget*)(currentWidget))->item(counter));
}
//back button
void MainWindow::on_pushButton_7_clicked(){

    if(currentWidget == ui->allergy_widget){
        qDebug() << "Activated Pog";
        pulseTimer->stop();
        pulseCounter = 0;
        therapyCounter = 20*60;
    }
    if(history.top() == ui->list_2){
        ui->label_3->setText("PROGRAMS");
    }

    if(!history.empty()){
        currentWidget->hide();
        currentWidget = history.top();
        history.pop();
        counter = -1;
        currentWidget->show();
    }
    else if (ui->label_3->text().compare("MED") == 0){
        pulseTimer->stop();
        pulseCounter = 0;
        ui->medWidget->hide();
        ui->list->show();
    }else if (ui->label_3->text().compare("SCREENING") == 0){
        ui->medWidget->hide();
        ui->list->show();
    }

    if(history.empty()){
        ui->label_3->setText("MAIN MENU");
    }




}
//menu button
void MainWindow::on_pushButton_8_clicked()
{
    if(!history.empty()){

        currentWidget->hide();
        currentWidget = ui->list;
        history.pop();
        counter = -1;
        currentWidget->show();
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





void MainWindow::on_list_7_itemClicked(QListWidgetItem *item){
    if (item->text().compare("Economy") == 0){
        //item->setText("economyon");
            item->setText("Economy On");
            batteryPrompt = "ECO " + batteryPrompt;
    }
    else if (item->text().compare("Economy On") == 0){
        //item->setText("economyon");
            item->setText("Economy");
    }

}
