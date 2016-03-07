#ifndef FILHOTE_H
#define FILHOTE_H

#include "animal.h"

#include<iostream>
#include<string>

using namespace std;

class Filhote :: public Cachorro, public Gato{
    
public:

    Filhote();
    Filhote(bool periodo);
    ~Filhote();
    Filhote(const Filhote &);
    
    void idadeFertil();
    
protected:    
        
    bool periodo;   //VERDADEIRO SE EM IDADE FERTIL
    
    
};

#endif  //FILHOTE_H