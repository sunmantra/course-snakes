#ifndef SNAKES_H
#define SNAKES_H

#include <QGraphicsItem>
#include <QPainter>
#include <windows.h>
/**
 * @brief The snakes class - питон пользователя
 */
class snakes : public QGraphicsItem
{
public:
  snakes();
  ~snakes();

signals:

// Слот, который отвечает за обработку перемещения треугольника

protected:
    QRectF boundingRect() const;    /* Определяем виртуальный метод,
                                     * который возвращает область, в которой
                                     * находится питон */
    // Определяем метод для отрисовки
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};

#endif // SNAKES_H
