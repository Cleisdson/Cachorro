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
    Gato(int vidas, const string &nomeGato, int idadeGato, int instinto);
    ~Gato();
    Gato(const Gato &);

    void atravessaRua();
    virtual void som();
    virtual void brinca();
    virtual void dorme();

    void print();
//    Gato operator<<(Gato cat);

protected:

    string nomeGato;
    int idadeGato;
    int vidas;
    int instinto;

};
#endif // GATO_H
