#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

Gato::Gato(){
}

Gato::Gato(int vidas, int instinto){
    this -> vidas = 1;
	this -> instinto = 1;
}

Gato::~Gato(){
}

Gato::Gato(const Gato &cat){
    vidas = cat.vidas;
    instinto = cat.instinto;
}

ostream &operator<<(ostream &saida, const Gato &cat){
	saida << "Energia: " << cat.energia << endl;
    saida << "Vidas restantes: " << cat.vidas << endl;
    saida << "Instinto: " << cat.instinto << endl;
    return saida;
}

void Gato::atravessaRua(){
}

void Gato::som(){;
}

void Gato::brinca(){
}

void Gato::come(){
}

void Gato::dorme(){
}

void Gato::acorda(){
}

void Gato::status(){
}

void Gato::fazerExames(){
}

void Gato::contaVidas(){
}
