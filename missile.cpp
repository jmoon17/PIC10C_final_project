#include "missile.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "target.h"

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
    //if missile hits the target, destroy both
    QList<QGraphicsItem *> hit = collidingItems();
    for(int i=0; i <hit.size(); i++)
    {
        if(typeid(*(hit[i])) == typeid(Target)){
            scene()->removeItem(hit[i]);    //remove the target first
            scene()->removeItem(this);      //then remove missile

            //delete address of both items
            delete hit[i];
            delete this[i];
        }
    }

    //move missile upwards
    setPos(x(),y()-10);
    if(pos().y()+rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
