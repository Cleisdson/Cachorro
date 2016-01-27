#include<iostream>
#include<string>

using namespace std;

#ifndef CACHORRO_H
#define CACHORRO_H

class Cachorro{

public:

    Cachorro();
    ~Cachorro();
    
    void dormir(int, int);
    void brincar(int, int);
    void comer(int);
    void brigar(int, int);
    void estado(int, int);

private:

    string nome;
    int energia;
    int felicidade;
    int emocao;
    
}


#endif