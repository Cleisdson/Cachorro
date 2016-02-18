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

    Cachorro(int idade, int energia, double emocao, int saude);
    Cachorro(const Cachorro &);     //CONSTRUTOR DE COPIA
    
 /*   string getNome();
    void setNome(const string &nome);
    int getId();
    void setId(int id);
    string getRaca();
    void setRaca(const string &raca);
*/    int getIdade();
    void setIdade(int idade);
    int getEnergia();
    void setEnergia(int energia);
    int getEmocao();
    void setEmocao(int emocao);
    
 //   void dadosCachorro(const string &nome, const string &raca, int);
	void mostrarStatus()const;
	void brincar();
//    void dormir();
    void comer();
    static void dadosCachorro(/*const string &nome, const string &raca, int*/);

private:

    static string nomeCachorro;
    static string nomeTreinador;
    static string raca;
    static int ultimaDataVac;
	int idade;
    int energia;
    double emocao;
    int saude;
 

};

#endif
