#ifndef PLANE_H
#define PLANE_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>

class Plane: public QObject, public QGraphicsRectItem {
    Q_OBJECT
public:
    //Plane();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void generate();

};

#endif // PLANE_H
