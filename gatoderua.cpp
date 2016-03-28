#include"gatoderua.h"

#include<iostream>
#include<string>

using namespace std;
/*
Gatoderua::Gatoderua(){
}
*/

Gatoderua::Gatoderua(int carinho){
    this -> carinho = 1;
}


Gatoderua::~Gatoderua(){
}


Gatoderua::Gatoderua(const Gatoderua &rua){
    carinho = rua.carinho;
}

void Gatoderua::fazCarinho(){
    carinho += 1;
}


void Gatoderua::som(){
    cout << "Gatoderua esta latindo." << endl;
}

void Gatoderua::brinca(){
    cout << "Gatoderua esta brincando." << endl;
}

void Gatoderua::dorme(){
    cout << "Gatoderua esta dormindo." << endl;
}

void Gatoderua::caracteristicas(){
    cout << "Gato de Rua." << endl;
}

void Gatoderua::fazerExames(){

}
