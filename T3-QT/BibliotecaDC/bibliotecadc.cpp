#include "bibliotecadc.h"
#include "ui_bibliotecadc.h"

#include "DAO.h"
#include "Livro.h"
#include "Emprestimo.h"

#include <cmath>
#include <string>
#include <iostream>
#include <sstream>
#include <ctime>
#include <QMessageBox>

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
        table->setColumnCount(6);
        QStringList cabec = {"ID", "CPF", "ID Livro", "Emprestimo", "Devolução", "Devolvido"};
        table->setHorizontalHeaderLabels(cabec);

        table->setColumnWidth(0, 60);
        table->setColumnWidth(1, 180);
        table->setColumnWidth(2, 150    );
        table->setColumnWidth(3, 100);
        table->setColumnWidth(4, 100);
        table->setColumnWidth(5, 100);

        DAO<Emprestimo> dl(EMPRESTIMO);
        vector<Emprestimo> vec;
        vec = dl.getObjetos();

        for( unsigned int i = vec.size() - 2; i > 0; i--){
            table->insertRow(0);
            table->setItem(0, 0, new QTableWidgetItem( to_string( (int) round( vec[i].getId() ) ).c_str() ) );
            table->setItem(0, 1, new QTableWidgetItem( to_string( (int) round(vec[i].getCpf() ) ).c_str() ) );
            table->setItem(0, 2, new QTableWidgetItem( to_string( (int) round(vec[i].getId_livro() ) ).c_str() ) );


            string diaEmprestimo = to_string( vec[i].getDataEmprestimo()[0] );
            if( diaEmprestimo.length() == 1) diaEmprestimo = "0" + diaEmprestimo;

            string mesEmpresimo = to_string( vec[i].getDataEmprestimo()[1] );
            if( mesEmpresimo.length() == 1) mesEmpresimo = "0" + mesEmpresimo;

            string anoEmprestimo = to_string( vec[i].getDataEmprestimo()[2] );
            if( anoEmprestimo.length() == 1) anoEmprestimo = "0" + anoEmprestimo;

            string dataEmprestimo = diaEmprestimo + "/" + mesEmpresimo + "/" + anoEmprestimo;
            table->setItem(0, 3, new QTableWidgetItem( dataEmprestimo.c_str() )  );
        }
    }

}

void deleteTableWidget(QTableWidget* table){
    table->setRowCount(0);
}

int verificaCamposAcervo(Ui::BibliotecaDC* a){
    if( a->txtAcervoTitulo->text() == "" || a->txtAcervoAutor->text() == "" || a->txtAcervoEditora->text() == "" || a->txtAcervoEdicao->text() == ""){
        QMessageBox msg;
        msg.setText("Há campos não preenchidos, preencha-os!");
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();

        return 0;
    }
    return 1;
}

void limparCamposAcervo(Ui::BibliotecaDC* a){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano = tm.tm_year+1900;
    int mes = tm.tm_mon;
    int dia = tm.tm_mday;
    QDate d(ano, mes, dia);
    a->txtAcervoIdLivro->setText( "" );
    a->txtAcervoTitulo->setText( "" );
    a->txtAcervoAutor->setText( "" );
    a->txtAcervoEditora->setText( "" );
    a->txtAcervoEdicao->setText( "" );
    a->dtAcervoDataAquiscao->setDate(d);
}

BibliotecaDC::BibliotecaDC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BibliotecaDC)
{
    ui->setupUi(this);
    updateTableWiget(LIVRO, ui->tblAcervoLivros);
    updateTableWiget(EMPRESTIMO, ui->tblEmprestimoEmprestimo);
    ui->txtAcervoIdLivro->setEnabled(false);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano = tm.tm_year+1900;
    int mes = tm.tm_mon;
    int dia = tm.tm_mday;
    QDate d(ano, mes, dia);
    ui->dtAcervoDataAquiscao->setDate(d);
    ui->dtAcervoDataAquiscao->setEnabled(false);
    ui->btnAcervoExcluir->setEnabled(false);
    ui->btnAcervoEditar->setEnabled(false);

    //EMPRESTIMO
}

BibliotecaDC::~BibliotecaDC()
{
    delete ui;
}


void BibliotecaDC::on_btnAcervoCadastrar_clicked()
{
    if( verificaCamposAcervo(ui) ){
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
        limparCamposAcervo(ui);
    }
}

void BibliotecaDC::on_tblAcervoLivros_cellClicked(int row, int column)
{
    ui->btnAcervoCadastrar->setEnabled(false);
    ui->btnAcervoPesquisar->setEnabled(false);
    ui->btnAcervoExcluir->setEnabled(true);
    ui->btnAcervoEditar->setEnabled(true);
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

    int iDia, iMes, iAno = column - column;

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
    limparCamposAcervo(ui);
    ui->btnAcervoExcluir->setEnabled(false);
    ui->btnAcervoEditar->setEnabled(false);
    ui->btnAcervoCadastrar->setEnabled(true);
    ui->btnAcervoPesquisar->setEnabled(true);
}

void BibliotecaDC::on_btnAcervoExcluir_clicked()
{
    if( ui->txtAcervoIdLivro->text() != "" ){
        DAO<Livro> dl(LIVRO);
        dl.excluir(ui->txtAcervoIdLivro->text().toInt());
        deleteTableWidget(ui->tblAcervoLivros);
        updateTableWiget(LIVRO, ui->tblAcervoLivros);
        limparCamposAcervo(ui);
        ui->btnAcervoCadastrar->setEnabled(true);
        ui->btnAcervoPesquisar->setEnabled(true);
    }else{
        QMessageBox msg;
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();

    }


}
