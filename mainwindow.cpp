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
/**
 * @brief MainWindow::on_actionExit_triggered - кнопка закрытия
 */
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
/**
 * @brief MainWindow::on_actionHelp_triggered - открывает меню помощи
 */
void MainWindow::on_actionHelp_triggered()
{
  hwind->show();
}
/**
 * @brief MainWindow::on_actionStatistics_triggered - открывает статистику
 */
void MainWindow::on_actionStatistics_triggered()
{
    statwind->show();
}
/**
 * @brief MainWindow::on_actionNew_game_triggered - открывает Игру
 */
void MainWindow::on_actionNew_game_triggered()
{
    ngwind -> show();
}
/**
 * @brief MainWindow::on_pushButton_clicked -  - открывает Игру
 */
void MainWindow::on_pushButton_clicked()
{
     ngwind -> show();
}
