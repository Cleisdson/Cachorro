#include"gato.h"
#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Gato::Gato(){
    
    this -> instinto = 1;
    this -> vidas = 9;
    
}

Gato::~Gato(){
}

Gato::Gato(const Gato *bichano){

    instinto = bichano.instinto;
    vidas = bichano.vidas;

}

//////////////////////////////////////////////////////////////////

void caca(){
    
    instinto += 1;
    energia -= 10;  //HERANÇA ANIMAL
    
}

