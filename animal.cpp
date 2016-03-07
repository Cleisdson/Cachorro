#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Animal::Animal(){
	this -> energia = 100;
	this -> idade = 1;
	this -> selvagem = 50;
    this -> estresse = 50;
	this -> nomeAnimal = "chiforinfola";
	this -> tam = 1;
}

Animal::~Animal(){
	delete [] tabelaPeso;
}

Animal::Animal(const Animal &bicho){
	energia = bicho.energia;
	idade = bicho.idade;
	selvagem = bicho.selvagem;
	estresse = bicho.estresse;
	nomeAnimal = bicho.nomeAnimal;
}

///////////////////////////////////////////////////////////////

void domestica(){
	
	selvagem -= 1;
	
}

////////////////////////////////////////////////////////////////

void brinca(){
	
	int op;
	bool flag = true;
	
    system("cls");

	while(flag != false){
		if(energia <= 20){
			system("cls");
			cout << nomeCachorro << " esta muito cansado para brincar." << endl;
			flag = false;
			system("pause");
		}
		else{
				system("cls");
				cout << "0 - Para de brincar" << endl;
				cout << "1 - Pula" << endl;
				cout << "2 - Rola" << endl;
				cout << "3 - Deita" << endl;
				cout << "4 - Finge de morto" << endl;
				cout << "5 - Late" << endl;
				cout << "Comando para o cachorro: ";
				cin >> op;

				system("cls");

					switch(op){
						case 0:
							flag = false;
							break;
						case 1:
							system("cls");
							cout << nomeCachorro << " fez acao pular." << endl;
							energia = energia - 20;
							mostraStatus();
							break;
						case 2:
							system("cls");
							cout << nomeCachorro << " fez acao rolar." << endl;
							energia = energia - 20;
							mostraStatus();
							break;
						case 3:
							system("cls");
							cout << nomeCachorro << " fez acao deitar." << endl;
							energia = energia - 20;
							mostraStatus();
							break;
						case 4:
							system("cls");
							cout << nomeCachorro << " fez acao fingir de morto." << endl;
							mostraStatus();
							break;
						case 5:
							system("cls");
							cout << nomeCachorro << " fez acao latir." << endl;
							energia = energia - 20;
							mostraStatus();
							break;
						default:
							system("cls");
							cout << "Opcao invalida" << endl;
							system("pause");
					}
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////

void Cachorro::dorme(){
    if(energia >= 50){
        system("cls");
        cout << nomeCachorro << " esta muito agitado, brinque com ele." << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << nomeCachorro << " vai dormir." << endl;
        energia = 100;
        system("pause");
    }
}

////////////////////////////////////////////////////////////////////////////////////////

void Cachorro::mostraStatus()const{
    cout << "Nome: " << nomeCachorro << endl;
    cout << "Idade: " << idade << endl;
    cout << "Energia: " << energia << endl;
    cout << "Estresse: " << estresse << endl;
}

///////////////////////////////////////////////////////////////////////////////////////

void Animal::mudaNomeAnimal(){
	
    cout << "Digite o novo nome do cachorro: ";
    cin >> nomeAnimal;
     
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Animal::aloca(){
	
	tabelaPeso = new double[tam];
	tabelaPeso[tam] = 5.5;
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Animal::guardaPeso(){
	
	double pesoAtual;
	
	double *aux = new double[tam];
		
		for(int i = 0; i < tam; i++){
			aux[i] = tabelaPeso[i]
		}
	
		delete [] tabelaPeso;
	
	tabelaPeso = new double[++tam];
		
		for(int i = 0; i < tam-1; i++)
			tabelaPeso[i] = aux[i];
	
	cout << "Peso atual: ";
	cin >> pesoAtual;
	
	tabelaPeso[tam-1] = pesoAtual;
	
	delete [] aux;
	
}