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

void Siames::som(){
    cout << "Siames esta latindo." << endl;
}

void Siames::brinca(){
    cout << "Siames esta brincando." << endl;
}

void Siames::dorme(){
    cout << "Siames esta dormindo." << endl;
}

void Siames::caracteristicas(){
    cout << "Gato Siames." << endl;
}

void Siames::fazerExames(){

}
