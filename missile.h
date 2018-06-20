#ifndef MISSILE_H
#define MISSILE_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>

class Missile: public QObject, public QGraphicsRectItem{
    Q_OBJECT //macro that handles signal
public:
    Missile(QGraphicsItem * parent=0);
public slots:
    void move();

};

#endif // MISSILE_H
