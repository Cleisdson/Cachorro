#ifndef MAINECOON_H
#define MAINECOON_H

#include"gato.h"

#include<iostream>
#include<string>

using namespace std;

class Mainecoon : public Gato{
	
public:
	
	Mainecoon();
	~Mainecoon();
	Mainecoon(const Mainecoon &);
	
	virtual void fazerExames();
    virtual void raca();
	virtual void nome();
	    
    virtual void atravessaRua();
	
};
#endif //MAINECOON_H