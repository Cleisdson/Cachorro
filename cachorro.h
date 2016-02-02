
#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include <string>

using namespace std;

class Cachorro{

public:

    Cachorro();		//CONSTRUTOR
//	~Cachorro();	//DESTRUTOR
    //MÉTODOS
//    void dormir();

//    void comer();

    Cachorro(const string &nome, const string &raca, int idade);
    string getNome();
    void setNome(const string &nome);
    string getRaca();
    void setRaca(const string &raca);
    int getIdade();
    void setIdade(int idade);

    void dados(const string &nome, const string &raca, int);
	void mostrarDados()const;
	void mostrarStatus()const;
	void brincar();
    void dormir();
    void comer();

private:

    string nome;
	string raca;
	int idade;
    int energia;
    int felicidade;
    int emocao;

};

#endif
