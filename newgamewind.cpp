#include "newgamewind.h"
#include "ui_newgamewind.h"

#include <QPainter>
#include <QDebug>

Newgamewind::Newgamewind( QMainWindow *parent) :
  QMainWindow(parent), ui(new Ui::Newgamewind){

  ui->setupUi(this);

  hwind = new HelpWind();       //подкл. окно помощи
  statwind = new StatWindow();  //подкл. окно статистики
  auwind = new Author();
  scene = new QGraphicsScene(); // Инициализируем графическую сцену

  this->resize(800,650);        // Задаем размеры виджета, то есть окна
  this->setFixedSize(800,650);  // Фиксируем размеры виджета

 // snak = new snakes();          // Инициализируем питона

  //ui->graphicsView->setScene(scene);// Устанавливаем графическую сцену в graphicsView
 // ui->graphicsView->setRenderHint(QPainter::Antialiasing);// Устанавливаем сглаживание

 // scene -> setSceneRect(-350,-225,700,450);// граф. область
  //scene ->addItem(snak);
  //snak ->setPos(0,0);

  /* Дополнительно нарисуем органичение территории в графической сцене
     scene->addLine(-350,-225, 350,-225, QPen(Qt::black));
     scene->addLine(-350, 225, 350, 225, QPen(Qt::black));
     scene->addLine(-350,-225,-350, 225, QPen(Qt::black));
     scene->addLine( 350,-225, 350, 225, QPen(Qt::black));

     scene->addItem(snak);
     snak->setPos(0,0);
*/
     initGame();
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

void Newgamewind::initGame(){
  m_inGame= true;
  dir = right;
  dots.resize(3);

  for(int i=0;i< dots.size();++i){
      dots[i].rx()=dots.size()-i;
      dots[i].ry()=0;
    }

  timerId = startTimer(DELAY);

}

void Newgamewind::doDrawing(){

  QPainter qp(this);
  if(m_inGame){
    for(int i=0;i<dots.size();++i){
      if(i==0){
          qp.setBrush(Qt::red);
          qp.drawEllipse(dots[i].x()*30,dots[i].y()*30,20,20);
        }
      else{
          qp.setBrush(Qt::green);
          qp.drawEllipse(dots[i].x()*30,dots[i].y()*30,20,20);
        }
    }
    }
    else{
     // gamOver
    }
}

void Newgamewind::timerEvent(QTimerEvent *)
{

}

void Newgamewind::keyPressEvent(QKeyEvent *e)//нажатия клавиш
{
  int key = e->key();
  switch (key) {

    case Qt::Key_Left:
      qDebug() <<"Key_Left";
      break;

    case Qt::Key_Right:
      qDebug() <<"Key_Right";
      break;
    }
}

void Newgamewind::paintEvent(QPaintEvent *e)
{
  Q_UNUSED(e);
  doDrawing();
}


