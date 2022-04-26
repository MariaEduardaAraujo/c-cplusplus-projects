/*
// Programa 19 - programa em looping
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i = 0;
	
	while (i<=0){
		cout << i << endl;
	}
	system("pause");
	return 0;
}

// Programa 20 - estrutura Do-while
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i = 10;

	cout << "Looping DO-WHILE" << endl;

	do{
		i++;
		cout << "O valor da variavel i eh: " << i << endl;
	}while(i>=10 && i<=20);
	
	int i2 = 10;
	
	cout << "Looping WHILE" << endl;

	while (i2>=10 && i2<=20){
		i2++;
		cout << "O valor da variavel i2 eh: " << i2 << endl;
		
	}
	system("pause");
	return 0;
}

// Programa 21 - estrutura de seleção switch
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int num = 0;
	cout << "Digite um numero correspondente a um mes do ano: ";
	cin >> num;
	
	switch (num){
		case 1:
			cout << "Janeiro" << endl;
			break;
		case 2:
			cout << "Fevereiro" << endl;
			break;
		case 3:
			cout << "Março" << endl;
			break;
		case 4:
			cout << "Abril" << endl;
			break;
		case 5:
			cout << "Maio" << endl;
			break;
		case 6:
			cout << "Junho" << endl;
			break;
		case 7:
			cout << "Julho" << endl;
			break;
		case 8:
			cout << "Agosto" << endl;
			break;
		case 9:
			cout << "Setembro" << endl;
			break;
		case 10:
			cout << "Outubro" << endl;
			break;
		case 11:
			cout << "Novembro" << endl;
			break;
		case 12:
			cout << "Dezembro" << endl;
			break;
		default: 
			cout << "O valor digitado nao corresponde a um mes do ano" << endl;
	}
	system ("pause");
	return 0;
	
}*/
