#ifndef SAUDE_H
#define SAUDE_H

#include"cachorro.h"
#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

class Saude : public Cachorro, public Gato{

public:

    Saude();
    Saude(bool estado);
    ~Saude();
    Saude(const Saude &);

    void checkup();

protected:

    bool estado;

};

#endif // SAUDE_H
