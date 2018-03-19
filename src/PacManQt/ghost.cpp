#include "ghost.h"

Ghost::Ghost()
{
    /* */
}

Ghost::Ghost(QString pixmapPath, int x, int y)
{
    pixmap = new QPixmap(pixmapPath);
    pixmapItem = new QGraphicsPixmapItem(*pixmap);
    xPos = x;
    yPos = y;
    pixmapItem->setPos(xPos, yPos);
}

int Ghost::getDirection() const
{
    return direction;
}

void Ghost::setDirection(int value)
{
    direction = value;
}
