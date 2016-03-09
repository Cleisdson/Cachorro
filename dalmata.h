#ifndef DALMATA_H
#define DALMATA_H

#include"animal.h"

#include<iostream>
#include<string>

class Dalmata : public Cachorro{
    
public:

    Dalmata();
    Dalmata(int saude, int tam, bool doente);
    ~Dalmata();
    Dalmata(const Dalmata &);
    
    void aloca();
    void idadeMais();
//    void checkup();
    
protected:

    int saude;
    int tam;
    bool doente;
    
    int *chanceDoenca;
        
}

#endif //DALMATA_H