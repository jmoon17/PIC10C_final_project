#include "plane.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "missile.h"


void Plane::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        if(pos().x() > 0)
        setPos(x()-20,y());
    }
    else if(event->key() == Qt::Key_Right){
        if(pos().x() + 100 < 800)
        setPos(x()+20,y());
    }

    else if(event->key() == Qt::Key_Space){
        Missile *missile = new Missile();
        missile->setPos(x(),y());
        scene()->addItem(missile);
    }
}
