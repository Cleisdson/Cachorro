#include"gatoderua.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Gatoderua::Gatoderua(){
}

Gatoderua::Gatoderua(int carinho){
    this -> carinho = 10;
}

Gatoderua::~Gatoderua(){
}

Gatoderua::Gatoderua(const Gatoderua &rua){
    carinho = rua.carinho;
}

void Gatoderua::fazerExames(){

    int chance;

    srand(time(0));

    chance = rand() % 30 + 1;

    if(chance >= 1 && chance <= 20){
        cout << "Gato nao esta bem de saude" << endl;
		estadoSaude = false;
	}
	else{
        cout << "Gato esta bem de saude" << endl;
		estadoSaude = true;
	}
}

void Gatoderua::raca(){
	
	cout <<  "Raca: Gato de rua." << endl;
	
}

void Gatoderua::nome(){
	
	cout << "Nome: Manda Chuva." << endl;
	
}

void Gatoderua::atravessaRua(){
}

//MÉTODO EXCLUSIVO DE GATO DE RUA

void Gatoderua::fuga(){

    srand(time(0));

    int chance;

    cout << "Gato foi pra rua..." << endl;

    chance = rand() % 50 + 1;

    if(chance >= 1 && chance <= carinho){
        cout << "Gato nao fugiu." << endl;
        carinho += 1;
    }
    else
        cout << "Gato fugiu." << endl;

}
