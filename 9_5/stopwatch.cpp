#include "stopwatch.h"

Stopwatch::Stopwatch(QObject *parent): QObject{parent}{
    timer = new QTimer(this);
    interval = 0.1;
    time = 0;
    timeCircle = 0;
    cntCircle = 1;

    connect(timer, &QTimer::timeout, this, &Stopwatch::slotUpdateTime);
};

void Stopwatch::start(){
    timer->start(interval*1000);
};

void Stopwatch::stop() {
    timer->stop();
};

void Stopwatch::reset(){
    time = 0;
    timeCircle = 0;
    cntCircle = 1;
    emit sigSendTime(time);
};

void Stopwatch::updateCircle(){
    cntCircle++;
    timeCircle = 0;
};

std::pair<int,double> Stopwatch::getCircle(){
    return std::pair<int,double>(cntCircle,timeCircle);
}

void Stopwatch::slotUpdateTime(){
    time += interval;
    timeCircle +=interval;
    emit sigSendTime(time);
}
