#ifndef DBSETTINGSWINDOW_H
#define DBSETTINGSWINDOW_H

#include <QDialog>

namespace Ui {
class DBSettingsWindow;
}

class DBSettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DBSettingsWindow(QWidget *parent = nullptr);
    ~DBSettingsWindow();

private:
    Ui::DBSettingsWindow *ui;
};

#endif // DBSETTINGSWINDOW_H
