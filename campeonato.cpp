#include"campeonato.h"
#include"cachorro.h"

#include<iostream>
#include<string.h>

using namespace std;

Campeonato::Campeonato(){
    this -> resultado = true;
    this -> qtdPremios = 1;
}

Campeonato::~Campeonato(){
    delete [] premiosPtr;
}

Campeonato::Campeonato(const Campeonato &camp){
    resultado = camp.resultado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Campeonato::provas(Cachorro &c){

    bool flag = true;
    int op;

    while(flag != false){

    cout << "Deseja competir?" << endl;
    cout << "s - sim" << endl;
    cout << "n = nao" << endl;
    cin >> op;

        if(c.mostrarEnergia() <= 20){
            cout << "O cachorro esta muito cansado" << endl;
            flag = false;
        }
        else{
            esforco = 20;
            c.competir(esforco);
            nivel++;
                if(nivel == 10){
                    ganha();
                    nivel = 0;
                }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Campeonato::primeiroPremio(){

    premiosPtr = new string[qtdPremios];

    premiosPtr[qtdPremios] = "Melhor Novato";

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Campeonato::ganha(){

    string nomePremio;

    string *aux = new string[qtdPremios];

        for(int i = 0; i < qtdPremios; i++){
            aux[i] = premiosPtr[i];
        }

        delete [] premiosPtr;

    premiosPtr = new string[++qtdPremios];

        for(int i = 0; i < qtdPremios-1; i++)
            premiosPtr[i] = aux[i];

        cout << "Premio ganho: ";
        cin >> nomePremio;

        premiosPtr[qtdPremios-1] = nomePremio;

        delete [] aux;
}
