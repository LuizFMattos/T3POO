#include "bibliotecadc.h"
#include "ui_bibliotecadc.h"

#include "DAO.h"
#include "Livro.h"
#include "Emprestimo.h"
#include "Pessoa.h"

#include <cmath>
#include <string>
#include <iostream>
#include <sstream>
#include <ctime>
#include <QMessageBox>

using namespace std;

#define USUARIO    0
#define LIVRO      1
#define EMPRESTIMO 2

void updateTableWiget(int widget, QTableWidget* table){

    if( widget == USUARIO){
        table->setColumnCount(8);
        QStringList cabec = {"CPF", "Cadastro", "Nome", "e-mail", "RA", "Penalidade", "Curso", "Ingresso"};
        table->setHorizontalHeaderLabels(cabec);

        table->setColumnWidth(0, 100);
        table->setColumnWidth(1, 70);
        table->setColumnWidth(2, 105);
        table->setColumnWidth(3, 105);
        table->setColumnWidth(4, 60);
        table->setColumnWidth(5, 85);
        table->setColumnWidth(6, 105);
        table->setColumnWidth(7, 65);

        DAO<Pessoa> dp(USUARIO);
        vector<Pessoa> vec;
        vec = dp.getObjetos();

        for( unsigned int i = vec.size() - 2; i > 0; i--){
            table->insertRow(0);
            table->setItem(0, 0, new QTableWidgetItem( to_string( (long long int) round( vec[i].getId() ) ).c_str() ) );
            table->setItem(0, 1, new QTableWidgetItem( vec[i].getTipoCadastro() ) );
            table->setItem(0, 2, new QTableWidgetItem( vec[i].getNome() ) );
            table->setItem(0, 3, new QTableWidgetItem( vec[i].getEmail() ) );
            table->setItem(0, 4, new QTableWidgetItem( to_string( vec[i].getRa() ).c_str() ) );
            table->setItem(0, 5, new QTableWidgetItem( to_string( vec[i].getPenalidade() ).c_str() ) );
            table->setItem(0, 6, new QTableWidgetItem( vec[i].getCurso() ) );
            table->setItem(0, 7, new QTableWidgetItem( to_string( vec[i].getAnoIngresso() ).c_str() ) );
        }

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
            table->setItem(0, 1, new QTableWidgetItem( to_string(  round(vec[i].getCpf() ) ).substr(0,11).c_str() ) );
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

BibliotecaDC::BibliotecaDC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BibliotecaDC)
{
    ui->setupUi(this);
    updateTableWiget(LIVRO, ui->tblAcervoLivros);
    updateTableWiget(EMPRESTIMO, ui->tblEmprestimoEmprestimo);
    updateTableWiget(USUARIO, ui->tblUsuarioUsuario);
    ui->txtAcervoIdLivro->setEnabled(false);

    QRegExp re1("([A-Z ]{0,50})");
    QRegExp re2("([A-Z ]{0,30})");
    QRegExp re3("([A-Z]{0,30})");
    QRegExpValidator *validator1 = new QRegExpValidator(re1, this);
    QRegExpValidator *validator2 = new QRegExpValidator(re2, this);
    QRegExpValidator *validator3 = new QRegExpValidator(re3, this);
    ui->txtUsuarioNome->setValidator(validator1);
    ui->txtUsuarioCurso->setValidator(validator2);
    ui->txtUsuarioEmail->setValidator(validator3);


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

    //USUARIO
    ui->cmbUsuarioPerfil->addItem("", "");
    ui->cmbUsuarioPerfil->addItem("Admin", "adm");
    ui->cmbUsuarioPerfil->addItem("Professor", "prf");
    ui->cmbUsuarioPerfil->addItem("Aluno", "aln");
    ui->btnUsuarioExcluir->setEnabled(false);
    ui->btnUsuarioEditar->setEnabled(false);
}

BibliotecaDC::~BibliotecaDC()
{
    delete ui;
}

//////////////////////////////////////ACERVO//////////////////////////////////////
bool verificaCamposAcervo(Ui::BibliotecaDC* a){
    if( a->txtAcervoTitulo->text() == "" || a->txtAcervoAutor->text() == "" || a->txtAcervoEditora->text() == "" || a->txtAcervoEdicao->text() == ""){
        QMessageBox msg;
        msg.setText("Há campos não preenchidos, preencha-os!");
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();

        return false;
    }
    return true;
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
    DAO<Livro> dl(LIVRO);
    dl.excluir(ui->txtAcervoIdLivro->text().toInt());
    deleteTableWidget(ui->tblAcervoLivros);
    updateTableWiget(LIVRO, ui->tblAcervoLivros);
    limparCamposAcervo(ui);
    ui->btnAcervoCadastrar->setEnabled(true);
    ui->btnAcervoPesquisar->setEnabled(true);
}

//////////////////////////////////////USUARIO//////////////////////////////////////
void limparCamposUsuario(Ui::BibliotecaDC* a){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano = tm.tm_year+1900;
    int mes = tm.tm_mon;
    int dia = tm.tm_mday;
    QDate d(ano, mes, dia);
    a->txtUsuarioRa->setText( "" );
    a->txtUsuarioCPF->setText( "" );
    a->txtUsuarioNome->setText( "" );
    a->txtUsuarioCurso->setText( "" );
    a->txtUsuarioEmail->setText( "" );
    a->txtUsuarioIngresso->setText( "" );
    a->txtUsuarioPenalidade->setText( "" );
    a->cmbUsuarioPerfil->setCurrentIndex(-1);
}
bool verificaCamposUsuario(Ui::BibliotecaDC* a){
    if( a->txtUsuarioRa->text() == "" || a->txtUsuarioCPF->text() == "" || a->txtUsuarioCurso->text() == "" || a->txtUsuarioEmail->text() == "" || a->txtUsuarioIngresso->text() == "" || a->txtUsuarioPenalidade->text() == "" || a->cmbUsuarioPerfil->currentIndex() < 1 ){
        QMessageBox msg;
        msg.setText("Há campos não preenchidos, preencha-os!");
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();
        return false;
    }
    return true;
}

void BibliotecaDC::on_tblUsuarioUsuario_cellClicked(int row, int column)
{
    ui->btnUsuarioCadastrar->setEnabled(false);
    ui->btnUsuarioPesquisar->setEnabled(false);
    ui->btnUsuarioExcluir->setEnabled(true);
    ui->btnUsuarioEditar->setEnabled(true);

    ui->txtUsuarioCPF->setText( ui->tblUsuarioUsuario->item(row, 0)->text() );
    if( ui->tblUsuarioUsuario->item(row, 1)->text() == "Admin" )
        ui->cmbUsuarioPerfil->setCurrentIndex(1);
    else if( ui->tblUsuarioUsuario->item(row, 1)->text() == "Professor" )
        ui->cmbUsuarioPerfil->setCurrentIndex(2);
    else if( ui->tblUsuarioUsuario->item(row, 1)->text() == "Aluno" )
        ui->cmbUsuarioPerfil->setCurrentIndex(3);

    ui->txtUsuarioNome->setText( ui->tblUsuarioUsuario->item(row, 2)->text() );
    ui->txtUsuarioEmail->setText( ui->tblUsuarioUsuario->item(row, 3)->text() );
    ui->txtUsuarioRa->setText( ui->tblUsuarioUsuario->item(row, 4)->text() );
    ui->txtUsuarioPenalidade->setText( ui->tblUsuarioUsuario->item(row, 5)->text() );
    ui->txtUsuarioCurso->setText( ui->tblUsuarioUsuario->item(row, 6)->text() );
    ui->txtUsuarioIngresso->setText( ui->tblUsuarioUsuario->item(row, 7)->text() );
}

void BibliotecaDC::on_btnUsuarioLimpar_clicked()
{
    limparCamposUsuario(ui);
    ui->btnUsuarioExcluir->setEnabled(false);
    ui->btnUsuarioEditar->setEnabled(false);
    ui->btnUsuarioCadastrar->setEnabled(true);
    ui->btnUsuarioPesquisar->setEnabled(true);
}

void BibliotecaDC::on_btnUsuarioExcluir_clicked()
{
    DAO<Pessoa> dl(USUARIO);
    dl.excluir( ui->txtUsuarioCPF->text().toDouble() );
    deleteTableWidget(ui->tblUsuarioUsuario);
    updateTableWiget(USUARIO, ui->tblUsuarioUsuario);

    limparCamposUsuario(ui);
    ui->btnUsuarioCadastrar->setEnabled(true);
    ui->btnUsuarioPesquisar->setEnabled(true);
}

void BibliotecaDC::on_btnUsuarioCadastrar_clicked()
{
    ui->label_6->setText( ui->cmbUsuarioPerfil->currentText() );
    if( verificaCamposUsuario(ui) ){
        double cpf = ui->txtUsuarioCPF->text().toDouble();
//        const char* tipoCadastro = ui->cmbUsuarioPerfil->currentText().toUtf8().constData();
        const char* nome = ui->txtUsuarioNome->text().toUtf8().constData();
        const char* email = ui->txtUsuarioEmail->text().toUtf8().constData();
        int ra = ui->txtUsuarioRa->text().toInt();
        int penalidade = 0;
        const char* curso = ui->txtUsuarioCurso->text().toUtf8().constData();
        int anoIngresso = ui->txtUsuarioIngresso->text().toInt();

        char tip[30] = {};
        char nom[50] = {};
        char ema[50] = {};
        char cur[30] = {};
        //strcpy(tip, tipoCadastro);
        strcpy(nom, nome);
        strcpy(ema, email);
        strcpy(cur, curso);

        vector<int> vec(0);

        DAO<Pessoa> dp(USUARIO);
        Pessoa p(cpf, tip, nom, ema, ra, penalidade, cur, anoIngresso, vec);
        dp.cadastrar(p);
        deleteTableWidget(ui->tblUsuarioUsuario);
        updateTableWiget(0, ui->tblUsuarioUsuario);
        limparCamposUsuario(ui);

    }
}
