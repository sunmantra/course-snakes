#ifndef AUTHOR_H
#define AUTHOR_H

#include <QDialog>

namespace Ui {
  class Author;
}

/**
 * @brief The Author class - Авторизация пользователя
 * класс для работы с
 *
 */
class Author : public QDialog
{
  Q_OBJECT

public:
  explicit Author(QWidget *parent = nullptr);
  ~Author();

private slots:
  void on_pushButton_clicked();

private:
  Ui::Author *ui;

signals:
  void FilePath(const QString &str);
private:
  void okCL();
};

#endif // AUTHOR_H
