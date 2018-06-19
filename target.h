#ifndef TARGET_H
#define TARGET_H

#include <QGraphicsRectItem>
#include <QObject>

class Target: public QObject, public QGraphicsRectItem{
    Q_OBJECT //macro that handles signal
public:
    Target();
public slots:
    void move();

};

#endif // TARGET_H
