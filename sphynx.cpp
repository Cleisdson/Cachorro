#include"sphynx.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Sphynx::Sphynx(){
}

Sphynx::~Sphynx(){
}

Sphynx::Sphynx(const Sphynx &sp){
}

void Sphynx::fazerExames(){

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

void Sphynx::raca(){
	
	cout <<  "Raca: Sphynx." << endl;
	
}

void Sphynx::nome(){
	
	cout << "Nome: Salem." << endl;
	
}

void Sphynx::atravessaRua(){
}