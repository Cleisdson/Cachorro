#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

Gato::Gato(){
}

Gato::Gato(int vidas, const string &nomeGato, int idadeGato, int instinto){
    this -> vidas = 9;
    this -> nomeGato = "Kitty";
    this -> idadeGato = 0;
    this -> instinto = 1;
}

Gato::~Gato(){
}

Gato::Gato(const Gato &cat){
    vidas = cat.vidas;
    nomeGato = cat.nomeGato;
    idadeGato = cat.idadeGato;
    instinto = cat.instinto;
}

ostream &operator<<(ostream &saida, const Gato &cat){
    saida << "Nome: " << cat.nomeGato << endl;
    saida << "Vidas restantes: " << cat.vidas << endl;

    return saida;
}
/*
const Gato& Gato::operator=(const Gato &cat){
    this -> vidas = cat.vidas;
    this -> nomeGato = cat.nomeGato;
}
*/
void Gato::atravessaRua(){
    cout << "Gato atravessou." << endl;
    vidas -= 1;
}

void Gato::som(){
    cout << "Gato esta miando." << endl;
}

void Gato::brinca(){
    cout << "Gato esta brincando." << endl;
}

void Gato::dorme(){
    cout << "Gato esta dormindo." << endl;
}

