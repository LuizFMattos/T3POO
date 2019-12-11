#include "bibliotecadc.h"
#include <QApplication>

#include "DAO.h"
#include "Livro.h"

#define PESSOA     0
#define LIVRO      1
#define EMPRESTIMO 2

int main(int argc, char *argv[])
{
    DAO<Livro> d(LIVRO);
    char titulo[30] = "Sistemas digitais";
    char autor[30] = "Emerson";
    char editora[30] = "UFSCar";
    Livro l1(1, titulo, autor, editora, 2, 1, 1, 1);
    d.salvar(l1);
//    d.salvar(l2);
//    d.salvar(l3);
//    d.salvar(l4);
//    d.salvar(l5);

    QApplication a(argc, argv);
    BibliotecaDC w;
    w.show();
    return a.exec();
}
