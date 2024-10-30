/*
// Programa 6 - modificadores de tipo
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){

    int a = 0;
    short int b = 0;
    long int c = 0;

    int a2 = 0;

    int b2 = -10;
    unsigned int c2 = -10;

    cout << sizeof (a) << " bytes" << " - " << a2 << endl;

    cout << sizeof (b) << " bytes" << " - " << b2 << endl;

    cout << sizeof (c) << " bytes" << " - " << c2 << endl;

    char caractere = 100;

    unsigned char caractere2 = 247;

    system("pause");
    return 0;
}

// Programa 7 - operações matemáticas
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int x, y;
    x = 3;
    y = 9;

    cout << "O valor de x eh: " << x << endl;
    cout << "O valor de y eh: " << y << endl;
    cout << endl;

    cout << "A soma entre x e y eh: " << x + y << endl;
    cout << "A subtracao entre x e y eh: " << x - y << endl;
    cout << "A multiplicacao entre x e y eh: " << x * y << endl;

    double d = y/x;
    cout << "A divisao entre x e y eh: " << d << endl;

    system("pause");
    return 0;
}

// Programa 8 - calculadora 
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int num1, num2, soma, sub, multi, div;
    
    cout << "Seja bem vindo a nossa primeira calculadora" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;
    
    soma = num1 + num2; 
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    
    cout << "A soma eh: " << soma << endl;
    cout << "A subtracao eh: " << sub << endl;
    cout << "O produto eh: " << multi << endl;
    cout << "A divisao eh: " << div << endl;
    
    system("pause");
    return 0;
}

// Porgrama 9 - modulo
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int num1, num2;
    
    cout << "Num1: " << endl;
    cin >> num1;
    
    cout << "Num2: " << endl;
    cin >> num2;
    
    int div = num1/num2;
    int resto = num1 % num2;
    
    cout << "A divisao de num1 por num2 tem eh igual a: " << div << endl;
    cout << "A divisao de num1 por num2 tem resto igual a: " << resto << endl;
    
    cout << "O modulo de 3 e 2 eh: " << 3%2 << endl;
    cout << "O modulo de 4 e 2 eh: " << 4%2 << endl;
    cout << "O modulo de 5 e 2 eh: " << 5%2 << endl;
    cout << "O modulo de 6 e 2 eh: " << 6%2 << endl;
    
    system("pause");
    return 0;
}*/
