#ifndef TARGET_H
#define TARGET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Target: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //macro that handles signal
public:
    Target(QGraphicsItem *parent = 0);
public slots:
    void move();

};

#endif // TARGET_H
