#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

Gato::Gato(){
}

Gato::Gato(int vidas, int instinto){
    this -> vidas = 9;
	this -> instinto = 1;
}

Gato::~Gato(){
}

Gato::Gato(const Gato &cat){
    vidas = cat.vidas;
    instinto = cat.instinto;
}

ostream &operator<<(ostream &saida, const Gato &cat){
    saida << "Vidas restantes: " << cat.vidas << endl;
    saida << "Instinto: " << cat.instinto << endl;
    return saida;
}

/*
const Gato& Gato::operator=(const Gato &cat){
    this -> vidas = cat.vidas;
    this -> nomeGato = cat.nomeGato;
}
*/
/*
Gato Gato::operator=(Gato cat){
    return Gato(cat.vidas, cat.instinto);
}

*/


void Gato::atravessaRua(){
    cout << "Gato atravessou." << endl;
    vidas -= 1;
}

void Gato::som(){
    //cout << "Gato esta miando." << endl;
}

void Gato::brinca(){
    //cout << "Gato esta brincando." << endl;
}

void Gato::dorme(){
  //  cout << "Gato esta dormindo." << endl;
}

void Gato::caracteristicas(){
//    cout << "Especia Gato." << endl;
}

void Gato::fazerExames(){

}
