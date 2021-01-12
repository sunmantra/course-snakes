#include "snakes.h"
#include <QPainter>
#include <QTime>

snakes::snakes() :   QGraphicsItem()
{

}
snakes::~snakes(){

}

QRectF snakes::boundingRect() const
{
   return QRectF(20,80,700,450);// Ограничиваем область, в которой лежит питон
}

void snakes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QPolygon polygon;   // Используем класс полигона, чтобы отрисовать треугольник
        // Помещаем координаты точек в полигональную модель
        polygon << QPoint(-10,-10)<< QPoint(-10,10) << QPoint(10,10) <<QPoint(10,-10);
        painter->setBrush(Qt::green);     // Устанавливаем кисть, которой будем отрисовывать объект
        painter->drawPolygon(polygon);  // Рисуем по полигональной модели
        Q_UNUSED(option);
        Q_UNUSED(widget);
}





