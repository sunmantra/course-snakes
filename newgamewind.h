#ifndef NEWGAMEWIND_H
#define NEWGAMEWIND_H

#include <QWidget>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QTimer>
#include <QShortcut>
#include <QVector>//точки змеи
#include <QKeyEvent>
#include <QDebug>
#include <QPoint>
#include <QMetaEnum>

#include <author.h>
#include <helpwind.h>
#include <outnext.h>
#include <statwindow.h>
#include <snakes.h>


namespace Ui {
  class Newgamewind;
}
/**
 * @brief The Newgamewind class - Игра
 * реализация игрового процесса, окно
 */
class Newgamewind : public QMainWindow
{
  Q_OBJECT

public:
  explicit Newgamewind( QMainWindow *parent = nullptr);
  ~Newgamewind();

private slots:
  void on_actionHelp_triggered();

  void on_actionStatistics_triggered();

  void on_actionExit_triggered();
//----------------------------------------------------

  void initGame();

  void doDrawing();




private:
  Ui::Newgamewind *ui;
  HelpWind *hwind;
  StatWindow *statwind;
  Author *auwind;
  QGraphicsScene *scene;//графическая сцена
  snakes *snak;
  static const int DELAY = 200;//скорость змейки
  QVector<QPoint> dots;
  int timerId;//таймер перемещения
  bool m_inGame;//индикатор- в игре или нет
  enum Directions{
    left,right,up,down
  };

  Directions dir;

protected:
  void timerEvent(QTimerEvent*) override;   //обработчик таймера
  void keyPressEvent(QKeyEvent *) override; //нажатия клавиш
  void paintEvent(QPaintEvent *) override;  //отрисовка
};

#endif // NEWGAMEWIND_H
