#ifndef SIAMES_H
#define SIAMES_H

#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

class Siames : public Gato{

public:

    Siames();
    Siames(int habilidade);
    ~Siames();
    Siames(const Siames &);

    void cacaRato();

protected:

    int habilidade;

};

#endif // SIAMES_H
