#include "bibliotecadc.h"
#include "ui_bibliotecadc.h"

#include "DAO.h"
#include "Livro.h"

#include <cmath>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#define PESSOA     0
#define LIVRO      1
#define EMPRESTIMO 2

void updateTableWiget(int widget, QTableWidget* table){

    if( widget == PESSOA){

    }else if( widget == LIVRO ){
        table->setColumnCount(6);
        QStringList cabec = {"ID", "Titulo", "Autor", "Editora", "Edição", "Aquisição"};
        table->setHorizontalHeaderLabels(cabec);

        table->setColumnWidth(0, 60);
        table->setColumnWidth(1, 180);
        table->setColumnWidth(2, 161);
        table->setColumnWidth(3, 120);
        table->setColumnWidth(4, 69);
        table->setColumnWidth(5, 85);

        DAO<Livro> dl(LIVRO);
        vector<Livro> vec;
        vec = dl.getObjetos();

        for( unsigned int i = vec.size() - 2; i > 0; i--){
            table->insertRow(0);
            table->setItem(0, 0, new QTableWidgetItem( to_string( (int) round( vec[i].getId() ) ).c_str() ) );
            table->setItem(0, 1, new QTableWidgetItem( vec[i].getTitulo() ) );
            table->setItem(0, 2, new QTableWidgetItem( vec[i].getAutor() ) );
            table->setItem(0, 3, new QTableWidgetItem( vec[i].getEditora() ) );

            string dia = to_string( vec[i].getDiaAdquirido() );
            if( dia.length() == 1) dia = "0" + dia;

            string mes = to_string( vec[i].getMesAdquirido() );
            if( mes.length() == 1) mes = "0" + mes;

            string ano = to_string( vec[i].getAnoAdquirido() );
            if( ano.length() == 1) ano = "0" + ano;

            table->setItem(0, 4, new QTableWidgetItem( to_string( vec[i].getEdicao() ).c_str() ) );
            string data = dia + "/" + mes + "/" + ano;
            table->setItem(0, 5, new QTableWidgetItem( data.c_str() )  );
        }

    }else if( widget == EMPRESTIMO ){

    }

}

void deleteTableWidget(QTableWidget* table){
    table->setRowCount(0);
}

BibliotecaDC::BibliotecaDC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BibliotecaDC)
{
    ui->setupUi(this);
    updateTableWiget(LIVRO, ui->tblAcervoLivros);
    ui->txtAcervoIdLivro->setEnabled(false);
}

BibliotecaDC::~BibliotecaDC()
{
    delete ui;
}


void BibliotecaDC::on_btnAcervoCadastrar_clicked()
{
    DAO<Livro> dl(LIVRO);

    const char* titulo = ui->txtAcervoTitulo->text().toUtf8().constData();
    const char* autor = ui->txtAcervoAutor->text().toUtf8().constData();
    const char* editora = ui->txtAcervoEditora->text().toUtf8().constData();

    char t[30] = {};
    char a[30] = {};
    char e[30] = {};
    strcpy(t, titulo);
    strcpy(a, autor);
    strcpy(e, editora);

    Livro l1(dl.getNextId(), t, a , e, ui->txtAcervoEdicao->text().toInt(), ui->dtAcervoDataAquiscao->date().day(), ui->dtAcervoDataAquiscao->date().month(), ui->dtAcervoDataAquiscao->date().year() );
    dl.cadastrar(l1);
    deleteTableWidget(ui->tblAcervoLivros);
    updateTableWiget(LIVRO, ui->tblAcervoLivros);
}

void BibliotecaDC::on_tblAcervoLivros_cellClicked(int row, int column)
{
    QDate d;

    ui->txtAcervoIdLivro->setEnabled(false);
    ui->txtAcervoIdLivro->setText( ui->tblAcervoLivros->item(row,0 )->text() );
    ui->txtAcervoTitulo->setText( ui->tblAcervoLivros->item(row, 1)->text() );
    ui->txtAcervoAutor->setText( ui->tblAcervoLivros->item(row, 2)->text() );
    ui->txtAcervoEditora->setText( ui->tblAcervoLivros->item(row, 3)->text() );
    ui->txtAcervoEdicao->setText( ui->tblAcervoLivros->item(row, 4)->text() );

    QString QsData = ui->tblAcervoLivros->item(row, 5)->text();
    string sData = QsData.toUtf8().constData();

    string sDia = sData.substr(0,2);
    string sMes = sData.substr(3,2);
    string sAno = sData.substr(6,4);

    int iDia, iMes, iAno;

    istringstream issDia(sDia);
    issDia >> iDia;

    istringstream issMes(sMes);
    issMes >> iMes;

    istringstream issAno(sAno);
    issAno >> iAno;

    d.setDate(iAno, iMes, iDia);

    ui->dtAcervoDataAquiscao->setDate(d);

}



void BibliotecaDC::on_btnAcervoEditar_clicked()
{
    DAO<Livro> dl(LIVRO);

    const char* titulo = ui->txtAcervoTitulo->text().toUtf8().constData();
    const char* autor = ui->txtAcervoAutor->text().toUtf8().constData();
    const char* editora = ui->txtAcervoEditora->text().toUtf8().constData();

    char t[30] = {};
    char a[30] = {};
    char e[30] = {};
    strcpy(t, titulo);
    strcpy(a, autor);
    strcpy(e, editora);

    Livro l1(ui->txtAcervoIdLivro->text().toInt(), t, a , e, ui->txtAcervoEdicao->text().toInt(), ui->dtAcervoDataAquiscao->date().day(), ui->dtAcervoDataAquiscao->date().month(), ui->dtAcervoDataAquiscao->date().year() );
    dl.editar(l1);
    deleteTableWidget(ui->tblAcervoLivros);
    updateTableWiget(LIVRO, ui->tblAcervoLivros);
}

void BibliotecaDC::on_btnAcervoLimpar_clicked()
{
    QDate d;
    d.setDate(2000, 01, 01);
    ui->txtAcervoIdLivro->setText( "" );
    ui->txtAcervoTitulo->setText( "" );
    ui->txtAcervoAutor->setText( "" );
    ui->txtAcervoEditora->setText( "" );
    ui->txtAcervoEdicao->setText( "" );
    ui->dtAcervoDataAquiscao->setDate(d);
}
