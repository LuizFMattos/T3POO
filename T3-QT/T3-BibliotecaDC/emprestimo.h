#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <QDialog>

namespace Ui {
class Emprestimo;
}

class Emprestimo : public QDialog
{
    Q_OBJECT

public:
    explicit Emprestimo(QWidget *parent = nullptr);
    ~Emprestimo();

private:
    Ui::Emprestimo *ui;
};

#endif // EMPRESTIMO_H
