#include"animal.h"
#include"gato.h"
#include"data.h"

#include"gatoderua.h"
#include"siames.h"
#include"persa.h"
#include"mainecoon.h"
#include"sphynx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv){
	
    vector <Animal*> animais(5);

    animais[0] = new Gatoderua;
    animais[1] = new Siames;
    animais[2] = new Persa;
    animais[3] = new Mainecoon;
    animais[4] = new Sphynx;

for(int i = 0; i < 5; i++){
	
			animais[i] -> nome();
            animais[i] -> raca();
			animais[i] -> som();
            animais[i] -> brinca();
            animais[i] -> dorme();
            animais[i] -> acorda();
            animais[i] -> fazerExames();
									
Gato *ptr1 = dynamic_cast <Gato *> (animais[i]);
   if(ptr1 != 0)
	   ptr1 -> atravessaRua();	

Gatoderua *ptr2 = dynamic_cast <Gatoderua *> (animais[i]);
   	if(ptr2 != 0)
  		ptr2 -> fuga();			

Siames *ptr3 = dynamic_cast <Siames *> (animais[i]);
	if(ptr3 != 0)
		ptr3 -> sobeTelhado();

cout << endl << endl;
}

animais.clear();

return 0;
}
