#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal{

public:

    Animal();
    Animal(int selvagem);
    ~Animal();
    Animal(const Animal &);

    virtual void som() = 0;
    virtual void brinca() = 0;
    virtual void dorme() = 0;
    virtual string status();

protected:

    int selvagem;
};

#endif // ANIMAL_H

