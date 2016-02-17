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
    Cachorro(const Cachorro &);     //CONSTRUTOR DE COPIA
    
    string getNome();
    void setNome(const string &nome);
    string getRaca();
    void setRaca(const string &raca);
    int getIdade();
    void setIdade(int idade);
    int getEnergia();
    void setEnergia(int energia);
    int getEmocao();
    void setEmocao(int emocao);
    
    void dadosCachorro(const string &nome, const string &raca, int);
	void mostrarDados()const;
	void mostrarStatus()const;
	void brincar();
//    void dormir();
    void comer();
    void diaVacina();

private:

    string nome;
	string raca;
	int idade;
    int energia;
    int felicidade;
    int emocao;
    int saude;
    static int ultimaDataVac;

};

#endif
