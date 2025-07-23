#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox->setTitle("Параметры");
    ui->radioButton->setText("Параметр 1");
    ui->radioButton->setChecked(true);
    ui->radioButton_2->setText("Параметр 2");
    ui->comboBox->addItem("Красный");
    ui->comboBox->addItem("Оранжевый");
    ui->comboBox->addItem("Желтый");
    ui->comboBox->addItem("Зеленый");
    ui->comboBox->addItem("Голубой");
    ui->comboBox->addItem("Синий");
    ui->comboBox->addItem("Фиолетовый");
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->pushButton->setText("ADD");
    ui->pushButton->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int val = ui->progressBar->value();

    if(val < 100) {
        val+=10;
        ui->progressBar->setValue(val);
    } else {
        ui->progressBar->setValue(0);
    }
}
