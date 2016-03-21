#include"dalmata.h"

#include<iostream>
#include<string>

using namespace std;

Dalmata::Dalmata(int tam){
    this -> tam = 1;
}

Dalmata::~Dalmata(){
    delete [] chanceDoenca;
}

Dalmata::Dalmata(const Dalmata &dal){
    tam = dal.tam;
}

void Dalmata::aloca(/*int tam*/){
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
