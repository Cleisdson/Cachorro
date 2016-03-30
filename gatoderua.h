#ifndef GATODERUA_H
#define GATODERUA_H

#include"gato.h"

#include<iostream>
#include<string>

class Gatoderua : public Gato{

public:

    Gatoderua();
    Gatoderua(int habilidade);
    ~Gatoderua();
    Gatoderua(const Gatoderua &);

	virtual void som();
    virtual void brinca();
    virtual void come();
    virtual void dorme();
    virtual void acorda();
    virtual void status();
    virtual void fazerExames();
    
    virtual void atravessaRua();
	virtual void contaVidas();

    void cacaRato();

protected:

    int habilidade;

};

#endif // GATODERUA_H
