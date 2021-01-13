#ifndef OUTNEXT_H
#define OUTNEXT_H

#include <QDialog>

namespace Ui {
  class Outnext;
}
/**
 * @brief The Outnext class - продолжить/выйти
 * окно,появляющееся после проигрыша, спрацивает,
 *  играть заново или выйти-> переход к авторизации
 */
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
