#include "Calculadoradedias.h"
#include <iostream>
#include <time.h>
#include <stdio.h>

int base[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //Esse vetor reduzira varias linhas de codigo

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isbissexto(int ano){ //Retorna 1 se for bissexto, 0 para nao.
    ano += 2000;
    if(ano%400 == 0)
        return 1;
    if((ano%4 == 0) && (ano%100 !=0))
        return 1;

    return 0;
}

int isfebruaryandbissexto(int mes, int ano){ //Retorna 1 se e fevereiro e ano bissexto
    if((mes == 2) && isbissexto(ano))
        return 1;
    else
        return 0;
}

int converteremdias(int dia, int mes, int ano){ //Retorna a diferenca de dias entre a data atual e 1/1/2000
    int data[3]; //Uma copia do vetor de dias
    int soma = dia - 1;
    data[1] = mes - 1;
    data[2] = ano - 2000;
    if(data[2] < 0)
        return -1;
    while(data[1] > 0 || data[2] > 0){
        if(data[1] == 0){
            data[1] = 12;
            data[2] --;
        } else{
            soma += (isfebruaryandbissexto(data[1], data[2]) + base[data[1]-- - 1]);
        }
    }
    return soma;
}
/*int converteremdias2(int v[3]){ //Retorna a diferenca de dias entre a data atual e 1/1/2000
    int  mes = v[1] - 1;     //Da linha 16 a 18,
    int ano = v[2] - 2000;
    int soma = v[0] - 1;
    if(ano < 0)
        return -1;
    while(mes > 0 || ano >0){
        switch(mes){
            case(1):
            case(3):
            case(5):
            case(7):
            case(8):
            case(10):
            case(12):
                mes--;
                soma +=31;
            break;
            case(4):
            case(6):
            case(9):
            case(11):
                mes--;
                soma +=30;
            break;
            case(2):
                mes--;
                soma += 28 + isbissexto(ano);
            break;
            case(0):
                mes = 12;
                ano--;
        }
        printf("%d - ", soma);
    }
    return soma;
} */

void somardias(int* dia, int* mes, int* ano, int x){
    while(x >= 31){
        x -= (base[(*mes)-1] + isfebruaryandbissexto(*mes,*ano));
        (*mes)++;
        if(*mes == 13){
            (*ano)++;
            *mes = 1;
        }
    }
    *dia += x;
    while(*dia > base[(*mes)-1] + isfebruaryandbissexto(*mes,*ano)){
        *dia -= base[(*mes)-1] + isfebruaryandbissexto(*mes,*ano);
        (*mes)++;
        if(*mes == 13){
            *mes = 1;
            (*ano)++;
        }
    }
}

/*void somardias2(int v[3], int copia){ //Dado uma data e um numero de dias a serem somados, a funcao termina com o vetor armazenando a nova data
    int soma = copia;
    while(soma >= 31){
        switch(v[1]){
            case(1):
            case(3):
            case(5):
            case(7):
            case(8):
            case(10):
                v[1]++;
                soma -= 31;
            break;
            case(4):
            case(6):
            case(9):
            case(11):
                v[1]++;
                soma -=30;
            break;
            case(2):
                v[1]++;
                soma -= (28 + isbissexto(v[2]));
            break;
            case(12):
                v[1] = 1;
                soma -= 31;
                v[2]++;
            break;
        }
    }
    v[0] += soma;
    while(v[0] > (base[v[1]-1] + isfebruaryandbissexto(v[1],v[2]))){
        v[0] -= (base[v[1]-1] + isfebruaryandbissexto(v[1],v[2]));
        v[1]++;
        if(v[1] == 13){
            v[1] = 1;
            v[2]++;
        }
    }
} */

int diferencadedias(int diaA, int mesA, int anoA, int diaB, int mesB, int anoB){
    return converteremdias(diaA,mesA,anoA) - converteremdias(diaB,mesB,anoB);
}

string diadasemana(int dia, int mes, int ano){ // 1/1/2000 - Sabado
    int total = converteremdias(dia,mes,ano);
    string s;
    switch(total%7){
        case(0):
            s = "Sabado";
        break;
        case(1):
            s = "Domingo";
        break;
        case(2):
            s = "Segunda-Feira";
        break;
        case(3):
            s = "Terca-Feira";
        break;
        case(4):
            s = "Quarta-Feira";
        break;
        case(5):
            s = "Quinta-Feirra";
        break;
        case(6):
            s = "Sexta-feira";
        break;
    }
    return s;
}





