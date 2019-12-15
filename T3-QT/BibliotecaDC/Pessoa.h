#ifndef PESSOA_H
#define PESSOA_H

#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

class Pessoa{
        public:
                Pessoa(double cpf, char* tipoCadastro, char* nome, char* email, int ra, int penalidade, char* curso, int anoIngresso, vector<int> value) {
                    this->cpf = cpf;
                    strcpy(this->tipoCadastro, tipoCadastro);
                    strcpy(this->nome, nome);
                    strcpy(this->email, email);
                    this->ra = ra;
                    this->penalidade = penalidade;
                    strcpy(this->curso, curso);
                    this->anoIngresso = anoIngresso;
                    ( strcmp(tipoCadastro, "PRF") ? maxLivros = 5 : maxLivros = 3);
                    (value.size() > 0) ? id_livro1 = value[0] : id_livro1 = 0;
                    (value.size() > 1) ? id_livro2 = value[1] : id_livro1 = 0;
                    (value.size() > 2) ? id_livro3 = value[2] : id_livro1 = 0;
                    (value.size() > 3) ? id_livro4 = value[3] : id_livro1 = 0;
                    (value.size() > 4) ? id_livro5 = value[4] : id_livro1 = 0;
                }

                Pessoa(){

                }

                double getId(){ return cpf; }
                char* getTipoCadastro(){ return this->tipoCadastro; }
                char* getNome(){ return this->nome; }
                char* getEmail(){ return this->email; }
                int getRa(){ return ra; }
                int getPenalidade(){ return penalidade; }
                char* getCurso() { return this->curso; }
                int getAnoIngresso() { return anoIngresso; }
                vector<int> getLivros(){
                    vector<int> vec(5);
                    vec.push_back(id_livro1);
                    vec.push_back(id_livro2);
                    vec.push_back(id_livro3);
                    vec.push_back(id_livro4);
                    vec.push_back(id_livro5);
                    return vec;
                }
                int getMaxLivros() { return maxLivros; }
                int getQntLivrosEmprestados(){
                    int cont = 0 ;
                    cont+= id_livro1 > 0;
                    cont+= id_livro2 > 0;
                    cont+= id_livro3 > 0;
                    cont+= id_livro4 > 0;
                    cont+= id_livro5 > 0;
                    return cont;
                }

                void setId(double value) { cpf = value; }
                void setTipoCadastro(char* value) { strcpy( tipoCadastro, value ); }
                void setNome(char* value) { strcpy( nome, value ); }
                void setEmail(char* value) { strcpy( email, value ); }
                void setRa(int value) { ra = value; }
                void setPenalidade(int value) { penalidade = value; }
                void setCurso(char* value) { strcpy( curso , value ); }
                void setAnoIngresso(int value) { anoIngresso = value; }
                void setLivros(vector<int> value){
                    (value.size() > 0) ? id_livro1 = value[0] : id_livro1 = 0;
                    (value.size() > 1) ? id_livro2 = value[1] : id_livro1 = 0;
                    (value.size() > 2) ? id_livro3 = value[2] : id_livro1 = 0;
                    (value.size() > 3) ? id_livro4 = value[3] : id_livro1 = 0;
                    (value.size() > 4) ? id_livro5 = value[4] : id_livro1 = 0;
                }
                void setMaxLivros(int value) { maxLivros = value; }


private:
                double cpf;
                char tipoCadastro[30];
                char nome[50];
                char email[50];
                int ra;
                int penalidade;
                char curso[30];
                int anoIngresso;
                int maxLivros;
                int id_livro1;
                int id_livro2;
                int id_livro3;
                int id_livro4;
                int id_livro5;

};

#endif
