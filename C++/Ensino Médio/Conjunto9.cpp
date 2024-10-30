/*
// Programa 33 - calculando media com arreys
#include<iostream>
#include<stdlib.h>

using namespace std;

int main () {
	
	//1) Entrada de 5 números
	double val[4];
	
	for(int i = 0; i<=3; i++){
		cout << "Digite o " << i+1 << " valor: ";
		cin >> val[i];
	}
	
	//2) Calculo da média
	double total = 0;
	
	for (int i2 = 0; i2<=3; i2++){
		total += val[i2]; 	
	}
	
	cout << fixed;
	cout << "A media eh: " << (total/4) << endl;
	
	system("pause");
	return 0;
}

// Programa 34 - arreys bidimencionais
#include<iostream>
#include<stdlib.h>

using namespace std;
	
int main () {	
	
	int tabela[2][2];
	tabela[0][0] = 10;
	tabela[0][1] = 30; // 10, 30
	tabela[1][0] = 20; // 20, 40
	tabela[1][1] = 40;
	
	int tabela2[2][2] = {{10,30},{20,40}};
	
	cout << "{ {" << tabela2[0][0] << ", " << tabela2[0][1] << "}, {" <<
	                 tabela2[1][0] << ", " << tabela2[1][1] << "} } "<< endl;
	
	system("pause");
	return 0;
}

// Programa 35 - laços aninhados
#include<iostream>
#include<stdlib.h>

using namespace std;
	
int main () {	

	for(int x = 0; x<10, x++){
		for(int y = 0; y<10, y++){
		}
	}
	
	system("pause");
	return 0;
}/*Não funciona*/

/*
// Programa 36 - função matricial
#include<iostream>
#include<stdlib.h>

using namespace std;
	
int main () {	
	
	// f(x,y) = (3*(x+1) + (y*y));
	// (0 < x < 9) e (0 < y < 9);
	
	int planilha[10][10] = {};
	
	for (int x = 0; x<10; x++){
		for(int y = 0; y<10; y++){
			planilha[x][y] = (3*(x+1) + (y*y));
			
			string end = (y<9) ? ", ": "\n";		
			cout << planilha[x][y] << end;
		}
	}
	
	cout << planilha[5][5] << endl;
	
	system("pause");
	return 0;
}*/
