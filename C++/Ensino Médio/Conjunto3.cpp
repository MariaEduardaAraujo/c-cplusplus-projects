/*
// Programa 10 - if & else
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int i = 0, i2 =0;
    
    cout << "Valor da variavel i: " << endl;
    cin >> i;
    
    cout << "Valor da variavel i2: " << endl;
    cin >> i2;
    
    cout << "A variavel i vale: " << i << endl;
    cout << "A variavel i2 vale: " << i2 << endl;
    
    if (i == i2)
        cout << "A variavel i eh igual a variavel i2" << endl;
    else
        cout << "As variaveis nao sao iguais" << endl;
    
    system("pause");
    return 0;
}

// Programa 11 - if & else
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
       int valor = 0;
    cout << "Digite um valor: ";
    cin >> valor;
    
    if(valor>50){
        cout << "O valor digitado eh maior do que 50";
    }
    else{
        cout << "o valor digitado eh menor que 50" << endl;
    }

    system("pause");
    return 0;
}

// Programa 12 - if & else
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    double nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;
    cout << "Digite uma nota 1: ";
    cin >> nota1;
    
    cout << "Digite uma nota 2: ";
    cin >> nota2;
    
    cout << "Digite uma nota 3: ";
    cin >> nota3;
    
    cout << "Digite uma nota 4: ";
    cin >> nota4;
    
    double media = (nota1+nota2+nota3+nota4)/4;
    

    if (media >= 7){
        cout << "Aprovado! | " << "Media: " << media << endl;
    }else{
        cout << "Reprovado | " << "Media: " << media << endl;
    }
    system("pause");
    return 0;
}

// Programa 13 - if & else
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    cout << "Digite um numero no intervalo de 45 ate 72: ";
    int i = 0;
    cin >> i;
    
    if (i>=45 && i <=72){
        cout << "Obrigada por informar o numero no intervalo solicitado" << endl;
        if(i == 45 || i == 72)
            cout << "O valor de i eh igual ao valor de algum extremo" << endl;
    }else{
        cout << "O numero digitado nao esta no intervalo solicitado " << endl;
    }
    return 0;
}*/
