#ifndef PESSOA_H
#define PESSOA_H

#include <string.h>
#include <iostream>
#include <vector>
#include "Calculadoradedias.h"
#include <time.h>
#include "Livro.h"

using namespace std;

class Pessoa{
        public:
                Pessoa(double cpf, char* tipoCadastro, char* nome, char* email, int ra, char* curso, int anoIngresso, int dia, int mes, int ano, vector<int> value, int livrosEmprestados) {
                    this->cpf = cpf;
                    strcpy(this->tipoCadastro, tipoCadastro);
                    strcpy(this->nome, nome);
                    strcpy(this->email, email);
                    this->ra = ra;
                    this->diapenalidade = mes; // 1/1/2000 eh o "dia zero"
                    this->mespenalidade = dia;
                    this->anopenalidade = ano;
                    strcpy(this->curso, curso);
                    this->anoIngresso = anoIngresso;
                    ( strcmp(tipoCadastro, "Professor") ? maxLivros = 3 : maxLivros = 5);
                    id_livro1 = value[0];
                    id_livro1 = value[1];
                    id_livro1 = value[2];
                    id_livro1 = value[3];
                    id_livro1 = value[4];
                    this->qntLivros = livrosEmprestados;
                }

                Pessoa(){

                }

                double getId(){ return cpf; }
                char* getTipoCadastro(){ return this->tipoCadastro; }
                char* getNome(){ return this->nome; }
                char* getEmail(){ return this->email; }
                int getRa(){ return ra; }
                char* getCurso() { return this->curso; }
                int getAnoIngresso() { return anoIngresso; }
                vector<Livro> getLivros(){
                    vector<Livro> retorno;
                    DAO<Livro> dl(LIVRO);
                    vector<Livro> todosLivros = dl.getObjetos();
                    for( unsigned int i = 0; i < todosLivros.size(); i ++){
                        if( (todosLivros[i].getId() == id_livro1 && id_livro1 != 0) || (todosLivros[i].getId() == id_livro2 && id_livro2 != 0) || (todosLivros[i].getId() == id_livro3 && id_livro3 != 0) || (todosLivros[i].getId() == id_livro4 && id_livro4 != 0) || (todosLivros[i].getId() == id_livro5 && id_livro5 != 0)){
                            retorno.push_back(todosLivros[i]);
                        }
                    }
                    return retorno;
                }
                int getMaxLivros() { return maxLivros; }
                int getQntLivrosEmprestados(){
                    return this->qntLivros;
                }
                vector<int> getPenalidade(){
                    vector<int> vec;
                    vec.push_back(diapenalidade);
                    vec.push_back(mespenalidade);
                    vec.push_back(anopenalidade);
                    return vec;
                }

                void setId(double value) { cpf = value; }
                void setTipoCadastro(char* value) { strcpy( tipoCadastro, value ); }
                void setNome(char* value) { strcpy( nome, value ); }
                void setEmail(char* value) { strcpy( email, value ); }
                void setRa(int value) { ra = value; }
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
                bool emprestar(double id){ //id do livro
                    time_t rawtime;
                    struct tm * timeinfo;
                    time (&rawtime);
                    timeinfo = localtime (&rawtime);
                    //Verifica se a pessoa possui o maximo de livros emprestados ou se a data de penalidade expirou
                    if(this->qntLivros == this->maxLivros || diferencadedias(timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900, this->diapenalidade, this->mespenalidade, this->anopenalidade) < 0){
                        return false; //emprestimo invalido
                    }
                    this->qntLivros++;
                    cout << qntLivros <<"   " << maxLivros << endl;

                    switch(qntLivros){
                        case(1):
                            id_livro1 = id;
                        break;
                        case(2):
                            id_livro2 = id;
                        break;
                        case(3):
                            id_livro3 = id;
                        break;
                        case(4):
                            id_livro4 = id;
                        break;
                        case(5):
                            id_livro5 = id;
                        break;
                    }
                    return true;
                }

                bool devolver(double id, int diadev, int mesdev, int anodev){ //Id do livro a ser removido e o prazo de devolucao
                    this->qntLivros--;
                    cout << qntLivros <<"   " << maxLivros << endl;
                    if(id_livro1 == id){
                        goto livro1;
                    } else if(id_livro2 == id){
                        goto livro2;
                    } else if(id_livro3 == id){
                        goto livro3;
                    } else if(id_livro4 == id){
                        goto livro4;
                    } else if(id_livro5 == id){
                        goto livro5;
                    } else{
                        return false;
                    }

                    livro1: id_livro1 = id_livro2;
                    livro2: id_livro2 = id_livro3;
                    livro3: id_livro3 = id_livro4;
                    livro4: id_livro4 = id_livro5;
                    livro5: id_livro5 = 0;

                    time_t rawtime;
                    struct tm * timeinfo;
                    time (&rawtime);
                    timeinfo = localtime (&rawtime);
                    int atraso = diferencadedias(timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900, diadev, mesdev, anodev); //Retorna um valor > 0 se a data atual passou a data de devolucao
                    if(atraso > 0){
                        if(diferencadedias(timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900, this->diapenalidade, this->mespenalidade, this->anopenalidade) > 0) { //Se diap/mesp/anop passou, ele seta para o dia da operaco, caso contrario, apenas soma para a penalidade ainda corrente
                        this->diapenalidade = timeinfo->tm_mday;
                        this->mespenalidade = timeinfo->tm_mon+1;
                        this->anopenalidade = timeinfo->tm_year+1900;
                        }
                    somardias(&this->diapenalidade, &this->mespenalidade, &this->anopenalidade, atraso);
                    }
                    return true;


                }




        private:
                double cpf;
                char tipoCadastro[30];
                char nome[50];
                char email[50];
                int ra;
                int diapenalidade;
                int mespenalidade;
                int anopenalidade;
                char curso[30];
                int anoIngresso;
                int maxLivros;
                int qntLivros;
                int id_livro1;
                int id_livro2;
                int id_livro3;
                int id_livro4;
                int id_livro5;

};

#endif
