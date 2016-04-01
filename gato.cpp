#include"gato.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Gato::Gato(){
}

Gato::Gato(int vidas, int instinto){
    this -> vidas = 1;
	this -> instinto = 1;
}

Gato::~Gato(){
}

Gato::Gato(const Gato &cat){
    vidas = cat.vidas;
    instinto = cat.instinto;
}
/*
ostream &operator<<(ostream &saida, const Gato &cat){
	saida << "Energia: " << cat.energia << endl;
    saida << "Vidas restantes: " << cat.vidas << endl;
    saida << "Instinto: " << cat.instinto << endl;
    return saida;
}
*/
void Gato::som(){
	cout << "Gato esta miando." << endl;
}

void Gato::brinca(){
}

void Gato::come(){
	if(fome != true)
        cout << "Gato esta cheio." << endl;
    else{
        cout << "Gato esta comendo." << endl;
        fome = false;
    }
}

void Gato::dorme(){
	if(acordado == false)
        cout << "Gato ja esta dormindo." << endl;
    else{
        cout << "Gato dormiu." << endl;
        acordado = false;
    }
}

void Gato::acorda(){
	if(acordado == true)
        cout << "Gato ja esta acordado." << endl;
    else{
        cout << "Gato acordou." << endl;
        acordado = true;
    }
}

void Gato::fazerExames(){
}

void Gato::raca(){
}

void Gato::nome(){
}

void Gato::atravessaRua(){
	
	srand(time(0));

    int chance;

    cout << "Gato vai tentar atravessar a rua..." << endl;

    chance = rand() % 10 + 1;

    if(chance%2 == 0){
        cout << "Gato foi atropelado." << endl;
        vidas -= 1;
    }
    else
        cout << "Gato atravessou." << endl;
}