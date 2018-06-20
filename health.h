#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsItem>

class Health: public QGraphicsTextItem
{
public:
    Health(QGraphicsItem *parent = 0);
    void drop();
    int get_health();
private:
    int health;

};

#endif // HEALTH_H
