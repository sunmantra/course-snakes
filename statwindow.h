#ifndef STATWINDOW_H
#define STATWINDOW_H

#include <QMainWindow>

namespace Ui {
  class StatWindow;
}
/**
 * @brief The StatWindow class - работа со статистикой
 */
class StatWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit StatWindow(QWidget *parent = nullptr);
  ~StatWindow();

private:
  Ui::StatWindow *ui;

private slots:

  void ReadToFile();
};

#endif // STATWINDOW_H
