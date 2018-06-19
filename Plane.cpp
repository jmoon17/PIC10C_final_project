#include "Plane.h"
#include <QKeyEvent>

void Plane::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        setPos(x()-20,y());
    }
    else if(event->key() == Qt::Key_Right){
        setPos(x()+20,y());
    }
    else if(event->key() == Qt::Key_Up){
        setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Down){
        setPos(x(),y()+10);
    }
}