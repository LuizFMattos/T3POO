<<<<<<< Updated upstream
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
    DAO<Livro> d(LIVRO);
    char titulo[30] = "3Sistemas digitais";
    char autor[30] = "3Emerson";
    char editora[30] = "3UFSCar";
    Livro l1(d.getNextId(), titulo, autor, editora, 3, 3, 3, 3);
    //d.cadastrar(l1);
    //d.editar(2, l1);
    //d.excluir(3);
    //d.listar();

    int data[3] = {13, 12, 2019};
    DAO<Emprestimo> d2(EMPRESTIMO);
    Emprestimo e1(d2.getNextId(), 44071481870, 1, data);
    //d2.cadastrar(e1);
    d2.listar();
    Pessoa p();

    QApplication a(argc, argv);
    BibliotecaDC w;
    w.show();
    return a.exec();
}
=======
#include "bibliotecadc.h"
#include <QApplication>

#include "DAO.h"
#include "Livro.h"

#define PESSOA     0
#define LIVRO      1
#define EMPRESTIMO 2

int main(int argc, char *argv[])
{
    Livro l1(1, "Mochileiro das Galáxias1");
    Livro l2(2, "Mochileiro das Galáxias2");
    Livro l3(3, "Mochileiro das Galáxias3");
    Livro l4(4, "Mochileiro das Galáxias4");
    Livro l5(5, "Mochileiro das Galáxias5");
    DAO<Livro> d(LIVRO);

//    d.salvar(l1);
//    d.salvar(l2);
//    d.salvar(l3);
//    d.salvar(l4);
//    d.salvar(l5);

    QApplication a(argc, argv);
    BibliotecaDC w;
    w.show();
    return a.exec();
}
>>>>>>> Stashed changes
