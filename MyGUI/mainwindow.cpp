#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    hzVal = 1;
    ui->setupUi(this);
    ui->label_2->setText(QString::number(hzVal));
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QString hzVal = QString::number(ui->horizontalSlider->value());
    ui->label->setText("Sending " + QString::number(hzVal) + " pulses");
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    hzVal = value * 1000 + 200;
    ui->label_2->setText(QString::number(hzVal));
}
