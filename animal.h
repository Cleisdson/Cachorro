#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal{
	
	friend ostream & operator<<(ostream & const Animal &);
	
public:
	
	Animal();
	Animal(const string &nomeAnimal, int energia, int idade, int selvagem, int estresse, int tam, int pontos);
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