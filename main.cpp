#include <cstdlib>
#include <iostream>
#include <string>

#include "cachorro.h"


using namespace std;

int main(int argc, char **argv){

	Cachorro c;
    int op;
    bool b = true;

while(b != false){

    system("cls");

    cout << "0 - Encerrar" << endl;
    cout << "1 - Brincar" << endl;
    cout << "2 - Ver dados" << endl;
    cout << "3 - Dormir" << endl;
    cout << "4 - Comer" << endl;
    cout << "5 - Visitar veterinario / status atual" << endl;
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
        c.dadosCachorro();
        break;
 //   case 3:
  //      c.dormir();
 //       break;
    case 4:
        c.comer();
        break;
    case 5:
        c.mostrarStatus();
//        cout << "Ultimo dia de que tomou vacina: " << ultimaDataVac << endl;
        break;
    default:
        cout << "Opcao invalida." << endl;
    }
}
//    c.brincar();

//	c.mostrarDados();

	return 0;
}
