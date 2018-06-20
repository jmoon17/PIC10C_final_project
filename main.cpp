#include <QApplication>
#include "retro_shooter.h"

RetroShooter *retroShooter;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    retroShooter = new RetroShooter();
    retroShooter->show();

    return a.exec();
}
