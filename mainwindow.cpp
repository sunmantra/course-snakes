#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  hwind = new HelpWind();//подкл. окно помощи
  statwind = new StatWindow();//подкл. окно статистики
  ngwind = new Newgamewind();//подкл. окно игры
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionHelp_triggered()
{
  hwind->show();
}

void MainWindow::on_actionStatistics_triggered()
{
    statwind->show();
}

void MainWindow::on_actionNew_game_triggered()
{
    ngwind -> show();
}

void MainWindow::on_pushButton_clicked()
{
     ngwind -> show();
}
