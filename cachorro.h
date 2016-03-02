#ifndef CACHORRO_H
#define CACHORRO_H

#include"animal.h"

#include<iostream>
#include<string.h>

class Cachorro : public Animal{
    
public:

    Cachorro();
    Cachorro(int faro, int amizade);
    ~Cachorro();
    Cachorro(const Cachorro &);
    
    void passeio();
    void adestramento();
    
private:
    
    int faro;
    int amizade;
    
}

#endif //CACHORRO_H