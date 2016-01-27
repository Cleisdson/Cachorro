#include"cachorro.h"
#include<iostream>

using namespace std;

Cachorro::Cachorro(){
    
    felicidade = 100;
    energia = 100;
    nome = {};
    
}

Cachorro::~Cachorro(){
    
}

void Cachorro::dormir(int energia){
    if(energia >= 50){
        cout << nome << " esta muito agitado, brinque com ele." << endl;
    }
    else{
        estado = false;
        cout << nome << " vai dormir." << endl;
        energia = 100;
    }
}

void Cachorro::brincar(int energia){
    
    int op;
    bool b = true;
    
if(b != false){
    cout << nome << " esta muito cansado para brincar." << endl;
else{
        cout << "Comandos para o cachorro: " << endl;
        cout << "0 - Para de brincar" << endl;
        cout << "1 - Pula" << endl;
        cout << "2 - Rola" << endl;
        cout << "3 - Deita" << endl;
        cout << "4 - Finge de morto" << endl;
        cout << "5 - Late" << endl;
        cin(op);
        
        felicidade = felicidade + 10;
        
        system(cls);
        
        if(energia <= 20){
            cout << nome << " esta muito cansado para brincar." << endl;
            b = false;
        }
        else
            switch(op){
                case 0:
                    b = false;
                    break; 
                case 1:
                    cout << nome << " fez acao pular." << endl;
                    energia = energia - 20;
                    break;
                case 2:
                    cout << nome << " fez acao rolar." << endl;
                    energia = energia - 10;
                    break;
                case 3:
                    cout << nome << " fez acao deitar." << endl;
                    energia = energia - 5;
                    break;
                case 4:
                    cout << nome << " fez acao fingir de morto." << endl;
                    break;
                case 5:
                    cout << nome << " fez acao latir." << endl;
                    energia = energia -5;
                    break;
                default: 
                    cout << "Opcao invalida" << endl;
            }
        }
}
}

void Cachorro::comer(int energia){
    
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





}
