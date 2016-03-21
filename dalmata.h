#ifndef DALMATA_H
#define DALMATA_H

#include"cachorro.h"

#include<iostream>
#include<string>

using namespace std;

class Dalmata : public Cachorro{

public:

    Dalmata();
    Dalmata(int tam);
    ~Dalmata();
    Dalmata(const Dalmata &);

    void aloca();
    void idadeMais();

protected:

    int tam;
    int *chanceDoenca;

};
#endif // DALMATA_H
