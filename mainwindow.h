#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <author.h>
#include <helpwind.h>
#include <outnext.h>
#include <statwindow.h>
#include <newgamewind.h>

QT_BEGIN_NAMESPACE

namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_actionExit_triggered();
  void on_actionHelp_triggered();
  void on_actionStatistics_triggered();
  void on_actionNew_game_triggered();

  void on_pushButton_clicked();

private:
  Ui::MainWindow *ui;
  HelpWind *hwind;
  StatWindow *statwind;
  Newgamewind *ngwind;
};

#endif // MAINWINDOW_H
