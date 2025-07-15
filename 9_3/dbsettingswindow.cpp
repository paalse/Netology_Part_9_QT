#include "dbsettingswindow.h"
#include "ui_dbsettingswindow.h"

DBSettingsWindow::DBSettingsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DBSettingsWindow)
{
    ui->setupUi(this);
}

DBSettingsWindow::~DBSettingsWindow()
{
    delete ui;
}
