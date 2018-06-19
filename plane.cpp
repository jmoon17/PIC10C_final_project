#include "plane.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "missile.h"


void Plane::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        setPos(x()-20,y());
    }
    else if(event->key() == Qt::Key_Right){
        setPos(x()+20,y());
    }

    else if(event->key() == Qt::Key_Space){
        Missile *missile = new Missile();
        missile->setPos(x(),y());
        scene()->addItem(missile);
    }
}
