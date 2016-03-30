#ifndef GATO_H
#define GATO_H

#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

class Gato : public Animal{

    friend ostream & operator<<(ostream &, const Gato&);

public:

    Gato();
    Gato(int vidas, int instinto);
    virtual ~Gato();
    Gato(const Gato &);

    virtual void som();
    virtual void brinca();
    virtual void come();
    virtual void dorme();
    virtual void acorda();
    virtual void status();
    virtual void fazerExames();

    virtual void atravessaRua();
    virtual void contaVidas();

protected:

    int vidas;
    int instinto;

};
#endif // GATO_H
