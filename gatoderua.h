#ifndef GATODERUA_H
#define GATODERUA_H

#include"gato.h"

#include<iostream>
#include<string>

class Gatoderua : public Gato{

public:

    Gatoderua();
    Gatoderua(int carinho);
    ~Gatoderua();
    Gatoderua(const Gatoderua &);

    virtual void fazerExames();
    virtual void raca();
	virtual void nome();
	    
    virtual void atravessaRua();

    void fuga();

protected:

    int carinho;

};

#endif // GATODERUA_H
