#ifndef RETRO_SHOOTER_H
#define RETRO_SHOOTER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "plane.h"
#include "score.h"
#include "health.h"

class RetroShooter: public QGraphicsView
{
public:
    RetroShooter(QWidget *parent = 0);

    QGraphicsScene *scene;
    Plane *plane;
    Score *score;
    Health *health;

};

#endif // RETRO_SHOOTER_H
