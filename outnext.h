#ifndef OUTNEXT_H
#define OUTNEXT_H

#include <QDialog>

namespace Ui {
  class Outnext;
}

class Outnext : public QDialog
{
  Q_OBJECT

public:
  explicit Outnext(QWidget *parent = nullptr);
  ~Outnext();

private:
  Ui::Outnext *ui;
};

#endif // OUTNEXT_H
