#include "cachorro.h"
#include "campeonato.h"
#include "data.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv){

    Cachorro c;
    Data d;

    int op;
    bool flag = true;

while(flag != false){

    cout << "0 - Encerrar" << endl;
    cout << "1 - Mostrar status" << endl;
    cout << "2 - Brincar" << endl;
    cout << "3 - Dormir" << endl;
    cout << "4 - Mudar dados cachorro" << endl;
    cout << "5 - Ver tempo de jogo" << endl;
    cin >> op;

    switch(op){
    case 0:
        flag = true;
        break;
    case 1:
        c.mostrarStatus();
        break;
    case 2:
        c.brincar();
        break;
    case 3:
        c.dormir();
        break;
    case 4:
        c.mudarDadosCachorro();
        break;
    case 5:
        d.tempoTotal(double, double);
    default:
        cout << "Opcao desconhecida" << endl;
    }
}

return 0;
}