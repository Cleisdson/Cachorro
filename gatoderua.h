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

    void fazCarinho();

protected:

    int carinho;

};

#endif // GATODERUA_H
