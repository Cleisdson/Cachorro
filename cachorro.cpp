#include "cachorro.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string Cachorro::nomeTreinador = "Salsicha";
string Cachorro::nomeCachorro = "Scooby";
string Cachorro::raca = "vira-lata";
int Cachorro::ultimaDataVac = 01022015;     //INICIAR VARIAVEL ESTATICA

Cachorro::Cachorro(){
    this -> energia = 100;
	this -> emocao = 5.0;
	this -> idade = 0;
    this -> saude = 100;
}
  
//CONSTRUTOR DE COPIA
  
Cachorro::Cachorro(const Cachorro &cao){
    energia = cao.energia;
    emocao = cao.emocao;
    idade = cao.idade;
    saude = cao.saude;
}
/*
void Cachorro::dadosCachorro(const string &nome,const string &raca, int idade){
	this -> nome = nome;
	this -> raca = raca;
	this -> idade = idade;
}
*/
/*
void Cachorro::mostrarDados()const{
    system("cls");
	cout << "Nome: " << nome << endl;
	cout << "Raca: " << raca << endl;
	cout << "Idade: " << idade << endl;
    system("pause");
}
*/
void Cachorro::mostrarStatus()const{
    cout << "Energia: " << energia << endl;
    cout << "Emocao: " << emocao << endl;
    cout << "Idade: " << idade << endl;
    cout << "Saude: " << saude << endl;
    cout << "Ultima Vacinacao: " << ultimaDataVac << endl;
    system("pause");
}

int Cachorro::getIdade(){
    return idade;
}
void Cachorro::setIdade(int idade){
    this -> idade = idade;
}

int Cachorro::getEnergia(){
    return energia;
}
void Cachorro::setEnergia(int energia){
    this -> energia = energia;
}

int Cachorro::getEmocao(){
    return emocao;
}
void Cachorro::setEmocao(int emocao){
    this -> emocao = emocao;
}
/*
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
*/
void Cachorro::brincar(){

    int op;
    bool b = true;

    system("cls");

while(b != false){
    if(saude <= 20){
        system("cls");
        cout << nomeCachorro << " esta muito cansado para brincar." << endl;
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
                        cout << nomeCachorro << " fez acao pular." << endl;
                        saude = saude - (energia * 10);
                        mostrarStatus();
                        break;
                    case 2:
                        system("cls");
                        cout << nomeCachorro << " fez acao rolar." << endl;
                        saude = saude - (energia * 10);
                        mostrarStatus();
                        break;
                    case 3:
                        system("cls");
                        cout << nomeCachorro << " fez acao deitar." << endl;
                        saude = saude - (energia * 5);
                        mostrarStatus();
                        break;
                    case 4:
                        system("cls");
                        cout << nomeCachorro << " fez acao fingir de morto." << endl;
                        mostrarStatus();
                        break;
                    case 5:
                        system("cls");
                        cout << nomeCachorro << " fez acao latir." << endl;
                        saude = saude - (energia * 5);
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
        cout << nomeCachorro << " esta cheio." << endl;
    }
    else{
        cout << "O que " << nomeCachorro << " vai comer?" << endl;
        cout << "0 - encerrar";
        cout << "1 - racao";
        cout << "2 - carne";
        cout << "3 - frango";
        cout << "4 - comida de cachorro";
        cout << "5 - legumes";
        cout << "6 - peixe";
        cin >> op;
    }
}

//MÉTODO ESTÁTICO

void Cachorro::dadosCachorro(){
    
    string nomeT, nomeC, r;
    bool b = true;
    int op;
    
    while(b != false){
    
        cout << "0 - Voltar ao menu." << endl;
        cout << "1 - Ver dados do cachorro." << endl;
        cout << "2 - Mudar nome do cachorro." << endl;
        cout << "3 - Mudar nome do treinador." << endl; 
        cout << "4 - Mudar raca do cachorro." << endl;
        cout << "O que deseja fazer?" << endl;
        cin >> op;
        
        switch(op){
            case 0:
                b = false;
                break;
            case 1:
                cout << "Nome do cachorro: " << nomeCachorro << endl;
                cout << "Raca do cachorro: " << raca << endl;
                cout << "Nome do treinador: " << nomeTreinador << endl;
                break;
            case 2:
                cout << "Novo nome do treinador: ";
                cin >> nomeT;
                nomeTreinador = nomeT;
                break;
            case 3:
                cout << "Novo nome do cachorro: ";
                cin >> nomeC;
                nomeCachorro = nomeC;
                break;
            case 4:
                cout << "Nova raca: ";
                cin >> r;
                raca = r;
                break;
            default:
                cout << "Opcao desconhecida." << endl;
        }
    }
}



/*
void Cachorro::diaVacina(){
    
    bool b = true;
    int op = 0;
  
    while(b != false){
        cout << nome << " precisa receber a vacina anual." << endl;
        cout << "Deseja vacinar agora? 1 - sim 2 - nao" << endl;
        cin >> op;
        
        switch(op){
            case 1:
                ultimaDataVac = 01022016;
                b = false;
            case 2:
                cout << "Tudo bem, voce quem sabe." << endl;
                b = false;
            default:
                cout << "Opcao desconhecida." << endl;
 
        }
*/  
    /*  
        if(op == 1){
             //           mostrarStatus();
 //           cout << "Ultimo dia de que tomou vacina: " << ultimaDataVac << endl;
        }
        else if(op == 2){
            
 //           mostrarStatus();
 //           cout << "Ultimo dia de que tomou vacina: " << ultimaDataVac << endl;
        }
        else
    */
//    }
//}

//}














