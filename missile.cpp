#include "missile.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "target.h"
#include "retro_shooter.h"
#include <QGraphicsItem>


extern RetroShooter *retroShooter; //make retroShooter as Global object

Missile::Missile(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //draw the missile
    //setRect(0,0,15,50);

    //draw graphics
    setPixmap(QPixmap(":/images/missile.png"));

    //connect
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));   //every timeout, the move function is called

    timer->start(50);       //every 50milleseconds, missile will move
}

void Missile::move()
{
    //if missile hits the target, destroy both
    QList<QGraphicsItem *> hitItems = collidingItems();
    for(int i=0; i <hitItems.size(); i++)
    {
        if(typeid(*(hitItems[i])) == typeid(Target)){
            retroShooter->score->addScore();
            scene()->removeItem(hitItems[i]);    //remove the target first
            scene()->removeItem(this);      //then remove missile

            //delete both items from heap
            delete hitItems[i];
            delete this;
            return;
        }
    }

    //move missile upwards
    setPos(x(),y()-10);
    //destroy missile if it goes out of the screen
    if(pos().y()< 0){
        scene()->removeItem(this);
        delete this;
    }
}
