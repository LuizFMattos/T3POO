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

#define USUARIO        0
#define LIVRO          1
#define EMPRESTIMO     2
#define USUARIO_LIVROS 3

void updateTableWiget(int widget, QTableWidget* table, Ui::BibliotecaDC* a){

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
            if( vec[i].getPenalidade()[0] == 1 && vec[i].getPenalidade()[1] == 1 && vec[i].getPenalidade()[2] == 2000)
                table->setItem(0, 5, new QTableWidgetItem( "NAO" ) );
            else{
                QString dia = to_string( vec[i].getPenalidade()[0] ).c_str();
                QString mes = to_string( vec[i].getPenalidade()[1] ).c_str();
                QString ano = to_string( vec[i].getPenalidade()[2] ).c_str();
                if( dia.size() == 1) dia = "0" + dia;
                if( mes.size() == 1) dia = "0" + mes;
                if( ano.size() == 1) dia = "0" + ano;
                table->setItem(0, 5, new QTableWidgetItem( dia + "/" + mes + "/" + ano ) );
            }

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
        QStringList cabec = {"ID", "CPF", "Livro", "Emprestimo", "Devolução", "Devolvido"};
        table->setHorizontalHeaderLabels(cabec);

        table->setColumnWidth(0, 60);
        table->setColumnWidth(1, 180);
        table->setColumnWidth(2, 150);
        table->setColumnWidth(3, 100);
        table->setColumnWidth(4, 100);
        table->setColumnWidth(5, 100);

        DAO<Emprestimo> dl(EMPRESTIMO);
        vector<Emprestimo> vec;
        vec = dl.getObjetos();

        for( unsigned int i = vec.size() - 2; i > 0; i--){
            table->insertRow(0);
            table->setItem(0, 0, new QTableWidgetItem( to_string( (int) round( vec[i].getId() ) ).c_str() ) );
            table->setItem(0, 1, new QTableWidgetItem( to_string( (int) round(vec[i].getCpf() ) ).substr(0,11).c_str() ) );
            DAO<Livro> dl(LIVRO);
            vector<Livro> vecL = dl.getObjetos();
            unsigned int j;
            for(j = 0; j < vecL.size(); j++){
                if( vecL[j].getId() == vec[i].getId_livro() ){
                    break;
                }
            }
            table->setItem(0, 2, new QTableWidgetItem( vecL[j].getTitulo() ) );

            ///////data emprestimo
            string diaEmprestimo = to_string( vec[i].getDataEmprestimo()[0] );
            if( diaEmprestimo.length() == 1) diaEmprestimo = "0" + diaEmprestimo;

            string mesEmpresimo = to_string( vec[i].getDataEmprestimo()[1] );
            if( mesEmpresimo.length() == 1) mesEmpresimo = "0" + mesEmpresimo;

            string anoEmprestimo = to_string( vec[i].getDataEmprestimo()[2] );

            string dataEmprestimo = diaEmprestimo + "/" + mesEmpresimo + "/" + anoEmprestimo;
            table->setItem(0, 3, new QTableWidgetItem( dataEmprestimo.c_str() )  );

            ////////data devolucao//////////
            string diaDevolucao = to_string( vec[i].getDataDevolucao()[0] );
            if( diaDevolucao.length() == 1) diaDevolucao= "0" + diaDevolucao;

            string mesDevolucao = to_string( vec[i].getDataDevolucao()[1] );
            if( mesDevolucao.length() == 1) mesDevolucao = "0" + mesDevolucao;

            string anoDevolucao = to_string( vec[i].getDataDevolucao()[2] );

            string dataDevolucao = diaDevolucao+ "/" + mesDevolucao+ "/" + anoDevolucao;
            table->setItem(0, 4, new QTableWidgetItem( dataDevolucao.c_str() )  );

            /////////data devolvido
            string diaDevolvido= to_string( vec[i].getDataDevolvido()[0] );
            if( diaDevolvido.length() == 1) diaDevolvido= "0" + diaDevolvido;

            string mesDevolvido = to_string( vec[i].getDataDevolvido()[1] );
            if( mesDevolvido.length() == 1) mesDevolvido = "0" + mesDevolvido;

            string anoDevolvido = to_string( vec[i].getDataDevolvido()[2] );

            string dataDevolvido;
            if( vec[i].getDataDevolvido()[0] == 1 && vec[i].getDataDevolvido()[1] == 1 && vec[i].getDataDevolvido()[2] == 2000){
                dataDevolvido = "NAO";
            }else{
                dataDevolvido = diaDevolvido + "/" + mesDevolvido+ "/" + anoDevolvido;
            }
            table->setItem(0, 5, new QTableWidgetItem( dataDevolvido.c_str() )  );
        }
    }else if( widget == USUARIO_LIVROS){
        double cpf = a->txtUsuarioCPF->text().toDouble();
        table->setColumnCount(2);
        QStringList cabec = {"ID", "Titulo"};
        table->setHorizontalHeaderLabels(cabec);

        table->setColumnWidth(0, 60);
        table->setColumnWidth(1, 100);

        DAO<Pessoa> dp(PESSOA);
        vector<Pessoa> vecP;
        vecP = dp.getObjetos();
        unsigned int q;
        for( q = vecP.size() - 2; q > 0; q--){
            if( vecP[q].getId() == cpf )
                break;
        }
        vector<Livro> vecL = vecP[q].getLivros();
        for( unsigned int i = vecL.size() - 2; i > 0; i--){
                table->insertRow(0);
                //table->setItem(0, 0, new QTableWidgetItem( to_string( (long long int) round( vec[i].getId() ) ).c_str() ) );
                table->setItem(0, 1, new QTableWidgetItem( vecL[i].getTitulo() ) );
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
    updateTableWiget(LIVRO, ui->tblAcervoLivros, ui);
    updateTableWiget(EMPRESTIMO, ui->tblEmprestimoEmprestimo, ui);
    updateTableWiget(USUARIO, ui->tblUsuarioUsuario, ui);
    ui->txtAcervoIdLivro->setEnabled(false);


    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano = tm.tm_year+1900;
    int mes = tm.tm_mon;
    int dia = tm.tm_mday;
    QDate d(ano, mes+1, dia);
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
    QPixmap pixmap("C:\\Users\\luizf\\Workspaces\\POO\\T3POO\\T3-QT\\BibliotecaDC\\lupa.png");
    QIcon ButtonIcon(pixmap);
    ui->btnEmprestimoPesquisarUsuario->setIcon(ButtonIcon);
    ui->btnEmprestimoPesquisarLivro->setIcon(ButtonIcon);
    ui->btnEmprestimoDevolver->setEnabled(false);
    ui->txtUsuarioPenalidade->setEchoMode(QLineEdit::NoEcho);
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

        Livro l1(dl.getNextId(), t, a , e, ui->txtAcervoEdicao->text().toInt(), ui->dtAcervoDataAquiscao->date().day(), ui->dtAcervoDataAquiscao->date().month(), ui->dtAcervoDataAquiscao->date().year() , false);
        dl.cadastrar(l1);
        deleteTableWidget(ui->tblAcervoLivros);
        updateTableWiget(LIVRO, ui->tblAcervoLivros, ui);
        limparCamposAcervo(ui);
    }
}

void BibliotecaDC::on_tblAcervoLivros_cellClicked(int row, int column)
{
    ui->btnAcervoCadastrar->setEnabled(false);
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

    vector<Livro> vecL = dl.getObjetos();
    unsigned int i;
    for(i = 0; i < vecL.size(); i++){
        if( vecL[i].getId() == ui->txtAcervoIdLivro->text().toDouble() )
            break;
    }


    Livro l1(ui->txtAcervoIdLivro->text().toDouble(), t, a , e, ui->txtAcervoEdicao->text().toInt(), ui->dtAcervoDataAquiscao->date().day(), ui->dtAcervoDataAquiscao->date().month(), ui->dtAcervoDataAquiscao->date().year(), vecL[i].getEstaEmprestado() );
    dl.editar(l1);
    deleteTableWidget(ui->tblAcervoLivros);
    updateTableWiget(LIVRO, ui->tblAcervoLivros, ui);
}

void BibliotecaDC::on_btnAcervoLimpar_clicked()
{
    limparCamposAcervo(ui);
    ui->btnAcervoExcluir->setEnabled(false);
    ui->btnAcervoEditar->setEnabled(false);
    ui->btnAcervoCadastrar->setEnabled(true);
}

void BibliotecaDC::on_btnAcervoExcluir_clicked()
{
    DAO<Livro> dl(LIVRO);
    dl.excluir(ui->txtAcervoIdLivro->text().toInt());
    deleteTableWidget(ui->tblAcervoLivros);
    updateTableWiget(LIVRO, ui->tblAcervoLivros, ui);
    limparCamposAcervo(ui);
    ui->btnAcervoCadastrar->setEnabled(true);
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
    a->txtUsuarioLivrosEmprestados->setText("");
}
bool verificaCamposUsuario(Ui::BibliotecaDC* a){
    if( a->txtUsuarioRa->text() == "" || a->txtUsuarioCPF->text() == "" || a->txtUsuarioCurso->text() == "" || a->txtUsuarioEmail->text() == "" || a->txtUsuarioIngresso->text() == "" || a->cmbUsuarioPerfil->currentIndex() < 1 ){
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
    ui->btnUsuarioExcluir->setEnabled(true);
    ui->btnUsuarioEditar->setEnabled(true);
    ui->txtUsuarioCPF->setEnabled(false);

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
    DAO<Pessoa> dp(PESSOA);
    vector<Pessoa> vec = dp.getObjetos();
    unsigned int i;
    for(i = 0; i < vec.size(); i++){
        if(ui->tblUsuarioUsuario->item(row, 0)->text().toDouble() == vec[i].getId())
            break;
    }
    ui->txtUsuarioLivrosEmprestados->setText( to_string(vec[i].getQntLivrosEmprestados()).c_str() );
}

void BibliotecaDC::on_btnUsuarioLimpar_clicked()
{
    limparCamposUsuario(ui);
    ui->btnUsuarioExcluir->setEnabled(false);
    ui->btnUsuarioEditar->setEnabled(false);
    ui->btnUsuarioCadastrar->setEnabled(true);
    ui->txtUsuarioCPF->setEnabled(true);
}

void BibliotecaDC::on_btnUsuarioExcluir_clicked()
{
    DAO<Pessoa> dl(USUARIO);
    dl.excluir( ui->txtUsuarioCPF->text().toDouble() );
    deleteTableWidget(ui->tblUsuarioUsuario);
    updateTableWiget(USUARIO, ui->tblUsuarioUsuario, ui);

    limparCamposUsuario(ui);
    ui->btnUsuarioCadastrar->setEnabled(true);
    ui->txtUsuarioCPF->setEnabled(true);
}

void BibliotecaDC::on_btnUsuarioCadastrar_clicked()
{
    if( verificaCamposUsuario(ui) ){
        double cpf = ui->txtUsuarioCPF->text().toDouble();
        int a = ui->cmbUsuarioPerfil->currentIndex();
        const char* nome = ui->txtUsuarioNome->text().toUtf8().constData();
        const char* email = ui->txtUsuarioEmail->text().toUtf8().constData();
        int ra = ui->txtUsuarioRa->text().toInt();
        string penalidade = ui->txtUsuarioPenalidade->text().toUtf8().constData();

        int pDia, pMes, pAno;
        if ( penalidade != "NAO" && penalidade != ""){

            istringstream issDia(penalidade.substr(0,2));
            issDia >> pDia;

            istringstream issMes(penalidade.substr(3,2));
            issMes >> pMes;

            istringstream issAno(penalidade.substr(6,2));
            issAno >> pAno;
        }else{
            pDia = 1;
            pMes = 1;
            pAno = 2000;
        }

        const char* curso = ui->txtUsuarioCurso->text().toUtf8().constData();
        int anoIngresso = ui->txtUsuarioIngresso->text().toInt();

        char tip[30] = {};
        char nom[50] = {};
        char ema[50] = {};
        char cur[30] = {};
        if( a == 1 ) strcpy(tip, "Admin"); else
        if (a == 2 ) strcpy(tip, "Professor"); else
        if (a == 3 ) strcpy(tip, "Aluno");
        strcpy(nom, nome);
        strcpy(ema, email);
        strcpy(cur, curso);

        vector<int> vec(5);
        vec[0] = 0;
        vec[1] = 0;
        vec[2] = 0;
        vec[3] = 0;
        vec[4] = 0;

        DAO<Pessoa> dp(USUARIO);
        Pessoa p(cpf, tip, nom, ema, ra, cur, anoIngresso, pDia, pMes, pAno, vec, 0);
        dp.cadastrar(p);
        deleteTableWidget(ui->tblUsuarioUsuario);
        updateTableWiget(0, ui->tblUsuarioUsuario, ui);
        limparCamposUsuario(ui);
    }
}

void BibliotecaDC::on_btnUsuarioEditar_clicked()
{
    double cpf = ui->txtUsuarioCPF->text().toDouble();
    int a = ui->cmbUsuarioPerfil->currentIndex();
    const char* nome = ui->txtUsuarioNome->text().toUtf8().constData();
    const char* email = ui->txtUsuarioEmail->text().toUtf8().constData();
    int ra = ui->txtUsuarioRa->text().toInt();
    string penalidade = ui->txtUsuarioPenalidade->text().toUtf8().constData();

    int pDia, pMes, pAno;
    if ( penalidade != "NAO"){

        istringstream issDia(penalidade.substr(0,2));
        issDia >> pDia;

        istringstream issMes(penalidade.substr(3,2));
        issMes >> pMes;

        istringstream issAno(penalidade.substr(6,2));
        issAno >> pAno;
    }else{
        pDia = 1;
        pMes = 1;
        pAno = 2000;
    }
    const char* curso = ui->txtUsuarioCurso->text().toUtf8().constData();
    int anoIngresso = ui->txtUsuarioIngresso->text().toInt();

    char tip[30] = {};
    char nom[50] = {};
    char ema[50] = {};
    char cur[30] = {};
    if( a == 1 ) strcpy(tip, "Admin"); else
    if (a == 2 ) strcpy(tip, "Professor"); else
    if (a == 3 ) strcpy(tip, "Aluno");
    strcpy(nom, nome);
    strcpy(ema, email);
    strcpy(cur, curso);

    vector<int> vec(0);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(0);

    DAO<Pessoa> dp(USUARIO);
    Pessoa p(cpf, tip, nom, ema, ra, cur, anoIngresso, pDia, pMes, pAno, vec, ui->txtUsuarioLivrosEmprestados->text().toInt());
    dp.editar(p);
    deleteTableWidget(ui->tblUsuarioUsuario);
    updateTableWiget(0, ui->tblUsuarioUsuario, ui);
    limparCamposUsuario(ui);

    ui->btnUsuarioCadastrar->setEnabled(true);
    ui->btnUsuarioExcluir->setEnabled(false);
    ui->btnUsuarioEditar->setEnabled(false);
    ui->txtUsuarioCPF->setEnabled(true);

}
///////////////////////////////////EMPRESTIMO///////////////////////////////////
void limpaCamposEmprestimo(Ui::BibliotecaDC* a){
    a->txtEmprestimoCpf->setText("");
    a->txtEmprestimoNome->setText("");
    a->txtEmprestimoAutor->setText("");
    a->txtEmprestimoEdicao->setText("");
    a->txtEmprestimoTitulo->setText("");
    a->txtEmprestimoEditora->setText("");
    a->txtEmprestimoIdLivro->setText("");
    QDate data(2000,1,1);
    a->dtEmprestimoDataAq->setDate(data);
}

void BibliotecaDC::on_btnEmprestimoPesquisarUsuario_clicked(){
    double cpf = ui->txtEmprestimoCpf->text().toDouble();
    if( cpf != 0){
        unsigned int i;
        DAO<Pessoa> dp(USUARIO);
        vector<Pessoa> p = dp.getObjetos();
        for( i = 0; i < p.size(); i++){
            if( cpf == p[i].getId() ){
                ui->txtEmprestimoNome->setText( to_string(i).c_str() );
                break;
            }
        }
        if( i == p.size() ){
            QMessageBox msg;
            msg.setText("Usuário não encontrado!");
            msg.setIcon(QMessageBox::Critical);
            msg.setDefaultButton(QMessageBox::Ok);
            msg.exec();
            ui->txtEmprestimoCpf->setText("");
        }
    }else{
        QMessageBox msg;
        msg.setText("Digite um CPF para pesquisar uma pessoa!");
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();
    }

}

void BibliotecaDC::on_btnEmprestimoPesquisarLivro_clicked()
{
    double id = ui->txtEmprestimoIdLivro->text().toDouble();
    if( id != 0){
        unsigned int i;
        DAO<Livro> dp(LIVRO);
        vector<Livro> p = dp.getObjetos();
        for( i = 0; i < p.size(); i++){
            if( id == p[i].getId() ){
                ui->txtEmprestimoTitulo->setText( p[i].getTitulo() );
                ui->txtEmprestimoAutor->setText( p[i].getAutor() );
                ui->txtEmprestimoEditora->setText( p[i].getEditora() );
                ui->txtEmprestimoEdicao->setText( to_string( p[i].getEdicao() ).c_str() );
                QDate data(p[i].getAnoAdquirido(), p[i].getMesAdquirido(), p[i].getDiaAdquirido());
                ui->dtEmprestimoDataAq->setDate(data);


                break;
            }
        }
        if( i == p.size() ){
            QMessageBox msg;
            msg.setText("Livro não encontrado!");
            msg.setIcon(QMessageBox::Critical);
            msg.setDefaultButton(QMessageBox::Ok);
            msg.exec();
            ui->txtEmprestimoIdLivro->setText("");
        }
    }else{
        QMessageBox msg;
        msg.setText("Digite um ID para pesquisar um livro!");
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();
    }


}


void BibliotecaDC::on_btnEmprestimoLimpar_clicked()
{
    limpaCamposEmprestimo(ui);
    ui->btnEmprestimoEmprestar->setEnabled(true);
}

void BibliotecaDC::on_btnEmprestimoEmprestar_clicked()
{

    unsigned int i;
    double cpf = ui->txtEmprestimoCpf->text().toDouble();
    double idLivro = ui->txtEmprestimoIdLivro->text().toDouble();
    DAO<Pessoa> dp(PESSOA);
    vector<Pessoa> vecP = dp.getObjetos();
    for( i = 0; i < vecP.size(); i++){
        if( cpf == vecP[i].getId() ){
            break;
        }
    }
    cout << vecP[i].getQntLivrosEmprestados() <<"   " << vecP[i].getMaxLivros()<< endl;
    unsigned int j;
    DAO<Livro> dl(LIVRO);
    vector<Livro> vecL = dl.getObjetos();
    for( j = 0; j < vecL.size(); j++){
        if( idLivro == vecL[j].getId() ){
            break;
        }
    }
    if( !vecL[j].getEstaEmprestado() ){
        if( vecP[i].emprestar(idLivro) == true){
            cout << vecP[i].getQntLivrosEmprestados()<< "agora" << endl;
            dp.editar(vecP[i]);
            vecL[j].setEstaEmprestado(true);
            dl.editar(vecL[j]);

            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            int dataEmprestimo[3];
            dataEmprestimo[0] = tm.tm_mday;
            dataEmprestimo[1] = tm.tm_mon;
            dataEmprestimo[2] = tm.tm_year+1900;

            int dataDevolucao[3];
            dataDevolucao[0] = tm.tm_mday;
            dataDevolucao[1] = tm.tm_mon;
            dataDevolucao[2] = tm.tm_year;
            somardias( &dataDevolucao[0], &dataDevolucao[1], &dataDevolucao[2], 10 );

            int dataDevolvido[3];
            dataDevolvido[0] = 1;
            dataDevolvido[1] = 1;
            dataDevolvido[2] = 2000;

            DAO<Emprestimo> de(EMPRESTIMO);
            Emprestimo e(de.getNextId(), cpf, idLivro, dataEmprestimo, dataDevolucao, dataDevolvido);
            de.cadastrar(e);
        }else{
            QMessageBox msg;

            msg.setText("O usuário atingiu o número máximo de emprestimos!");
            msg.setIcon(QMessageBox::Warning);
            msg.setDefaultButton(QMessageBox::Ok);
            msg.exec();
        }
    }else{
        QMessageBox msg;
        msg.setText("O livro selecionado não esta disponível!");
        msg.setIcon(QMessageBox::Warning);
        msg.setDefaultButton(QMessageBox::Ok);
        msg.exec();
    }
    deleteTableWidget(ui->tblEmprestimoEmprestimo);
    updateTableWiget(EMPRESTIMO, ui->tblEmprestimoEmprestimo, ui);
    limpaCamposEmprestimo(ui);
    cout << vecP[i].getQntLivrosEmprestados() <<"   " << vecP[i].getMaxLivros()<< endl;
}

void BibliotecaDC::on_btnEmprestimoDevolver_clicked()
{
    unsigned int i;
    double cpf = ui->txtEmprestimoCpf->text().toDouble();
    double idLivro = ui->txtEmprestimoIdLivro->text().toDouble();
    DAO<Pessoa> dp(PESSOA);
    vector<Pessoa> vecP = dp.getObjetos();
    for( i = 0; i < vecP.size(); i++){
        if( cpf == vecP[i].getId() ){
            break;
        }
    }
    unsigned int j;
    DAO<Livro> dl(LIVRO);
    vector<Livro> vecL = dl.getObjetos();
    for( j = 0; j < vecL.size(); j++){
        if( idLivro == vecL[j].getId() ){
            break;
        }
    }


    unsigned int k;
    DAO<Emprestimo> de(EMPRESTIMO);
    vector<Emprestimo> vecE = de.getObjetos();
    for( k = 0; k < vecE.size(); k++){
        if( vecE[k].getId_livro() == idLivro && vecL[j].getEstaEmprestado() == true){
            break;
        }
    }

    vecP[i].devolver(vecL[j].getId(), vecE[k].getDataDevolucao()[0],vecE[k].getDataDevolucao()[1], vecE[k].getDataDevolucao()[2]);
    dp.editar(vecP[i]);
    vecL[j].setEstaEmprestado(false);
    dl.editar(vecL[j]);
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int data[3];
    data[0] = tm.tm_mday;
    data[1] = tm.tm_mon+1;
    data[2] = tm.tm_year+1900;
    vecE[k].setDataDevolvido(data[0], data[1], data[2]);
    de.editar(vecE[k]);
    limpaCamposEmprestimo(ui);
    deleteTableWidget(ui->tblEmprestimoEmprestimo);
    updateTableWiget(EMPRESTIMO, ui->tblEmprestimoEmprestimo, ui);
}


void BibliotecaDC::on_tblEmprestimoEmprestimo_cellClicked(int row, int column)
{
    ui->btnEmprestimoEmprestar->setEnabled(false);
    if( !ui->tblEmprestimoEmprestimo->item(row, 5)->text().compare("NAO") ) ui->btnEmprestimoDevolver->setEnabled(true);
    double idEmprestimo = ui->tblEmprestimoEmprestimo->item(row,0 )->text().toDouble();
    unsigned int k;
    DAO<Emprestimo> de(EMPRESTIMO);
    vector<Emprestimo> vecE = de.getObjetos();
    for( k = 0; k < vecE.size(); k++){
        if( vecE[k].getId() == idEmprestimo ){
            break;
        }
    }
    unsigned int i;
    DAO<Pessoa> dp(PESSOA);
    vector<Pessoa> vecP = dp.getObjetos();
    for( i = 0; i < vecP.size(); i++){
        if( vecE[k].getCpf() == vecP[i].getId() ){
            break;
        }
    }
    unsigned int j;
    DAO<Livro> dl(LIVRO);
    vector<Livro> vecL = dl.getObjetos();
    for( j = 0; j < vecL.size(); j++){
        if( vecE[k].getId_livro() == vecL[j].getId() ){
            break;
        }
    }
    ui->txtEmprestimoTitulo->setText( vecL[j].getTitulo() );
    ui->txtEmprestimoAutor->setText( vecL[j].getAutor() );
    ui->txtEmprestimoEditora->setText( vecL[j].getEditora() );
    ui->txtEmprestimoEdicao->setText( to_string( vecL[j].getEdicao() ).c_str() );
    QDate data(vecL[j].getAnoAdquirido(), vecL[j].getMesAdquirido(), vecL[j].getDiaAdquirido());
    ui->dtEmprestimoDataAq->setDate(data);
    ui->txtEmprestimoNome->setText( vecP[i].getNome() );
    ui->txtEmprestimoCpf->setText( to_string((long long int )round(vecP[i].getId())).c_str() );
    ui->txtEmprestimoIdLivro->setText( to_string((long long int) round(vecL[k].getId())).c_str());


}

void BibliotecaDC::on_tblUsuarioUsuario_cellActivated(int row, int column)
{

}
