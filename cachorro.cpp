#include "cachorro.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

Cachorro::Cachorro(){
    this -> felicidade = 100;
    this -> energia = 100;
	this -> emocao = 100;
    this -> nome = "Rex";
	this -> raca = "Vira-lata";
	this -> idade = 0;
}

void Cachorro::dados(const string &nome,const string &raca, int idade){
	this -> nome = nome;
	this -> raca = raca;
	this -> idade = idade;
}

void Cachorro::mostrarDados()const{
    system("cls");
	cout << "Nome: " << nome << endl;
	cout << "Raca: " << raca << endl;
	cout << "Idade: " << idade << endl;
    system("pause");
}

void Cachorro::mostrarStatus()const{
    cout << "Felicidade: " << felicidade << endl;
    cout << "Energia: " << energia << endl;
    cout << "Emocao: " << emocao << endl;
    system("pause");
}

string Cachorro::getNome(){
    return nome;
}
void Cachorro::setNome(const string &nome){
    this -> nome = nome;
}

string Cachorro::getRaca(){
    return raca;
}
void Cachorro::setRaca(const string &raca){
    this -> raca = raca;
}

int Cachorro::getIdade(){
    return idade;
}
void Cachorro::setIdade(int idade){
    this -> idade = idade;
}

void Cachorro::dormir(){
    if(energia >= 50){
        system("cls");
        cout << nome << " esta muito agitado, brinque com ele." << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << nome << " vai dormir." << endl;
        energia = 100;
        system("pause");
    }
}

void Cachorro::brincar(){

    int op;
    bool b = true;

    system("cls");

while(b != false){
    if(energia <= 20){
        system("cls");
        cout << nome << " esta muito cansado para brincar." << endl;
        b = false;
        system("pause");
    }
    else{
            system("cls");
            cout << "0 - Para de brincar" << endl;
            cout << "1 - Pula" << endl;
            cout << "2 - Rola" << endl;
            cout << "3 - Deita" << endl;
            cout << "4 - Finge de morto" << endl;
            cout << "5 - Late" << endl;
            cout << "Comando para o cachorro: ";
            cin >> op;

            system("cls");

                switch(op){
                    case 0:
                        b = false;
                        break;
                    case 1:
                        system("cls");
                        cout << nome << " fez acao pular." << endl;
                        energia = energia - 20;
                        mostrarStatus();
                        break;
                    case 2:
                        system("cls");
                        cout << nome << " fez acao rolar." << endl;
                        energia = energia - 10;
                        mostrarStatus();
                        break;
                    case 3:
                        system("cls");
                        cout << nome << " fez acao deitar." << endl;
                        energia = energia - 5;
                        mostrarStatus();
                        break;
                    case 4:
                        system("cls");
                        cout << nome << " fez acao fingir de morto." << endl;
                        mostrarStatus();
                        break;
                    case 5:
                        system("cls");
                        cout << nome << " fez acao latir." << endl;
                        energia = energia - 5;
                        mostrarStatus();
                        break;
                    default:
                        system("cls");
                        cout << "Opcao invalida" << endl;
                        system("pause");
                }
    }
    }
}

void Cachorro::comer(){

    int op;

    if(energia >= 100){
        cout << nome << " esta cheio." << endl;
    }
    else{
        cout << "O que " << nome << " vai comer?" << endl;
        cout << "1 - racao";
        cout << "2 - carne";
        cout << "3 - cebola";
        cout << "4 - não dar comida";
        
        cin >> op;



    }

}
