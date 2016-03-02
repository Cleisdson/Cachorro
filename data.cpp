#include<iostream>
#include<string.h>

Data::Data(){
    
    this -> dia = 0;
    this -> mes = 0;
    this -> ano = 0;
    this -> inicio = 0;
    
}

Data::~Data(){
}

Data:Data(const Data &dt){
    
    dia = dt.dia;
    mes = dt.mes;
    ano = dt.ano;
    inicio = dt.inicio;
    
}

////////////////////////////////////////////////////////////////////////

double tempoTotal(){
    
    return fim - inicio;
    
}