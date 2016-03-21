#include"data.h"

#include<iostream>
#include<string>

Data::Data(){

    this -> dia = 0;
    this -> mes = 0;
    this -> ano = 0;
    this -> inicio = 0;
    this -> fim = 10;   //FIM RECEBERÁ VALOR ATUAL DO TEMPO DE EXECUÇÃO DO CODIGO

}

Data::~Data(){
}

Data::Data(const Data &dt){

    dia = dt.dia;
    mes = dt.mes;
    ano = dt.ano;
    inicio = dt.inicio;

}

ostream &operator<<(ostream &saida, const Data &dt){
	saida << "Dia: " << dt.dia << endl;
	saida << "Mes: " << dt.mes << endl;
	saida << "Ano: " << dt.ano << endl;
	saida << "Inicio do Jogo: " << dt.inicio << endl;
}

const Data& Data::operator=(const Data &dt){
	this -> dia = dt.dia;
	this -> mes = dt.mes;
	this -> ano = dt.ano;
	this -> inicio = dt.inicio;
}

////////////////////////////////////////////////////////////////////////

double tempoTotal(){

    return fim - inicio;

}
