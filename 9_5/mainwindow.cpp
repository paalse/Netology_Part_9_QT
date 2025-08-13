#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btCircle->setEnabled(false);
    ui->lbTime->setText("0.0 sec");

    stopwatch = new Stopwatch(this);
    connect(stopwatch, &Stopwatch::sigSendTime,this, &MainWindow::slotUpdateTime);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btStartStop_clicked()
{
    if(ui->btStartStop->text() == "Start"){
        ui->btStartStop->setText("Stop");
        ui->btCircle->setEnabled(true);
        stopwatch->start();
    } else {
        ui->btStartStop->setText("Start");
        ui->btCircle->setEnabled(false);
        stopwatch->stop();
    }
}

void MainWindow::slotUpdateTime(double time)
{
    ui->lbTime->setText(QString("%1 sec").arg(time));
}

void MainWindow::on_btReset_clicked()
{
    stopwatch->reset();
    ui->tbCircle->clear();
}


void MainWindow::on_btCircle_clicked()
{
    auto lap=stopwatch->getCircle();
    stopwatch->updateCircle();
    ui->tbCircle->append(QString("Circle %1, time: %2 sec").arg(lap.first).arg(lap.second));
}

