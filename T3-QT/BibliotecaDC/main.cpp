#include "bibliotecadc.h"
#include <QApplication>

#include "DAO.h"
#include "Livro.h"
#include "Emprestimo.h"
#include "Pessoa.h"

#define PESSOA     0
#define LIVRO      1
#define EMPRESTIMO 2

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BibliotecaDC w;
    w.show();
    return a.exec();
}
