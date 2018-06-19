#ifndef MISSILE_H
#define MISSILE_H

#include <QGraphicsRectItem>
#include <QObject>

class Missile: public QObject, public QGraphicsRectItem{
    Q_OBJECT //macro that handles signal
public:
    Missile();
public slots:
    void move();

};

#endif // MISSILE_H
