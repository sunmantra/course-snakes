#include "statwindow.h"
#include "ui_statwindow.h"
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include "author.h"

StatWindow::StatWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::StatWindow)
{
  ui->setupUi(this);
}

StatWindow::~StatWindow()
{
  delete ui;
}

void StatWindow::ReadToFile()
{


}
