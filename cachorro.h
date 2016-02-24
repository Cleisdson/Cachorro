#ifndef CACHORRO_H
#define CACHORRO_H

#include"campeonato.h"

#include<iostream>
#include<string.h>

using namespace std;

class Cachorro{

public:
    Cachorro();     //CONSTRUTOR
    Cachorro(int idade, int energia, int estresse, const string &emailDono, const string &emailProvedor, const string &emailPais);     //CONSTRUTOR
    ~Cachorro();
    Cachorro(const Cachorro &);     //CONSTRUTOR DE CÓPIA

    void mostrarStatus() const;
    void brincar();
    void dormir();
    int competir(int);
    int mostrarEnergia();
    
    
    
    //SOBRECARGA DE OPERADORES
    
    friend ostream &operator<<( ostream &, const Cachorro &);
    friend istream &operator>>( istream &, Cachorro &);
    
    
    
    
    
    static void mudarDadosCachorro();    //MÉTODO ESTÁTICO

private:
    static string nomeCachorro;
    static string racaCachorro;
    static int dataUltVacina;
    string emailDono;
    string emailProvedor;
    string emailPais;
    int idade;
    int energia;
    int estresse;

};

#endif // CACHORRO_H