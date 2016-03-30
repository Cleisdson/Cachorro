#include"siames.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Siames::Siames(){
}

Siames::Siames(int destreza){
    this -> destreza = 20;
}

Siames::~Siames(){
}

Siames::Siames(const Siames &si){
    destreza = si.destreza;
}

void Siames::som(){
    cout << " faz miau, miau." << endl;
}

void Siames::brinca(){
    cout << " esta brincando." << endl;
}

void Siames::come(){
    if(fome != true)
        cout << "Gato esta cheio." << endl;
    else{
        cout << "Gato esta comendo." << endl;
        fome = false;
    }
}


void Siames::dorme(){
    if(acordado == false)
        cout << "Gato ja esta dormindo." << endl;
    else{
        cout << "Gato dormiu." << endl;
        acordado = false;
    }
}

void Siames::acorda(){
    if(acordado == true)
        cout << "Gato ja esta acordado." << endl;
    else{
        cout << "Gato acordou." << endl;
        acordado = true;
    }
}


void Siames::status(){
    cout << "Gato Siames." << endl;
}

void Siames::fazerExames(){

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

void Siames::atravessaRua(){

    srand(time(0));

    int chance;

    cout << "Gato vai tentar atravessar a rua." << endl;

    chance = rand() % 10 + 1;

    if(chance%2 == 0){
        cout << "Gato foi atropelado." << endl;
        vidas -= 1;
    }
    else
        cout << "Gato atravessou." << endl;
}

void Siames::contaVidas(){
	cout << "Vidas restantes: " << vidas;	
}

//MÉTODO EXCLUSIVO DE GATO SIAMES

void Siames::sobeTelhado(){
	
	srand(time(0));
	
	int chance;
	
	chance = rand() % 50 + 1;
	
	if(/*chance >= 1 && chance <= destreza*/chance > destreza){
		cout << "Gato subiu no telhado." << endl;
        destreza += 1;
    }
    else
        cout << "Gato nao conseguiu subir no telhado." << endl;
}
