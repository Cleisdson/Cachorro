#ifndef CACHORRO_H
#define CACHORRO_H

#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

class Cachorro : public Animal{

public:

    Cachorro();
    Cachorro(int faro, int amizade, const string &nomeCachorro, int idadeCachorro);
    ~Cachorro();
    Cachorro(const Cachorro &);

    virtual void som();
    virtual void brinca();
    virtual void dorme();
    virtual string status();

protected:

    static string nomeCachorro;
    int idadeCachorro;
    int faro;
    int amizade;
};

#endif // CACHORRO_H

