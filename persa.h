#ifndef PERSA_H
#define PERSA_H

#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

class Persa : public Gato{
	
public:
	
	Persa();
	~Persa();
	Persa(const Persa &);
	
	virtual void fazerExames();
    virtual void raca();
	virtual void nome();
	    
    virtual void atravessaRua();
	
};

#endif //PERSA_H