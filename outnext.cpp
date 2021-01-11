#include "outnext.h"
#include "ui_outnext.h"
#include <QPixmap>

Outnext::Outnext(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Outnext)
{
  ui->setupUi(this);
  QPixmap pix(":/res/img/2pi.jpg");
  int x= ui->pit->width();
  int y = ui->pit ->height();

  ui->pit->setPixmap(pix.scaled(x,y,Qt::KeepAspectRatio));
}

Outnext::~Outnext()
{
  delete ui;
}
