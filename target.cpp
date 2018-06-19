#include "target.h"
#include <QTimer>
#include <QGraphicsScene>

Target::Target()
{
    //same size as plane
    setRect(0,0,100,100);

    //connect
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));

    timer->start(50);
}

void Target::move()
{
    //move target down
    setPos(x(),y()+5);
    if(pos().y()+rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
