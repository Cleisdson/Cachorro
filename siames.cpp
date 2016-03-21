#include"siames.h"

#include<iostream>
#include<string>

using namespace std;

Siames::Siames(int habilidade){
    this -> habilidade = 1;
}

Siames::~Siames(){
}

Siames::Siames(const Siames &si){
    habilidade = si.habilidade;
}

void Siames::cacaRato(){
    habilidade += 1;
}
