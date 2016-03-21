#include"animal.h"
#include"cachorro.h"
#include"gato.h"
#include"data.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv){

    vector <Animal*> animais;
    Cachorro c;
    Gato g;

    animais.push_back(&c);
    animais.push_back(&g);

    animais[0] -> som();

    animais[0] -> brinca();

    animais[0] -> dorme();

return 0;
}
