#ifndef ACTOR_H
#define ACTOR_H
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QWidget>

class Actor
{
public:
    Actor();
    Actor(QString pixmapPath, int x, int y);

    void setLocation(void);

    QPixmap *getPixmap() const;
    void setPixmap(QPixmap *value);

    QGraphicsPixmapItem *getPixmapItem() const;
    void setPixmapItem(QGraphicsPixmapItem *value);

    int getXPos() const;
    void setXPos(int value);

    int getYPos() const;
    void setYPos(int value);

private:
    QPixmap *pixmap;
    QGraphicsPixmapItem *pixmapItem;
    int xPos;
    int yPos;
};

#endif // ACTOR_H