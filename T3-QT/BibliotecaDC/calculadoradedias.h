#ifndef CALCULADORADEDIAS_H
#define CALCULADORADEDIAS_H

#include <string>
#include <time.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isbissexto(int ano); //verificar se o ano e bissexto

int isfebruaryandbissexto(int mes, int ano); //retorna 1 se o mes e fevereiro e esta em um ano bissexto

int converteremdias(int dia, int mes, int ano); //retora o numero de dias apos 1/1/2000

/*int converteremdias2(int v[3]); versao obsoleta por vetor*/

void somardias(int* dia, int* mes, int* ano, int x); //set os parametros da data dia/mes/ano apos x dias

/*void somardias2(int v[3], int soma); versao obsoleta por vetor*/

int diferencadedias(int diaA, int mesA, int anoA, int diaB, int mesB, int anoB); //retorna a diferenca de dias

string diadasemana(int dia, int mes, int ano); //retorna o dia da semana





#endif

