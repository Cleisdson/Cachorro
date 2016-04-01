#ifndef SIAMES_H
#define SIAMES_H

#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

class Siames : public Gato{

public:

    Siames();
    Siames(int destreza);
    ~Siames();
    Siames(const Siames &);
	
	virtual void fazerExames();
    virtual void raca();
    virtual void nome();
    
    virtual void atravessaRua();
    
    void sobeTelhado();

protected:

    int destreza;

};

#endif // SIAMES_H
