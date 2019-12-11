#ifndef DATA_H
#define DATA_H

class Data {
public:
    Data(int dia, int mes, int ano){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }
    virtual ~Data(){

    }
    int compare(Data data){
        if (this->ano != data.ano) {
            return this->ano - data.ano;
        } else if (this->mes != data.mes) {
            return this->mes - data.mes;
        } else {
            return this->dia - data.dia;
        }
    }
private:
    int dia;
    int mes;
    int ano;
};

#endif /* DATA_H */
