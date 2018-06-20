#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    score = 0;

    //print the score in text
    setPlainText(QString("Score: ")+ QString::number(score));

    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",15));


}

void Score::addScore()
{
    score++;
    //print the score in text
    setPlainText(QString("Score: ")+ QString::number(score));
}

int Score::get_score()
{
    return score;
}
