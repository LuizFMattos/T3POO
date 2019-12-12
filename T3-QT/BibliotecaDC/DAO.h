#ifndef DAO_H
#define DAO_H

#include <vector>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

#define PESSOA     0
#define LIVRO      1
#define EMPRESTIMO 2

using namespace std;

template <class T>
class DAO
{
    public:
        DAO(int classe){
            this->classe = classe;
            if(classe == PESSOA)     strcpy( this->nomeArquivo, "pessoa.dat"); else
            if(classe == LIVRO)      strcpy( this->nomeArquivo, "livro.dat"); else
            if(classe == EMPRESTIMO) strcpy( this->nomeArquivo, "emprestimo.dat");

            T obj;

            ifstream ifs1(nomeArquivo, ios::binary);
            if( !ifs1.is_open() ){ // se o arquivo ainda nao exisir, ele será criado!
                ofstream ofs(nomeArquivo, ios::binary);
                ofs.write(reinterpret_cast<char*>(&obj), sizeof(T));//adiciona a "raiz" de id 0
                //para que ele nao seja criado com lixo!
                ofs.close();
            }
            ifs1.close();
        }
        ~DAO(){
        }
        void listar(){
            vector<T> vec = this->getObjetos();
            for( int i = 0; i < vec.size()-1; i++){
                vec[i].imprime();
            }
        }
        int cadastrar(T obj){
            ofstream ofs(nomeArquivo, ios::binary | ios::app);
            if( ofs.is_open()){
                ofs.write(reinterpret_cast<char*>(&obj), sizeof (T) );
            }else{
                cout << "Erro na abertura do arquivo: " << this->nomeArquivo;
            }
            ofs.close();
        }
        int editar( T obj ){
            vector<T> vec;
            vec = this->getObjetos();
            for(int i = 0; i < vec.size() - 1; i++){
                if(vec[i].getId() == obj.getId() ){
                    vec[i] = obj;
                    break;
                }
            }
            ofstream ofs(nomeArquivo, ios::binary | ios::trunc);
            for(int i = 0; i < vec.size() - 1; i++){
                ofs.write(reinterpret_cast<char*>(&vec[i]), sizeof (T) );
            }
        }
        int excluir(double id){
            vector<T> vec;
            vector<T> vecAposExclusao;
            vec = this->getObjetos();
            for(int i = 0; i < vec.size() - 1; i++){
                if(vec[i].getId() != id){
                    vecAposExclusao.push_back(vec[i]);
                }
            }
            ofstream ofs(nomeArquivo, ios::binary | ios::trunc);
            for(int i = 0; i < vecAposExclusao.size(); i++){
                ofs.write(reinterpret_cast<char*>(&vecAposExclusao[i]), sizeof (T) );
            }
        }

        vector<T> getObjetos(){
            vector<T> vec;
            T obj;
            ifstream ifs(nomeArquivo, ios::binary);
            if( ifs.is_open() ){
                while( !ifs.eof() ){
                    ifs.read(reinterpret_cast<char*>(&obj), sizeof (T) );
                    vec.push_back(obj);
                }
                return vec;
            }else{
                cout << "Erro na abertura do arquivo" << endl;
            }
            ifs.close();
        }
        double getNextId(){
            vector<T> vec;
            vec = getObjetos();
            return vec[ vec.size() - 2 ].getId() + 1;
        }
        T getObjeto(int id){
        }
    private:
        vector<T> objetos;
        int classe;
        char nomeArquivo[20];
};

#endif // DAO_H
