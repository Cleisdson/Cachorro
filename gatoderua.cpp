#include"gatoderua.h"

#include<iostream>
#include<string>

using namespace std;

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
