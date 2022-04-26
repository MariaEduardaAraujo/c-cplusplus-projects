/*
//Sucessor de
#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int num = 0, sucessor = 0;
	cout << "Digite um numero: ";
	cin >> num;
	sucessor = num+1;
	
	cout << "O sucessor de " << num <<" eh: " << sucessor << endl;
	cout << "Soma: " << num+sucessor << endl;
	cout << "Produto: " << num*sucessor << endl;
	cout << "Razao: " << sucessor/num << endl; 
	cout << "Resto: " << sucessor%num << endl;
	
	system("pause");
	return 0;
}

// Operação matemática
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num1 = 0, num2 = 0;
	cout << "Numero 1: ";
	cin >> num1;
	cout << "Numero 2: ";
	cin >> num2;
	
	cout << "Soma: " << num1+num2 << endl;
	
	system("pause");
	return 0;
}

// Média necessária
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int nota = 0, nota2 = 0, nota3 = 0;
	cout << "Nota 1: ";
	cin >> nota;
	cout << "Nota 2: ";
	cin >> nota2;
	cout << "Nota 3: ";
	cin >> nota3;
	double media = (nota+nota2+nota3)/4;
	
	cout << "Media obtida ate o momento: " << media << endl;
	cout << "Media necessaria: " << (24/4)-media<< endl;
	
	system("pause");
	return 0;
}

// Cigarros
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numDeAnos, numDeCigarros, numCigarros; 
	double precoDaCarteira;
	
	cout << "Numero de anos fumando: ";
	cin >> numDeAnos;
	cout << "Numero de cigarros fumados por dia: ";
	cin >> numDeCigarros;
	cout << "Preco da carteira: ";
	cin >> precoDaCarteira;
	cout << "Numero de cigarros em cada carteira: ";
	cin >> numCigarros;
	
	double valorUnitario = numCigarros/precoDaCarteira;
	double anos = numDeCigarros*(numDeAnos*365);
	double gasto = anos*valorUnitario;
	
	cout << "Gastos com cigarros em " << numDeAnos << "anos, eh de:" << gasto << endl;
	
	system("pause");
	return 0;
}*/
