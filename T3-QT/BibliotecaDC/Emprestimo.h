#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <iostream>

using namespace std;

class Emprestimo{
    public:
        Emprestimo(){
            this->id = 0;
            this->cpf = 0;
            this->id_livro = 0;
            this->dataEmprestimo[0] = 1;
            this->dataEmprestimo[1] = 1;
            this->dataEmprestimo[2] = 2000;

            this->dataDevolucao[0] = 1;
            this->dataDevolucao[1] = 1;
            this->dataDevolucao[2] = 2000;

            this->dataDevolvido[0] = 1;
            this->dataDevolvido[1] = 1;
            this->dataDevolvido[2] = 2000;

            this->devolvido = 0;

        }
        Emprestimo(double id, double cpf, double id_livro, int* dataEmprestimo){
            this->id = id;
            this->cpf = cpf;
            this->id_livro = id_livro;
            this->dataEmprestimo[0] = dataEmprestimo[0];
            this->dataEmprestimo[1] = dataEmprestimo[1];
            this->dataEmprestimo[2] = dataEmprestimo[2];

            this->dataDevolucao[0] = dataEmprestimo[0];
            this->dataDevolucao[1] = dataEmprestimo[1]+1;
            this->dataDevolucao[2] = dataEmprestimo[2];
            if( this->dataEmprestimo[1] == 13 ){
                this->dataEmprestimo[1] = 1;
                (this->dataEmprestimo[2])++;
            }

            this->dataDevolvido[0] = 0;
            this->dataDevolvido[1] = 0;
            this->dataDevolvido[2] = 0;

            this->devolvido = 0;

        }
        ~Emprestimo(){

        }
        double getId() const             { return this->id; }
        double getCpf() const            { return this->cpf; }
        double getId_livro() const       { return this->id_livro;}
        int* getDataEmprestimo() {
            return this->dataEmprestimo;
        }
        int* getDataDevolucao(){
            return this->dataDevolucao;
        }
        int* getDataDevolvido(){
            return this->dataDevolvido;
        }
        bool getDevolvido() const { return this->devolvido; }

        //setters
        void setId(double value)            { this->id = value;}
        void setCpf(double value)           { this->cpf = value;}
        void setId_livro(double value)      { this->id_livro = value;}
        void setDataEmprestimo(int dia, int mes, int ano){
            this->dataEmprestimo[0] = dia;
            this->dataEmprestimo[1] = mes;
            this->dataEmprestimo[2] = ano;
        }
        void setDataDevolucao(int dia, int mes, int ano) {
            this->dataDevolucao[0] = dia;
            this->dataDevolucao[1] = mes;
            this->dataDevolucao[2] = ano;
        }
        void setDataDevolvido(int dia, int mes, int ano) {
            this->dataDevolvido[0] = dia;
            this->dataDevolvido[1] = mes;
            this->dataDevolvido[2] = ano;
        }
        void setDevolvido(bool value){
            this->devolvido = value;
        }
        void imprime(){
            cout  << this->getId() << endl;
            cout  << this->getCpf() << endl;
            cout  << this->getId_livro() << endl;
            cout  << this->getDataEmprestimo()[0] << "/" << this->getDataEmprestimo()[1] << "/" << this->getDataEmprestimo()[2] << endl;
            cout  << this->getDataDevolucao()[0] << "/" << this->getDataDevolucao()[1] << "/" << this->getDataDevolucao()[2] << endl;
            cout  << this->getDataDevolvido()[0] << "/" << this->getDataDevolvido()[1] << "/" << this->getDataDevolvido()[2] << endl;
            cout  << this->getDevolvido() << endl;
            cout << "------------------------------------------------" << endl;
        }
    private:
        double id;
        double cpf;
        double id_livro;

        int dataEmprestimo[3];
        int dataDevolucao[3];
        int dataDevolvido[3];

        bool devolvido;

};

#endif // EMPRESTIMO_H
