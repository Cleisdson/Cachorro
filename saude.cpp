#include"saude.h"

#include<iostream>
#include<string>

using namespace std;

Saude::Saude(bool estado){
    this -> estado = false;
}

Saude::~Saude(){
}

Saude::Saude(const Saude &sd){
    estado = sd.estado;
}

void Saude::checkup(){
    estado = true;
}
