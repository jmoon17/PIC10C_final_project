#include "missile.h"
#include <QTimer>

Missile::Missile()
{
    //draw the missile
    setRect(0,0,15,50);

    //connect
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));   //every timeout, the move function is called

    timer->start(50);       //every 50milleseconds, missile will move
}

void Missile::move()
{
    //move missile upwards
    setPos(x(),y()-10);
    if(pos().y() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
