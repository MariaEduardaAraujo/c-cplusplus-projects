/*
// Programa 22 - Switch e Case 
#include<iostream>
#include<stdlib.h>

using namespace std;

int main () {
	char c;
	cout << "Por favor, digite uma letra entre ''a' e 'f': ";
	cin >> c;
	
	switch(c){
		case 'A':
		case 'a':
			cout << "Voce digitou a letra 'a' ou 'A' " << endl;
			break;
		case 'B':
		case 'b':
			cout << "Voce digitou a letra 'b' ou 'B' " << endl;
			break;
		case 'C':
		case 'c':
		case 'D':
		case 'd':
		case 'E':
		case 'e':
			cout << "Voce digitou 'c' ou 'C', ou 'd' ou 'D', ou 'e' ou 'E'" << endl;
			break;		
		case 'F':
		case 'f':
			cout << "Voce digitou a letra 'f' ou 'F' " << endl;
			break;
		default:
			cout << "Você não digitou uma letra valida " << endl;
	}
	system("pause");
	return 0;
}

// Programa 23 - depuração I 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int num = 0;
	cout << "Digite um numero de 1 ate 3: ";
	cin >> num;
	
	if (num==1){
		for(int i=0; i<5; i++){
			cout << "A variavel da instrucao for eh: " << i << endl;
		}
	}else{
		if (num==2){
			int i2 = 0;
			while (i2<5){
				i2++;
				cout << "O valor da variavel i2, utlizada no while, eh: " <<i2 << endl;
			}
		}else{
			if(num==3){
				int i3 = 0;
				do{
					i3++;
					cout << "O valor da variavel i3, utlizada no while, eh: " <<i3 << endl;
				}while(i3<5);
			}
		}
	}
	
	system("pause");
	return 0;
	
}
// Programa 24 - blocos de instrução I
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	int num = 10;
	char c = 's';
	
	{
		cout << "Estamos dentro de um outro bloco de instrucao" << endl;
		double dinheiro = 4.99;
		
		cout << "O valor da variavel 'dinheiro' eh:" << dinheiro << endl;
	}
	
	cout << "Informe um numero: ";
	cin >> num;
	
	
	if(num==50){
		cout << "Essa frase foi impressa de um bloco de instrucao IF " << endl;	
	}else{
	
		cout << "Essa frase foi impressa de um bloco de instrucao ELSE " << endl;
		cout << "---------------" << endl;
	}
	system("pause");
	return 0;
}*/
