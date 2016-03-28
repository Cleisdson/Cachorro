#include"cachorro.h"

#include<iostream>
#include<string>

using namespace std;

Cachorro::Cachorro(){
}

Cachorro::Cachorro(int faro, int amizade){
    this -> faro = 5;
    this -> amizade = 5;
}

Cachorro::~Cachorro(){
}

Cachorro::Cachorro(const Cachorro &cao){
    faro = cao.faro;
    amizade = cao.amizade;
}
/*
string Cachorro::status(){
    return nomeCachorro;
}
*/

void Cachorro::som(){
    //cout << "Cachorro esta latindo." << endl;
}

void Cachorro::brinca(){
    //cout << "Cachorro esta brincando." << endl;
}

void Cachorro::dorme(){
   // cout << "Cachorro esta dormindo." << endl;
}

void Cachorro::caracteristicas(){
 //   cout << "Especie Cachorro" << endl;
}

void Cachorro::fazerExames(){

}
