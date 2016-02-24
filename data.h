#ifndef DATA_H
#define DATA_H

#include<iostream>
#include<windows.h>

class Data{

public:
    Data();
    Data(int dia, int mes, int ano, double inicio);
    ~Data();
    Data(const Data&);

    double tempoTotal(double, double);     //TEMPO TOTAL DESDE O INICIO DO PROGRAMA
//    int dataAtual(int, int, int);   //DATA ATUAL
//    int horaAtual(int,int, int);    //HORA ATUAL

private:

    double inicio;  //INICIO DO PROGRAMA
    double fim;     //TEMPO ATUAL DO PROGRAMA

    int dia;
    int mes;
    int ano;
};

#endif