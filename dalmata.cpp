#include"cachorro.h"
#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Dalmata::Dalmata(){
    
    this -> saude = 100;
    this -> tam = 1;
    this -> doente = false;
    
}

Dalmata::~Dalmata(){
    delete [] chanceDoenca;
}

Dalmata::Dalmata(const Dalmata &dal){
    saude = dal.saude;
    tam = dal.tam;
    doente = dal.doente;
}

///////////////////////////////////////////////////////////////////////

void Dalmata::aloca(int tam){
    
    chanceDoenca = new int[tam];
    chanceDoenca[tam] = 0.1;
}

////////////////////////////////////////////////////////////////////

void Dalmata::idadeMais(){
 
    int percentDoenca;
    
    int *aux = new int[tam];
	
        for(int i = 0; i < tam; i++){
            aux[i] = chanceDoenca[i];
        }
        
        delete [] chanceDoenca;
	
    chanceDoenca = new int[++tam];
    
        for(int i = 0; i < tam-1; i++)
            chanceDoenca[i] = aux[i];
        
    percentDoenca += 0.1;
    
	chanceDoenca[tam-1] = percentDoenca;
	
	delete [] aux;
	
}
/*
void Dalmata::checkup(){
    if(saude <= 20)
}
*/