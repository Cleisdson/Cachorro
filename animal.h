#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal{

public:

    Animal();
    Animal(int tam, int idade, const string &nomeAnimal, int saude, bool estadoSaude);
    virtual ~Animal();
    Animal(const Animal &);

    virtual void som() = 0;
    virtual void brinca() = 0;
    virtual void dorme() = 0;
    virtual void caracteristicas() = 0;
    virtual void fazerExames() = 0;

    void pesoMais();
    void aloca(int);
    void anoMais();

protected:

    int tam;
    int idade;
    double *pesoIdade;
	string nomeAnimal;
    int saude;
	bool estadoSaude;
};

#endif // ANIMAL_H
