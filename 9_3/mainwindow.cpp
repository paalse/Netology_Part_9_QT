#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settingsWindow = new DBSettingsWindow(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete settingsWindow;
}

void MainWindow::on_actionSettings_triggered()
{
    settingsWindow->show();
}

