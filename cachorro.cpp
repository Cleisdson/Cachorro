#include"cachorro.h"
#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Cachorro::Cachorro(){
    
    this -> faro = 1;
    this -> amizade = 1;
	this -> confianca = 1;
    
}

Cachorro::Cachorro(const Cachorro &cao){
    faro = cao.faro;
    amizade = cao.amizade;
	confianca = cao.confianca;
}

Cachorro::~Cachorro()

///////////////////////////////////////////////////////////////////////

void Cachorro::passeio()
const Cachorro & Cachorro::operator=(const Cachorro &cao){
	
	if( confianca < 30)
		amizade += 1;
	else if(confianca >= 30 && confianca < 50)
		amizade += 2;
	else if(confianca >= 50 && confianca < 70)
		amizade += 3;
	else if(confianca >= 70 && confianca < 90)
		amizade += 4;
	else
		amizade += 5;
}

//////////////////////////////////////////////////////////////////
/*
void Cachorro::adestramento(){
    selvagem -= 1;          //HERANÇA DA CLASSE ANIMAL
}
*/
void Cachorro::brinca(){
    
    cout << "Cachorro esta brincando." << endl;
    
}

void Cachorro::domestica(){

    selvagem -= 1;
    
}

void Cachorro::dorme(){
    
    cout << "Cachorro esta dormindo." endl;
    
}
