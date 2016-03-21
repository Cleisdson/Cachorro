#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Animal::Animal(){
}

Animal::Animal(int selvagem){
    this -> selvagem = 50;
}

Animal::~Animal(){
}

Animal::Animal(const Animal &bicho){

    selvagem = bicho.selvagem;

}
