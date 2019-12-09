#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include <iostream>

using namespace std;

class Livro{
    public:
        Livro(){
        }
        Livro(double id, string titulo){
            this->id = id;
            this->titulo = titulo;
        }


        //getters
        double getId(){
            return this->id;
        }
        string getTitulo(){
            return this->titulo;
        }


        //setters
        void setId(double id){
            this->id = id;
        }
        void setTitulo(string titulo){
            this->titulo = titulo;
        }
    private:
        double id;
        string titulo;
};


#endif // LIVRO_H
