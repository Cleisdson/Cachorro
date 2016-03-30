#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Animal::Animal(){
}

Animal::Animal(int tam, int idade, const string &nomeAnimal, int energia, bool estadoSaude, bool acordado, bool fome){
    this -> tam = 1;
    this -> idade = 1;
    this -> nomeAnimal = "Chiforinfola";
    this -> energia = 100;
    this -> estadoSaude = true;
	this -> acordado = true;
	this -> fome = false;
}

Animal::~Animal(){
    delete [] pesoIdade;
}

Animal::Animal(const Animal &bicho){

    tam = bicho.tam;
    idade = bicho.idade;
    nomeAnimal = bicho.nomeAnimal;
    energia = bicho.energia;
    estadoSaude = bicho.estadoSaude;
	acordado = bicho.acordado;
	fome = bicho.fome;
}

void Animal::aloca(int tam){
    pesoIdade = new double[tam];
    pesoIdade[tam] = 1;
}

void Animal::anoMais(){
    idade += 1;
}

void Animal::pesoMais(){

    double peso;

    double *aux = new double[tam];

        for(int i = 0; i < tam; i++){
            aux[i] = pesoIdade[i];
        }

        delete [] pesoIdade;

    pesoIdade = new double[++tam];

        for(int i = 0; i < tam-1; i++)
            pesoIdade[i] = aux[i];

    cout << "Novo peso do animal: ";
    cin >> peso;

	pesoIdade[tam-1] = peso;

	delete [] aux;

}
