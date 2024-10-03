/*
// Programa 30 - prcedencia de operadores
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int a = 15, int b = 10, int c = 5;
	int i = a*(b+c);
	
	cout << i << endl;
	
	system("pause");
	return 0;
}

// Programa 31 - associtividade de operadores
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int y = 0;
	y = 3*3+(2+2); // associaçao da esquerda para a direita 
	
	int a = 1, b = 2, c = 3;
	y+=a+=b+=c+=1;
	
	cout << "Valor de y: " << y << endl;
	
	system("pause");
	return 0;
}

// Programa 32 - arrays
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int nums[5];
	nums[0] = 10;
	
	double valores[100];
	valores[50] = 5.55;
	
	system("pause");
	return 0;
} 

// Programa 32.1 - arrays
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int nums[10];
	
	nums[0] = 100;
	nums[1] = 99;
	nums[2] = 98;
	nums[3] = 97;
	nums[4] = 96;
	nums[5] = 95;
	nums[6] = 50;
	nums[7] = 25;
	nums[8] = 10;
	nums[9] = 5;
	
	cout << nums[5]+ nums[9] << endl;
	cout << nums[7] << endl;

	system("pause");
	return 0;
}

// Programa 33 - arrays - definições
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	double preco[10] = {};
		
	preco[0] = 14.75;
	preco[2] = 7.55;
	preco[3] = 1.10;
	preco[7] = 10;
	
//	>14.75			
//	2.66795e-322	
//	>7.55			
//	>1.1			
//	nan				
//	2.10154e-317	
//	4.94066e-324	
//	>10				
//	0				
//	2.66795e-322	
	
	for (int i = 0; i<=9; i++){
		cout << preco[i] << endl;
	}
	
	system("pause");
	return 0;
}*/
