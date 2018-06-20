#ifndef PLANE_H
#define PLANE_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>
#include <QGraphicsItem>

class Plane: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Plane(QGraphicsItem *parent =0);
    void keyPressEvent(QKeyEvent *event);
public slots:
    void generate();

};

#endif // PLANE_H
