#include <cstdlib>
#include <iostream>
#include <string>

#include "cachorro.h"


using namespace std;

int main(int argc, char **argv){

	Cachorro c;
    string nome, raca;
    int idade, energia, emocao, op;
    bool b = true;

    cout << "Digite o nome: ";
    cin >> nome; 
    cout << "Digite a idade: ";
    cin >> idade;
    
    while(b != false){
        
        cout << "1 - Pitbull" << endl;
        cout << "2 - Labrador" << endl;
        cout << "3 - Vira-lata" << endl;
        cout << "Escolha a raca: ";
        cin >> op;    
        
        
        switch(op){
            case 1:
                raca = "Pitbull";
                energia = 1;
                emocao = 5;
                b = false;
                break;
            case 2:
                raca = "Labrador";
                energia = 2;
                emocao = 8;
                b = false;
                break;
            case 3:
                raca = "Vira-lata";
                energia = 3;
                emocao = 10;
                b = false;
                break;
            default:
                cout << "Raca desconhecida." << endl;
                break;
        }
    }

    c.setNome(nome);
    c.setRaca(raca);
    c.setIdade(idade);
    c.setEnergia(energia);
    c.setEmocao(emocao);

    b = true;

while(b != false){

    system("cls");

    cout << "0 - Encerrar" << endl;
    cout << "1 - Brincar" << endl;
    cout << "2 - Ver dados" << endl;
    cout << "3 - Dormir" << endl;
    cout << "4 - Comer" << endl;
    cout << "5 - Visitar veterinario" << endl;
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
 //   case 3:
  //      c.dormir();
 //       break;
    case 4:
        c.comer();
        break;
    case 5:
        c.diaVacina();
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
