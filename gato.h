#ifndef GATO_H
#define GATO_H

#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

class Gato : public Animal{
    
//	friend ostream & operator<<(ostream &, const Gato&);
	
public:
    
    Gato();
    Gato(int instinto, int vidas);
    ~Gato();
    Gato(const Gato &);
    const Gatos &operator=()
	
    void caca();
    void subirTelhado();
	void brinca();
    void domestica();
    void dorme();
    
protected:

    int instinto;
    int vidas;
    
};

#endif //GATO_H