#include"cachorro.h"
#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Dalmata::Dalmata(){
    
	this -> tam = 1;
    this -> doente = false;
    
}

Dalmata::~Dalmata(){
    delete [] chanceDoenca;
}

Dalmata::Dalmata(const Dalmata &dal){
    tam = dal.tam;
    doente = dal.doente;
}

///////////////////////////////////////////////////////////////////////

void Dalmata::aloca(int tam){
    
    chanceDoenca = new int[tam];
    chanceDoenca[tam] = 1;
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
        
    percentDoenca += 1;
    
	chanceDoenca[tam-1] = percentDoenca;
	
	delete [] aux;
	
}

void Dalmata::saude(){
	if( energia <= chanceDoenca[idade])
		doente = true;
}

void Dalmata::checkup(){
	if(doente == true){
		pontos -+ 1;
		cout << nomeAnimal << " esta doente." << endl;
	}
	else{
		pontos += 1;
		cout << nomeAnimal << " esta bem." << endl;
	}
}

ostream & operator<<(ostream &output, const Dalmata &aviso){
	
	output << "Seu cachorro esta sendo examinado, aguarde." << aviso.checkup();
	return output;
}

const Dalmata & Dalmata::operator=(const Dalmata &dal){
	static_cast<Animal> (*this) = static_cast<Animal> (dal);
	this -> pontos = dal.pontos;
}