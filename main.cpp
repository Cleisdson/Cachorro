#include"animal.h"
#include"gato.h"
#include"data.h"

#include"gatoderua.h"
#include"siames.h"

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv){
	
    int raca, op;
    bool flag = false;

    vector <Animal*> animais(2);
    vector <Gato*> gatos(2);

    Gatoderua gr;
    Siames s;

    animais[0] = new Gatoderua;
    animais[1] = new Siames;

    gatos[0] = new Gatoderua;
    gatos[1] = new Siames;

while(flag != true){
system("cls");

    cout << "Escolha uma raca de gato:" << endl;
    cout << "0 - Gato de rua" << endl;
    cout << "1 - Siames" << endl;
    cin >> raca;

    if(raca == 0 || raca == 1)
        flag = true;
}

flag = false;

while(flag != true){

	system("cls");
    cout << "Escolha um opcao:" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Gato fazer barulho" << endl;
    cout << "2 - Brincar" << endl;
    cout << "3 - Dormir" << endl;
    cout << "4 - Acordar" << endl;
    cout << "5 - Ver status" << endl;
    cout << "6 - Visitar veterinario" << endl;
    cout << "7 - Atravessar rua" << endl;
    cout << "8 - Vidas restantes" << endl;
    cout << "9 - Habilidades especificas" << endl;
    cin >> op;

        switch(op){

        case 0:
            flag = true;
            break;
        case 1:
        	system("cls");
            animais[raca] -> som();
            getch();
            break;
        case 2:
        	system("cls");
            animais[raca] -> brinca();
			getch();
			break;
        case 3:
        	system("cls");
            animais[raca] -> dorme();
			getch();
			break;
        case 4:
        	system("cls");
            animais[raca] -> acorda();
			getch();
			break;
        case 5:
   			system("cls");
			animais[raca] -> status();
		//	cout << cat;
			getch();
			break;
        case 6:
        	system("cls");
            animais[raca] -> fazerExames();
			getch();
			break;
        case 7:
  			system("cls");
            gatos[raca] -> atravessaRua();
			getch();
			break;
		case 8:
			system("cls");
            gatos[raca] -> contaVidas();
			getch();
			break;
		case 9:
			system("cls");
			
			if(raca == 0){
				for(int i = 0; i < 2; i++){
  	    			Gatoderua *gr = dynamic_cast <Gatoderua *> (gatos[i]);
				if(gr != 0)
					gr -> cacaRato();
  	  	  	    }	
			}
			else{
				for(int i = 0; i < 2; i++){
  	    			Siames *si = dynamic_cast <Siames *> (gatos[i]);
				if(si != 0)
					si -> sobeTelhado();
  	  	  	    }
			}
			
			getch();
			break;
        default:
        	system("cls");
        	cout << "Opcao desconhecida." << endl;
			getch();
        }

}

animais.clear();
gatos.clear();

return 0;

}
