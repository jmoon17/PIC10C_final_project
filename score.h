#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem
{
  public:
    Score(QGraphicsItem *parent = 0);

    void addScore();

    //accessor
    int get_score();

private:
    int score;

};
#endif // SCORE_H
