#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include"cachorro.h"

#include<iostream>
#include<string.h>

using namespace std;

class Campeonato{

public:

    Campeonato();
    Campeonato(bool resultado, int nivel, int esforco);
    ~Campeonato();
    Campeonato(const Campeonato&);

    void provas();
    void primeiroPremio();      //ALOCAR VETOR PREMIO
    void ganha();               //ADICIONAR AO VETOR PREMIO

private:

    int qtdPremios;     //TOTAL DE PREMIOS GANHOS
    string *premiosPtr = new string[qtdPremios];
    bool resultado;     //GANHOU OU PERDEU A PROVA
    int nivel;      //A CADA 10, CACHORRO GANHA 1 TROFEU
    int esforco;

};

#endif // CAMPEONATO_H