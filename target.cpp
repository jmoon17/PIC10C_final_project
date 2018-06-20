#include "target.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include "retro_shooter.h"
#include <QList>
#include "health.h"


extern RetroShooter *retroShooter; //make retroShooter as Global object

Target::Target(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent)
{
    //set random position of target
    int randNum = rand()%700;
    setPos(randNum, 0);

    //same size as plane
    setRect(0,0,100,100);

    //connect
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));

    timer->start(50);
}

void Target::move()
{
    //move target down
    setPos(x(),y()+5);
    //destroy target when it goes out of the screen
    if(pos().y() > 700){
        retroShooter->health->drop();
        scene()->removeItem(this);
        delete this;
    }
}
