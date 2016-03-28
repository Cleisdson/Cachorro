#ifndef CACHORRO_H
#define CACHORRO_H

#include"animal.h"

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Cachorro : public Animal{

public:

    Cachorro();
    Cachorro(int faro, int amizade);
    ~Cachorro();
    Cachorro(const Cachorro &);

    virtual void som();
    virtual void brinca();
    virtual void dorme();
    virtual void caracteristicas();
    virtual void fazerExames();

protected:

    int faro;
    int amizade;

};

#endif // CACHORRO_H

