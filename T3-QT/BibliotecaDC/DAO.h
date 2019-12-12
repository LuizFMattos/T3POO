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

            ifstream ifs1(nomeArquivo, ios::binary);

            T obj;

            if( !ifs1.is_open() ){ // se o arquivo ainda nao exisir, ele será criado!
                ofstream ofs(nomeArquivo, ios::binary);
                ofs.write(reinterpret_cast<char*>(&obj), sizeof(T));
                ofs.close();
            }
            ifs1.close();

            ifstream ifs(nomeArquivo, ios::binary);
            if( ifs.is_open()){
                while( !ifs.eof() ){
                    ifs.read(reinterpret_cast<char*>(&obj), sizeof (T) );
                    cout << "Lendo do arquivo:" << endl;
                    obj.imprime();
                    this->objetos.push_back(obj);
                }
            }else{
                cout << "Erro na abertura do arquivo: ";
                cout << this->nomeArquivo << endl;
            }
            ifs.close();
        }
        ~DAO(){
            ofstream ofs(this->nomeArquivo, ios::binary, ios::trunc);
            if( ofs.is_open() ){
                for( unsigned int i = 0; i < this->objetos.size(); i++){
                    ofs.write(reinterpret_cast<char*>(&this->objetos[i]), sizeof(T));
                    cout << "Salvando no arquivo:" << endl;
                    this->objetos[i].imprime();
                }
            }else{
                cout << "Erro na abertura do arquivo: ";
                cout << this->nomeArquivo << endl;
            }
            ofs.close();
        }
        int salvar(T obj){
            this->objetos.push_back(obj);
            return 1;
        }
        int editar(double id, T obj){
            for( int i = 0; i < this->objetos.size(); i++){
                if( this->objetos[i].getId() == id ){
                    this->objetos[i] = obj;
                    return 1;
                }
            }
            return 0;
        }
        int excluir(double id){
            for( int i = 0; i < this->objetos.size(); i++){
                if( this->objetos[i].getId() == id ){
                    this->objetos.erase( this->objetos.begin() + i);
                    return 1;
                }
            }
            return 0;
        }
        vector<T> getObjetos(){
            return this->objetos;
        }
        T getObjeto(int id){
            for( int i = 0; i < this->objetos.size(); i++){
                if( this->objetos[i].getId() == id ){
                    return this->objetos[i];
                }
            }
            return NULL;
        }
    private:
        vector<T> objetos;
        int classe;
        char nomeArquivo[20];
};

#endif // DAO_H
