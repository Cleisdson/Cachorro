#ifndef GATO_H
#define GATO_H

#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

class Gato : public Animal{

    friend ostream & operator<<(ostream &, const Gato&);

public:
/*
    Gato operator = (Gato cat);
    Gato operator + (Gato cat);


*/



    Gato();
    Gato(int vidas, int instinto);
    ~Gato();
    Gato(const Gato &);

    virtual void som();
    virtual void brinca();
    virtual void dorme();
    virtual void caracteristicas();
    virtual void fazerExames();

    void atravessaRua();

//	friend ostream& operator<<(ostream& saida, const Gato &cat);

protected:

    int vidas;
    int instinto;

};
#endif // GATO_H
