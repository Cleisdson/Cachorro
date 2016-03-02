#include"animal.h"

#include<iostream>
#include<string.h>

using namespace std;

Cachorro::Cachorro(){
    
    this -> faro = 1;
    this -> amizade = 1;
    
}

Cachorro::~Cachorro(){
}
Cachorro::Cachorro(const Cachorro &cao){
    faro = cao.faro;
    amizade = cao.amizade;
}

///////////////////////////////////////////////////////////////////////

void Cachorro::passeio(){
    
    amizade += 1;
    
}

//////////////////////////////////////////////////////////////////

void Cachorro::adestramento(){
    faro += 1;          //MUDAR PARA SELVAGEM -= 1;
}

