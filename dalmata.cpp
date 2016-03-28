#include"dalmata.h"

#include<iostream>
#include<string>

using namespace std;

Dalmata::Dalmata(){
}

Dalmata::Dalmata(int pintas){
    this -> pintas = 10;
}

Dalmata::~Dalmata(){
//    delete [] chanceDoenca;
}

Dalmata::Dalmata(const Dalmata &dal){
    pintas = dal.pintas;
}
/*
void Dalmata::aloca(int tam){
    chanceDoenca = new int[tam];
    chanceDoenca[tam] = 1;
}

void Dalmata::idadeMais(){

    int *aux = new int[tam];

        for(int i = 0; i < tam; i++){
            aux[i] = chanceDoenca[i];
        }

        delete [] chanceDoenca;

    chanceDoenca = new int[++tam];

        for(int i = 0; i < tam-1; i++)
            chanceDoenca[i] = aux[i];

	chanceDoenca[tam-1] = chanceDoenca[tam-2] + 1;

	delete [] aux;
}
*/

void Dalmata::som(){
    cout << "Dalmata esta latindo." << endl;
}

void Dalmata::brinca(){
    cout << "Dalmata esta brincando." << endl;
}

void Dalmata::dorme(){
    cout << "Dalmata esta dormindo." << endl;
}

void Dalmata::caracteristicas(){
    cout << "Cachorro Dalmata" << endl;
}

void Dalmata::fazerExames(){
    if(pesoIdade[idade]*5 > saude)
        estadoSaude = false;
}
