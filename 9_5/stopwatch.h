#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QObject>
#include <QTimer>

class Stopwatch : public QObject
{
    Q_OBJECT

private:
    QTimer* timer;
    double interval;
    double time;
    double timeCircle;
    int cntCircle;

public:
    explicit Stopwatch(QObject *parent = nullptr);
    void start();
    void stop();
    void reset();
    void updateCircle();
    std::pair<int,double> getCircle();

signals:
    void sigSendTime(double);

public slots:
    void slotUpdateTime();
};

#endif // STOPWATCH_H
