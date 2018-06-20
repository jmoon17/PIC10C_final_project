#ifndef TARGET_H
#define TARGET_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>

class Target: public QObject, public QGraphicsRectItem{
    Q_OBJECT //macro that handles signal
public:
    Target(QGraphicsItem *parent = 0);
public slots:
    void move();

};

#endif // TARGET_H
