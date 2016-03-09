#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal{
	
public:
	
	Animal();
	Animal(int idade, int energia);
	~Animal();
	Animal(const Animal &);
	
	void domestica();
	void mostraStatus() const;
	void brinca();
	void dorme();
	static void mudaNomeAnimal();
	void aloca();
	void guardaPeso();
    
protected:
	
	double *tabelaPeso;
	
	int tam;
	int energia;
	int idade;
	int selvagem;
	int estresse;
	string raca;
	static string nomeAnimal;
	
};

#endif // ANIMAL_H