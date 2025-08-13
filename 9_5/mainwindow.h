#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stopwatch.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btStartStop_clicked();
    void slotUpdateTime(double time);

    void on_btReset_clicked();

    void on_btCircle_clicked();

private:
    Ui::MainWindow *ui;
    Stopwatch* stopwatch;
};
#endif // MAINWINDOW_H
