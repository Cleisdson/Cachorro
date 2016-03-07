#include"filhote.h"
#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Filhote::Filhote{
    this -> periodo = false;
}

Filhote::~Filhote{
}

Filhote::Filhote(const Filhote &cria){
    periodo = cria.periodo;
}

//////////////////////////////////////////////////////////////////

void idadeFertil(){
    
    (idade >= 2 && estresse <= 20) ? periodo = true : periodo = false;
    
}