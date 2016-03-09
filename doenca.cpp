#include"cachorro.h"
#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Doenca::Doenca(){
    this -> estagio = 0;
}

Doenca::~Doenca(){
}

Doenca::Doenca(const Doenca &doe){
    estagio = doe.estagio;
}

///////////////////////////////////////////////////////////////////////

void Doenca::efeito(){
    energia -= chanceDoenca[idade] * 10;
}
