#ifndef DALMATA_H
#define DALMATA_H

#include"animal.h"

#include<iostream>
#include<string>

class Dalmata : public Cachorro{
		
	friend ostream & operator<<(ostream &, const Dalmata &);
	
public:

    Dalmata();
    Dalmata(int tam, bool doente);
    ~Dalmata();
    Dalmata(const Dalmata &);
    
	
    void aloca();
    void idadeMais();
	void saude();
    void checkup();
    
protected:

    int tam;
    bool doente;
    
    int *chanceDoenca;
        
}

#endif //DALMATA_H