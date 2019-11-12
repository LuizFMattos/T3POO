#include "emprestimo.h"
#include "ui_emprestimo.h"

Emprestimo::Emprestimo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Emprestimo)
{
    ui->setupUi(this);
}

Emprestimo::~Emprestimo()
{
    delete ui;
}
