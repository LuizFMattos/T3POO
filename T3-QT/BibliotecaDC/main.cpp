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
