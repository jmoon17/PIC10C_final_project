#ifndef PLANE_H
#define PLANE_H

#include <QGraphicsRectItem>
#include <QKeyEvent>

class Plane: public QGraphicsRectItem {
public:
    //Plane();
    void keyPressEvent(QKeyEvent *event);

};

#endif // PLANE_H
