#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data{

public:

    Data();	
    Data(int dia, int mes, int ano);
    Data(const Data &);     //CONSTRUTOR DE COPIA
    
    int getDia();
    void setDia(int dia);
    int getMes();
    void setMes(int mes);
    int getAno();
    void setAno(int ano);
    
private:

    int dia;
    int mes;
    int ano;
    
};

#endif
