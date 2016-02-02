#include <cstdlib>
#include <iostream>
#include <string>

#include "cachorro.h"

using namespace std;

int main(int argc, char **argv){

	Cachorro c;
    string nome, raca;
    int idade, op;
    bool b = true;

    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a raca: ";
    cin >> raca;
    cout << "Digite a idade: ";
    cin >> idade;
    c.setNome(nome);
    c.setRaca(raca);
    c.setIdade(idade);


while(b != false){

    system("cls");

    cout << "0 - Encerrar" << endl;
    cout << "1 - Brincar" << endl;
    cout << "2 - Ver dados" << endl;
    cout << "3 - Dormir" << endl;
    cout << "4 - Comer" << endl;
    cout << "Digite sua opcao: ";
    cin >> op;

    switch(op){
    case 0:
        b = false;
        break;
    case 1:
        c.brincar();
        break;
    case 2:
        c.mostrarDados();
        break;
    case 3:
        c.dormir();
        break;
    default:
        cout << "Opcao invalida." << endl;
    }
}
//    c.brincar();

//	c.mostrarDados();

	return 0;
}
