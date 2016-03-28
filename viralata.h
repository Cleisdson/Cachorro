#ifndef VIRALATA_H
#define VIRALATA_H

#include"cachorro.h"

#include<iostream>
#include<string>

using namespace std;

class Viralata : public Cachorro{

public:

    Viralata();
    Viralata(int confianca);
    ~Viralata();
    Viralata(const Viralata &);

    virtual void som();
    virtual void brinca();
    virtual void dorme();
    virtual void caracteristicas();
    virtual void fazerExames();

    void treino();

protected:

    int confianca;

};

#endif // VIRALATA_H
