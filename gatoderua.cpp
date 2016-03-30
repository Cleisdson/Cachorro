#include"gatoderua.h"

#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

Gatoderua::Gatoderua(){
}

Gatoderua::Gatoderua(int habilidade){
    this -> habilidade = 10;
}

Gatoderua::~Gatoderua(){
}

Gatoderua::Gatoderua(const Gatoderua &rua){
    habilidade = rua.habilidade;
}

void Gatoderua::som(){
    cout << " faz miau, miau." << endl;
}

void Gatoderua::brinca(){
    cout << " esta brincando." << endl;
}

void Gatoderua::come(){
    if(fome != true)
        cout << "Gato esta cheio." << endl;
    else{
        cout << "Gato esta comendo." << endl;
        fome = false;
    }
}


void Gatoderua::dorme(){
    if(acordado == false)
        cout << "Gato ja esta dormindo." << endl;
    else{
        cout << "Gato dormiu." << endl;
        acordado = false;
    }
}

void Gatoderua::acorda(){
    if(acordado == true)
        cout << "Gato ja esta acordado." << endl;
    else{
        cout << "Gato acordou." << endl;
        acordado = true;
    }
}


void Gatoderua::status(){
    cout << "Gato de Rua." << endl;
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

void Gatoderua::atravessaRua(){

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

void Gatoderua::contaVidas(){
	cout << "Vidas restantes: " << vidas;	
}

//MÉTODO EXCLUSIVO DE GATO DE RUA

void Gatoderua::cacaRato(){

    srand(time(0));

    int chance;

    cout << "Gato viu um rato." << endl;

    chance = rand() % 50 + 1;

    if(chance >= 1 && chance <= habilidade){
        cout << "Gato pegou o rato." << endl;
        habilidade += 1;
    }
    else
        cout << "Gato nao conseguiu pegar o rato." << endl;

}
