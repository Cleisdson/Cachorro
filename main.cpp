#include"animal.h"
#include"cachorro.h"
#include"gato.h"
#include"data.h"

#include"dalmata.h"
#include"viralata.h"
#include"gatoderua.h"
#include"siames.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv){

    int op;

    vector <Animal*> animais(4);
//    Gato g;
//    Cachorro c;
    Dalmata d;
    Viralata v;
    Gatoderua g;
    Siames s;

    animais.push_back(&d);
    animais.push_back(&v);
    animais.push_back(&g);
    animais.push_back(&s);

cout << "Animal: " << endl;
cout << "0 - Cachorro Dalmata" << endl;
cout << "1 - Cachorro Viralata" << endl;
cout << "2 - Gato de Rua" << endl;
cout << "3 - Gato Siames" << endl;
cin >> op;

    animais[op] -> som();
    animais[op] -> brinca();
    animais[op] -> dorme();
    animais[op] -> caracteristicas();
    animais[op] -> fazerExames();

//    cout << g;

for(size_t i = 0; i < animais.size(); i++){
	
	Dalmata *derivedPtr = dynamic_cast<Dalmata*> (animais[i]);
	Viralata *derivedPtr = dynamic_cast<Viralata*> (animais[i]);
	Gatoderua *derivedPtr = dynamic_cast<Gatoderua*> (animais[i]);
	Siames *derivedPtr = dynamic_cast<Siames*> (animais[i]);
	
	if(derivePtr != 0){
		
		int idade = derivedPtr -> idadeMais();
		cout << "Idade: " << idade << endl;
		derivedPtr -> idadeMais(idade + 1);
		cout << "Idade atual: " << derivedPtr -> idadeMais() << endl;
		
	}
	
}

return 0;

}
