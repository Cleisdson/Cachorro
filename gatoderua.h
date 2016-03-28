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

	virtual void som();
    virtual void brinca();
    virtual void dorme();
    virtual void caracteristicas();
    virtual void fazerExames();

    void fazCarinho();

protected:

    int carinho;

};

#endif // GATODERUA_H
