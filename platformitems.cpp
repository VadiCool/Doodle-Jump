#include "platformitems.h"

Spring::Spring(QGraphicsItem* parent) : QGraphicsPixmapItem(parent) {
    setPixmap(QPixmap("://Spring3.png").scaled(QSize(50, 25)));
}

Rocket::Rocket(QGraphicsItem *parent)
{
    setPixmap(QPixmap("://Rocket2.png").scaled((QSize(50,90))));
}
