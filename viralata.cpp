#include"viralata.h"

#include<iostream>
#include<string>

using namespace std;

Viralata::Viralata(int confianca){
    this -> confianca = 1;
}

Viralata::~Viralata(){
}

Viralata::Viralata(const Viralata &vl){
    confianca = vl.confianca;
}

void Viralata::treino(){
    confianca += 1;
}
