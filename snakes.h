#ifndef SNAKES_H
#define SNAKES_H

#include <QGraphicsItem>
#include <QPainter>
#include <windows.h>
class snakes : public QGraphicsItem
{
public:
  snakes();
  ~snakes();

signals:

//public slots:
 //   void slotGameTimer(); // Слот, который отвечает за обработку перемещения треугольника

protected:
    QRectF boundingRect() const;    /* Определяем виртуальный метод,
                                     * который возвращает область, в которой
                                     * находится питон */
    // Определяем метод для отрисовки
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

//private:
 //   qreal angle;    // Угол поворота графического объекта
};

#endif // SNAKES_H
