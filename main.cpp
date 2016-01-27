#include<iostream>
#include<string>
#include"cachorro.h"

using namespace std;

int main(){

    Cachorro c;
    string str;
    
cout << "Nome do cachorro: ";
getline(cin(std));
//cin >> str;

c.setNome(str);

cout << c.getNome() << endl;

return 0;
}



