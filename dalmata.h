#ifndef DALMATA_H
#define DALMATA_H

#include"cachorro.h"

#include<iostream>
#include<string>

using namespace std;

class Dalmata : public Cachorro{

public:

    Dalmata();
    Dalmata(int pintas);
    ~Dalmata();
    Dalmata(const Dalmata &);

    virtual void som();
    virtual void brinca();
    virtual void dorme();
    virtual void caracteristicas();
    virtual void fazerExames();

 //   void aloca();
 //   void idadeMais();

protected:

    int pintas;
/*
    int tam;
    int *chanceDoenca;
*/
};
#endif // DALMATA_H
