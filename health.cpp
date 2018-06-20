#include "health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){
    //initialize the health as 3
    health = 3;

    setPlainText(QString("Health: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",15));
}

void Health::drop(){
    health--;
    setPlainText(QString("Health: ") + QString::number(health));
}


int Health::get_health(){
    return health;
}
