#include "data.h"

#include<iostream>
#include<ctime>

using namespace std;

Data::Data(){

    this -> dia = 0;
    this -> mes = 0;
    this -> ano = 0;
    this -> inicio = time(0);
}

Data::~Data(){
}

Data::Data(const Data &dt){
    dia = dt.dia;
    mes = dt.mes;
    ano = dt.ano;
    inicio = dt.inicio;
}

//////////////////////////////////////////////////////////////

double Data::tempoTotal(double, double){
    return fim - inicio;
}
