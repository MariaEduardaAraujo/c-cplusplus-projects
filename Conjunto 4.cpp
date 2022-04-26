/*
// Programa 14
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int x = 20;
    x *= 10;    
    return 0;
}

// Programa 15 - for
#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
    for (int i = 0; i<=10; i++){
        cout << "O valor de i eh igual a: " << i << endl;
	}
    return 0;
}

// Programa 16 - incremento e decremento 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	// Incremento ++
	// Decremento --
	
	// incrementar 
	int i = 0, i2 = 0;
	
	cout << "Operador de incremento" << endl;
	cout << "Valor de i (Pre): " << ++i << endl;
	cout << "Valor de i2 (Pos): " << i2++ << endl;
	cout << "Valor de i2: " << i2 << endl;
	cout << endl;
	
	// decrementar 
	i = 0;
	i2 = 0;
	cout << "Operador de decremento" << endl;
	cout << "Valor de i (Pre): " << --i << endl;
	cout << "Valor de i2 (Pos): " << i2-- << endl;
	cout << "Valor de i2: " << i2 << endl;
	
	system("pause");
	return 0;
}

// Programa 17 - tabuada 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	// 1) Perguntar qual a tabuada para o usuário e armazenar 
	//o valor em uma variável
	int n = 0;
	cout << "Informe a tabuada desejada: ";
	cin >> n;
	
	// 2) Implementar um laço de repetição for
	for(int i = 1; i<=10; i++){
		// 3) Imprimir a tabuada na tela
		cout << i << " x " << n << " = " << i*n << endl;
	}
	
	system("pause");
	return 0;
}

// Programa 18 - while
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	// imprimindo de 0 até 100
	int num = 0;
	while(num <= 100){
		cout << num << endl;
		num += 1; // num = num + 1; ou num++;	
	}
	
	// imprimindo de 99 até 0
	int num2 = 100;
	while(num >= 0){
		cout << num << endl;
		num -= 1; // num = num - 1; ou num--;	
	}
	system("pause");
	return 0;
}*/
