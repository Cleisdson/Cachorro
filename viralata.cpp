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

void Viralata::som(){
    cout << "Viralata esta latindo." << endl;
}

void Viralata::brinca(){
    cout << "Viralata esta brincando." << endl;
}

void Viralata::dorme(){
    cout << "Viralata esta dormindo." << endl;
}

void Viralata::caracteristicas(){
    cout << "Cachorro Viralata." << endl;
}

void Viralata::fazerExames(){

}
