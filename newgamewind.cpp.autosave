#include "newgamewind.h"
#include "ui_newgamewind.h"

Newgamewind::Newgamewind( QMainWindow *parent) ://isp
  QMainWindow(parent),
  ui(new Ui::Newgamewind)
{
  ui->setupUi(this);
  hwind = new HelpWind();//подкл. окно помощи
  statwind = new StatWindow();//подкл. окно статистики
  auwind = new Author();

  this->resize(800,650);          // Задаем размеры виджета, то есть окна
  this->setFixedSize(800,650);// Фиксируем размеры виджета
  scene = new QGraphicsScene();   // Инициализируем графическую сцену
  snak = new snakes();// Инициализируем питона

  ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
  ui->graphicsView->setRenderHint(QPainter::Antialiasing);    // Устанавливаем сглаживание

  scene -> setSceneRect(-350,-225,700,450);// граф. область
  scene ->addItem(snak);
  snak ->setPos(0,0);

  /* Дополнительно нарисуем органичение территории в графической сцене */
     scene->addLine(-350,-225, 350,-225, QPen(Qt::black));
     scene->addLine(-350, 225, 350, 225, QPen(Qt::black));
     scene->addLine(-350,-225,-350, 225, QPen(Qt::black));
     scene->addLine( 350,-225, 350, 225, QPen(Qt::black));

     scene->addItem(snak);
     snak->setPos(0,0);

}





Newgamewind::~Newgamewind()
{
  delete ui;
}

void Newgamewind::on_actionHelp_triggered()
{
  hwind ->show();
}

void Newgamewind::on_actionStatistics_triggered()
{
  statwind->show();
}
/**
 * @brief Newgamewind::on_actionExit_triggered - реализация перехода к авторизации
 */
void Newgamewind::on_actionExit_triggered()
{
  auwind->show();
}
