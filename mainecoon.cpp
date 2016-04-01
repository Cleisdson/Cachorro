#include"mainecoon.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Mainecoon::Mainecoon(){
}

Mainecoon::~Mainecoon(){
}

Mainecoon::Mainecoon(const Mainecoon &mai){
}

void Mainecoon::fazerExames(){

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

void Mainecoon::raca(){
	
	cout <<  "Raca: Mainecoon." << endl;
	
}

void Mainecoon::nome(){
	
	cout << "Nome: Tom." << endl;
	
}

void Mainecoon::atravessaRua(){
}