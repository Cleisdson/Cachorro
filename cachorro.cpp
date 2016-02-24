#include "cachorro.h"
#include "campeonato.h"
#include "data.h"

#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

Cachorro::Cachorro(){

    this -> nomeCachorro = "toto";
    this -> idade = 1;
    this -> energia = 100;
    this -> estresse = 0;
    this -> emailDono = "csmalcher";
    this -> emailProvedor = "gmail";
    this -> emailPais = "br";
}

Cachorro::~Cachorro(){
}

Cachorro::Cachorro(const Cachorro &cao){
    nomeCachorro = cao.nomeCachorro;
    idade = cao.idade;
    energia = cao.energia;
    estresse = cao.estresse;
    emailDono = cao.emailDono;
    emailProvedor = cao.emailProvedor;
    emailPais = cao.emailPais;
}

///////////////////////////////////////////////////////////////////////////////////

void Cachorro::mostrarStatus()const{
    cout << "Nome: " << nomeCachorro << endl;
    cout << "Idade: " << idade << endl;
    cout << "Energia: " << energia << endl;
    cout << "Estresse: " << estresse << endl;
}

///////////////////////////////////////////////////////////////////////////////////

void Cachorro::brincar(){

    int op;
    bool flag = true;

    system("cls");

while(flag != false){
    if(energia <= 20){
        system("cls");
        cout << nomeCachorro << " esta muito cansado para brincar." << endl;
        flag = false;
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
                        flag = false;
                        break;
                    case 1:
                        system("cls");
                        cout << nomeCachorro << " fez acao pular." << endl;
                        energia = energia - 20;
                        mostrarStatus();
                        break;
                    case 2:
                        system("cls");
                        cout << nomeCachorro << " fez acao rolar." << endl;
                        energia = energia - 20;
                        mostrarStatus();
                        break;
                    case 3:
                        system("cls");
                        cout << nomeCachorro << " fez acao deitar." << endl;
                        energia = energia - 20;
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
                        energia = energia - 20;
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

///////////////////////////////////////////////////////////////////////////////////

void Cachorro::dormir(){
    if(energia >= 50){
        system("cls");
        cout << nomeCachorro << " esta muito agitado, brinque com ele." << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << nomeCachorro << " vai dormir." << endl;
        energia = 100;
        system("pause");
    }
}

///////////////////////////////////////////////////////////////////////////////////

int Cachorro::competir(int esforco){

    energia -= esforco;
    estresse += 30;

}

///////////////////////////////////////////////////////////////////////////////////

int Cachorro::mostrarEnergia(){
    return energia;
}

///////////////////////////////////////////////////////////////////////////////////

void Cachorro::mudarDadosCachorro(){

    int op;
    bool flag = true;

    while(flag != false){
        cout << "0 - Encerrar" << endl;
        cout << "1 - Mudar nome" << endl;
        cout << "2 - Mudar raca" << endl;
        cin >> op;

        switch(op){
        case 0:
            flag = false;
            break;
        case 1:
            cout << "Digite o novo nome do cachorro: ";
            cin >> nomeCachorro;
            break;
        case 2:
            cout << "Digite a nova raca do cachorro: ";
            cin >> racaCachorro;
            break;
        default:
            cout << "Opcao desconhecida" << endl;
        }
    }
}






ostream &operator<<( ostream &output, const Cachorro &dog){
    
    output << dog.emailDono << "@" << dog.emailProvedor << "." << dog.emailPais;
    return output;
    
}



istream &operator>>( istream &input, Cachorro &dog){
    
    input >> setw(9) >> dog.emailDono;
    input.ignore();     //PULA @
    input >> setw(5) >> dog.emailProvedor;
    input.ignore();     //PULA .
    input >> setw(2) >> dog.emailPais;
    return input;
    
}



Cachorro hound;

cout << "Email do dono: ";
cin >> hound;

cout << endl << "Email digitado: ";
cout << hound << endl;