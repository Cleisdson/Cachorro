#include"animal.h"

#include<iostream>
#include<string>

using namespace std;

Animal::Animal(const string &nomeAnimal, int energia, int idade, int selvagem, int estresse, int tam, pontos){
	this -> nomeAnimal = "chiforinfola";
	this -> energia = 100;
	this -> idade = 1;
	this -> selvagem = 50;
    this -> estresse = 50;
	this -> tam = 1;
	this -> pontos = 0;
}

Animal::~Animal(){
	delete [] tabelaPeso;
}

Animal::Animal(const Animal &bicho){
	nomeAnimal = bicho.nomeAnimal;
	energia = bicho.energia;
	idade = bicho.idade;
	selvagem = bicho.selvagem;
	estresse = bicho.estresse;
	tam = bicho.tam;
	pontos = bicho.pontos;
}
/*
///////////////////////////////////////////////////////////////
// SOBRECARGA DE OPERADORES

/*
ostream &operator<<(ostream &output, const Animal &bicho){
	output << "Nome do Animal: " << bicho.nomeAnimal << endl;
	output << "Energia: " << bicho.energia << endl;
	output << "Idade: " << bicho.idade << endl;
	output << "Selvageria: " << bicho.selvagem << endl;
	output << "Estresse: " << bicho.estresse << endl;
	output << "Tamanho: " << bicho.tam << endl;
	output << "Pontuacao: " << bicho.pontos << endl;
	return output;
	
}

const Animal& Animal::operator=(const Animal &bicho){
	this -> nomeAnimal = bicho.nomeAnimal;
	this -> energia = bicho.energia;
	this -> idade = bicho.idade;
	this -> selvagem = bicho.selvagem;
	this -> estresse = bicho.estresse;
	this -> tam = bicho.tam;
	this -> pontos = bicho.pontos;
	
}
*/
///////////////////////////////////////////////////////////////
void Animal::domestica(){
	
	selvagem -= 1;
	
}
*/
////////////////////////////////////////////////////////////////

void Animal::brinca(){
	
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
/*
void Animal::dorme(){
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

void Animal::mostraStatus()const{
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

*/