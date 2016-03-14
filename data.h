#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data{

	friend ostream & operator<<(ostream &, const Data &);
    
public:

    Data();
    Data(int dia, int mes, int ano, double inicio);
    ~Data();
    Data(const Data &);
    
    double tempoTotal();

private:

    int dia;
    int mes;
    int ano;
    double inicio;  //INICIO DA EXECUÇÃO
    double fim;     //TEMPO DE EXECUÇÃO ATUAL
    
};

#endif //DATA_H