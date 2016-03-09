#ifndef DOENCA_H
#define DOENCA_H

#include"animal.h"

#include<iostream>
#include<string>

class Doenca : public Dalmata{
    
public:

    Doenca();
    Doenca(int estagio);
    ~Doenca();
    Doenca(const Doenca &);
    
    void efeito();

protected:
    
    int estagio;
    
}

#endif //DOENCA_H