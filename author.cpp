#include "author.h"
#include "ui_author.h"
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
Author::Author(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Author)
{
  ui->setupUi(this);
  connect(ui->pushButton,SIGNAL(clicked()),SLOT(okCL()));
}

Author::~Author()
{
  delete ui;
}

void Author::on_pushButton_clicked()
{
    QString Name = ui ->NameEdit->text();

    if(Name == NULL)
      QMessageBox::warning(this, "Авторизация не удалась", "Вы не ввели Имя для авторизации");
   // else
}

/*void Author::okCL()
{
  emit FilePath(ui->NameEdit->text());
  close();
}*/
