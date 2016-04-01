#ifndef SPHYNX_H
#define SPHYNX_H

#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

class Sphynx : public Gato{
	
public:
	
	Sphynx();
	~Sphynx();
	Sphynx(const Sphynx &);
		
	virtual void fazerExames();
    virtual void raca();
	virtual void nome();
	    
    virtual void atravessaRua();
	
};
#endif //SPHYNX_H