#include "retro_shooter.h"
#include <QTimer>
#include "plane.h"
#include <QGraphicsView>
#include "target.h"
#include <QGraphicsTextItem>
#include <QFont>


RetroShooter::RetroShooter(QWidget *parent)
{
    //create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900, 700);  //make the scene 900x700
    setScene(scene);

    //forbid the scroll bar
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,700);

    //create a new plane for player
    plane = new Plane();
    //plane->setRect(0,0,100,100);    //set the rectangle with width and length of 100
    //set initial position of plane
    plane->setPos(500,600);

    //make the plane focusable
    plane->setFlag(QGraphicsItem::ItemIsFocusable);
    plane->setFocus();
    //add plane to the scene
    scene->addItem(plane);

    //create score
    score = new Score();
    scene->addItem(score);

    //create health
    health = new Health();
    health->setPos(health->x(),health->y()+30);
    scene->addItem(health);

    //generate target
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),plane,SLOT(generate()));
    timer->start(2500);

    show();
}
