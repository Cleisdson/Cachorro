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

    void treino();

protected:

    int confianca;

};

#endif // VIRALATA_H
