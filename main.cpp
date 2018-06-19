#include <QApplication>
#include <QGraphicsScene>
#include "plane.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();

    Plane *plane = new Plane();
    plane->setRect(0,0,100,100);    //set the rectangle with width and length of 100

    scene->addItem(plane);

    plane->setFlag(QGraphicsItem::ItemIsFocusable);
    plane->setFocus();

    QGraphicsView *view = new QGraphicsView(scene);

    //forbid the scroll bar
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();   //display the rectangle(plane)
    view->setFixedSize(900,700);
    scene->setSceneRect(0,0,900,700);      //set scene same size as the view



    return a.exec();
}
