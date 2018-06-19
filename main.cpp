#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();

    QGraphicsRectItem *plane = new QGraphicsRectItem;
    plane->setRect(0,0,100,100);    //set the rectangle with width and length of 100

    scene->addItem(plane);

    QGraphicsView *view = new QGraphicsView(scene);
    view->show();   //display the rectangle(plane)



    return a.exec();
}
