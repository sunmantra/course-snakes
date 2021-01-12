#ifndef NEWGAMEWIND_H
#define NEWGAMEWIND_H

#include <QWidget>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QTimer>
#include <QShortcut>

#include <author.h>
#include <helpwind.h>
#include <outnext.h>
#include <statwindow.h>
#include <snakes.h>
#include <snakt.h>//go

namespace Ui {
  class Newgamewind;
}

class Newgamewind : public QMainWindow
{
  Q_OBJECT

public:
  explicit Newgamewind( QMainWindow *parent = nullptr);//isp
  ~Newgamewind();

private slots:
  void on_actionHelp_triggered();

  void on_actionStatistics_triggered();

  void on_actionExit_triggered();



private:
  Ui::Newgamewind *ui;
  HelpWind *hwind;
  StatWindow *statwind;
  Author *auwind;
  QGraphicsScene *scene;//графическая сцена
  snakes *snak;

 //snakes

};

#endif // NEWGAMEWIND_H
