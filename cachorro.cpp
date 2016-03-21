#include"cachorro.h"

#include<iostream>
#include<string>

using namespace std;

Cachorro::Cachorro(){
}

Cachorro::Cachorro(int faro, int amizade, const string &nomeCachorro, int idadeCachorro){
    this -> faro = 5;
    this -> amizade = 5;
//    this -> nomeCachorro = "Rex";
    this -> idadeCachorro = 1;
}

Cachorro::~Cachorro(){
}

Cachorro::Cachorro(const Cachorro &cao){
    faro = cao.faro;
    amizade = cao.amizade;
//    nomeCachorro = cao.nomeCachorro;
    idadeCachorro = cao.idadeCachorro;
}
/*
string Cachorro::status(){
    return nomeCachorro;
}
*/
void Cachorro::som(){
    cout << "Cachorro esta latindo." << endl;
}

void Cachorro::brinca(){
    cout << "Cachorro esta brincando." << endl;
}

void Cachorro::dorme(){
    cout << "Cachorro esta dormindo." << endl;
}

