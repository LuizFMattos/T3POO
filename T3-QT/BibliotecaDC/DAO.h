#ifndef DAO_H
#define DAO_H

#include <vector>
#include <string>
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
            if(classe == PESSOA) this->nomeArquivo = "pessoa.dat";else
            if(classe == LIVRO) this->nomeArquivo = "livro.dat";  else
            if(classe == EMPRESTIMO) this->nomeArquivo = "emprestimo.dat";

            ifstream ifs(nomeArquivo.c_str(), ios::binary);

            T obj;

            if( !ifs.is_open() ){
                ofstream ofs(this->nomeArquivo, ios::binary);
                ofs.close();
            }

            if( ifs.is_open() ){
                while( !ifs.eof() ){
                    ifs.read(reinterpret_cast<char*>(&obj), sizeof (T) );
                    this->objetos.push_back(obj);
                }
            }else{
                ofstream ofs(this->nomeArquivo, ios::binary);
                ofs.close();
                cout << "Erro na abertura do arquivo: " + this->nomeArquivo;
            }
            ifs.close();
        }
        ~DAO(){
            ofstream ofs(this->nomeArquivo, ios::binary);
            if( ofs.is_open() ){
                for( int i = 0; i < this->objetos.size(); i++){
                    ofs.write(reinterpret_cast<char*>(&this->objetos[i]), sizeof(T));
                }
            }else{
                cout << "Erro na abertura do arquivo: " + this->nomeArquivo;
            }

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
        string nomeArquivo;
};

#endif // DAO_H
