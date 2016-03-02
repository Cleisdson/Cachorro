#ifndef GATO_H
#define GATO_H

#include"animal.h"

#include<iostream>
#include<string.h>

using namespace std;

class Gato : public Animal{
    
public:
    
    Gato();
    Gato(int instinto, int vidas);
    ~Gato();
    Gato(const Gato &);
    
    void caca();
    
private:

    int instinto;
    int vidas;
    
}

#endif //GATO_H