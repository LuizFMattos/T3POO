#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string.h>
#include "data.h"

using namespace std;
class Data;
class Livro{
    public:
        Livro() : adquirido(0,0,0){

        }
        Livro(double id, char* titulo, char* autor, char* editora, int edicao, int dia, int mes, int ano) : adquirido(dia, mes, ano){
            this->id = id;
            strcpy(this->titulo, titulo);
            strcpy(this->autor , autor);
            strcpy(this->editora, editora);
            this->edicao = edicao;
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
        Data getDataAquirido(){
            return this->adquirido;
        }
        void imprime(){
            cout << this->getId() << endl;
            cout << this->getAutor() << endl;
            cout << this->getEdicao() << endl;
            cout << this->getTitulo() << endl;
            cout << "------------" << endl;
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
        void setDataAdquirido(Data d){
            this->adquirido = d;
        }
    private:
        double id;
        char titulo[30];
        char autor[30];
        char editora[30];
        int edicao;
        Data adquirido;
};

#endif // LIVRO_H
