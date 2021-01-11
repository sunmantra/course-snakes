#include "helpwind.h"
#include "ui_helpwind.h"

HelpWind::HelpWind(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::HelpWind)
{
  ui->setupUi(this);
}

HelpWind::~HelpWind()
{
  delete ui;
}
