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

	virtual void som();
    virtual void brinca();
    virtual void come();
    virtual void dorme();
    virtual void acorda();
    virtual void status();
    virtual void fazerExames();
    
    virtual void atravessaRua();
	virtual void contaVidas();

    void sobeTelhado();

protected:

    int destreza;

};

#endif // SIAMES_H
