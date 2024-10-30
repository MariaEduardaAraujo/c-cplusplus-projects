/*
// Programa 37 - manipulação de planilhas
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	
	//1) Criar uma planilha com valores aleatórios
	double plan[5][6] = {};
	
	for(int x=0; x<5; x++){
		for(int y=0; y<5; y++){
			plan[x][y] = (double) rand() / RAND_MAX;
			
		}
	}
	
	//3) Soma da soma dos valores de cada linha
	double total = 0;
	for(int x=0; x<5; x++){
		for(int y=0; y<5; y++){
			plan[x][5]+= plan[x][y];	
		}
		total += plan[x][5];
	}
		
	//2) Somar os valores de cada linha
	for(int x=0; x<5; x++){
		for(int y=0; y<6; y++){
			string end = (y<4) ? " , " : 
			            (y<5) ? " = ": " \n";		
			cout << plan[x][y] << end;
			
		}
	}
	
	cout << "O valor da soma eh: " << total << endl;
		
	system("pause");
	return 0;
}

// Programa 38 - estruturas - struct
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Pessoa{
	string nome;
	string sobrenome;
	int idade;
	string cpf;
};

int main(){
	
	Pessoa p1, p2;
	p.nome = "Fulano";
	p.sobrenome = "de Tal";
	p.idade = 25;
	p.cpf = "123.456.789-00"
	
	p2.nome = "Fulana";
	p2.sobrenome = "de Tal";
	p2.idade = 24;
	p2.cpf = "122.455.788-36"
	
	system("pause");
	return 0;
}

// Programa 39 - ultilizando struct
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Janela{
	string titulo;
	int left;
	int top;
};

int main(){
	
	Janela j1;
	j1.titulo = "Windows";
	j1.left = 0;
	j1.top = 0;
	
	Janela j2;
	j2.titulo = "Linux";
	j2.left = 250;
	j2.top = 250;
	
	cout << "O titulo eh: " + j2.titulo << endl
		 << "Left: " << j2.left	<< endl
		 << "Top: " << j2.top << endl;
		 
	cout << "O titulo eh: " + j1.titulo << endl
		 << "Left: " << j1.left	<< endl
		 << "Top: " << j1.top << endl;
		
	system("pause");
	return 0;
}*/
