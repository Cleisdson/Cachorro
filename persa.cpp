#include"persa.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Persa::Persa(){
}

Persa::~Persa(){
}

Persa::Persa(const Persa &per){
}

void Persa::fazerExames(){

    int chance;

    srand(time(0));

    chance = rand() % 30 + 1;

    if(chance >= 1 && chance <= 10){
        cout << "Gato nao esta bem de saude" << endl;
		estadoSaude = false;
	}
	else{
        cout << "Gato esta bem de saude" << endl;
		estadoSaude = true;
	}
}

void Persa::raca(){
	
	cout <<  "Raca: Persa." << endl;
	
}

void Persa::nome(){
	
	cout << "Nome: Snow Bell." << endl;
	
}

void Persa::atravessaRua(){
}