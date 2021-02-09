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
/**
 * @brief snakes::paint - отвечает за отрисовку питона
 * @param painter
 * @param option
 * @param widget
 */
void snakes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QPolygon polygon;   // Используем класс полигона, чтобы отрисовать
        // Помещаем координаты точек в полигональную модель
        polygon << QPoint(-10,-10)<< QPoint(-10,10) << QPoint(10,10) <<QPoint(10,-10);
        painter->setBrush(Qt::green);     // Устанавливаем кисть, которой будем отрисовывать объект
        painter->drawPolygon(polygon);  // Рисуем по полигональной модели
        Q_UNUSED(option);
        Q_UNUSED(widget);
}





