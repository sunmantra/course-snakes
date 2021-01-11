#ifndef HELPWIND_H
#define HELPWIND_H

#include <QWidget>

namespace Ui {
  class HelpWind;
}

class HelpWind : public QWidget
{
  Q_OBJECT

public:
  explicit HelpWind(QWidget *parent = nullptr);
  ~HelpWind();

private:
  Ui::HelpWind *ui;
};

#endif // HELPWIND_H
