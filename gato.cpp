#include"gato.h"
#include"animal.h"

#include<iostream>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Gato::Gato(){
    
    this -> instinto = 1;
    this -> vidas = 9;
    
}

Gato::~Gato(){
}

Gato::Gato(const Gato &bichano){

    instinto = bichano.instinto;
    vidas = bichano.vidas;

}

//////////////////////////////////////////////////////////////////

void Gato::caca(){
    
    instinto += 1;
    energia -= 10;  //HERANÇA ANIMAL
    
}

void Gato::subirTelhado(){
	
	srand(time(0))
	
	int chance;
	
	chance = rand() % 10 + 1;
	
	if(chance % 2 == 0){
		vidas -= 1;
		cout << nomeAnimal << " tem mais " << vidas << " vidas." << endl;
		pontos -= 1;
	}
}