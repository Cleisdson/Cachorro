#ifndef CACHORRO_H
#define CACHORRO_H

#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

class Cachorro : public Animal{
    
//	friend ostream &operator<<(ostream &, const Cachorro &);
	
public:

    Cachorro();
    Cachorro(int faro, int amizade, int confianca);
    ~Cachorro();
    Cachorro(const Cachorro &);
	const Cachorro &operator=(const Cachorro &);
	
    void passeio();
    void adestramento();
	void visitaVet(Data);
   	void brinca();
    void domestica();
    void dorme();
    
private:
    
    int faro;
    int amizade;
	int confianca;
    Data visitaVet;
	
};

#endif //CACHORRO_H