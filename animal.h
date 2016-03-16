#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal{
	
//	friend ostream & operator<<(ostream & const Animal &);
	
public:
	
	Animal();
	Animal(const string &nomeAnimal, int energia, int idade, int selvagem, int estresse, int tam, int pontos);
	~Animal();
	Animal(const Animal &);
	
	virtual void domestica() = 0;
//	virtual void mostraStatus() const;
	virtual void brinca() = 0;
	virtual void dorme() = 0;
/*	static void mudaNomeAnimal();
	virtual void aloca();
	virtual void guardaPeso();
 */   
protected:
	
	double *tabelaPeso;
	static string nomeAnimal;
	int energia;
	int idade;
	int selvagem;
	int estresse;
//	string raca;
	int tam;
	int pontos;		//cresce se cuidar bem, decresce se não
};

#endif // ANIMAL_H