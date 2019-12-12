#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string.h>
#include "data.h"

using namespace std;
class Data;
class Livro{
    public:
        Livro(){
            char titulo[30] = "root";
            char autor[30] = "root";
            char editora[30] = "root";
            this->id = 0;
            strcpy(this->titulo, titulo);
            strcpy(this->autor , autor);
            strcpy(this->editora, editora);
            this->edicao = 0;
            this->diaAdquirido = 11;
            this->mesAdquirido = 12;
            this->anoAdquirido = 2019;
        }
        Livro(double id, char* titulo, char* autor, char* editora, int edicao, int dia, int mes, int ano){
            this->id = id;
            strcpy(this->titulo, titulo);
            strcpy(this->autor , autor);
            strcpy(this->editora, editora);
            this->edicao = edicao;
            this->diaAdquirido = dia;
            this->mesAdquirido = mes;
            this->anoAdquirido = ano;
        }

        //getters
        double getId(){
            return this->id;
        }
        string getTitulo(){
            return this->titulo;
        }
        string getAutor(){
            return this->autor;
        }
        string getEditora(){
            return this->editora;
        }
        int getEdicao(){
            return this->edicao;
        }
        int getDiaAdquirido(){
            return this->diaAdquirido;
        }
        int getMesAdquirido(){
            return this->mesAdquirido;
        }
        int getAnoAdquirido(){
            return this->anoAdquirido;
        }
        void imprime(){
            cout << this->getId() << endl;
            cout << this->getTitulo() << endl;
            cout << this->getAutor() << endl;
            cout << this->getEditora() << endl;
            cout << this->getEdicao() << endl;
            cout << this->getDiaAdquirido() << "/" << this->getMesAdquirido() << "/" << this->getAnoAdquirido() << endl;
            cout << "------------------------------------------------" << endl;
        }

        //setters
        void setId(double id){
            this->id = id;
        }
        void setTitulo(char* titulo){
            strcpy(this->titulo, titulo);
        }
        void setAutor(char* a){
            strcpy(this->autor, a);
        }
        void setEditora(char* e){
            strcpy(this->editora, e);
        }
        void setEdicao(int e){
            this->edicao = e;
        }
        void setDataAdquirido(int dia, int mes, int ano){
            this->diaAdquirido = dia;
            this->mesAdquirido = mes;
            this->anoAdquirido = ano;
        }
    private:
        double id;
        char titulo[30];
        char autor[30];
        char editora[30];
        int edicao;
        int diaAdquirido;
        int mesAdquirido;
        int anoAdquirido;
};

#endif // LIVRO_H
