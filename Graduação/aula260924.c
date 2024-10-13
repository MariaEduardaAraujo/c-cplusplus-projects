#include <stdio.h>
#include <math.h>

/*1. Escrever um algoritmo que pergunta um valor em metros e imprime o correspondente em
decímetros, centímetros e milímetros.
int main(){
    int metros, cent, dc, mm;
    
    printf("Digite um valor para ser convertido: ");
    scanf("%d", &metros);

    cent = 100*metros;
    dc = 10*metros;
    mm = 1000*metros;

    printf("Os valores convertidos sao: \n");
    printf("%d decimetros \n", dc);
    printf("%d centimetros \n", cent);
    printf("%d milimetros \n", mm);

    return 0;
}*/

/*2. Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma desses
números.
int main(){
    int a, b, c, d, soma;
    
    printf("Digite numeros para serem somados: \nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    printf("D: ");
    scanf("%d", &d);

    soma = a+b+c+d;
    printf("Soma: %d", soma);

    return 0;
}*/

/*3. Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.

int main(){
    int nota1, nota2, nota3, media;

    printf("Digite tres notas: \nNota 1: ");
    scanf("%d", &nota1);
    printf("Nota 2: ");
    scanf("%d", &nota2);
    printf("Nota 3: ");
    scanf("%d", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("Resultado: %d", media);

    return 0;
}*/

/*4. Faça um algoritmo que receba três notas e seus respectivos pesos, calcule e mostre a
média ponderada dessas notas.

int main(){
    int nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Digite tres notas e seus respectivos pesos: \nNota 1: ");
    scanf("%d", &nota1);
    printf("Peso 1: ");
    scanf("%d", &peso1);
    
    printf("Nota 2: ");
    scanf("%d", &nota2);
    printf("Peso 2: ");
    scanf("%d", &peso2);

    printf("Nota 3: ");
    scanf("%d", &nota3);
    printf("Peso 3: ");
    scanf("%d", &peso3);

    media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/3;
    printf("Resultado: %d", media);

    return 0;
}*/

/*5. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.

int main(){
    int a, pot, cub, rai, raiCub;

    printf("Digite um numero qualquer: ");
    scanf("%d: ", &a);
    if(a > 0){
        pot = pow((a), 2);
        cub = pow((a), 3);
        rai = sqrt(a);
        raiCub = cbrt(a);

        printf("Numero ao quadrado: %d\n", pot);
        printf("Numero ao cubo: %d\n", cub);
        printf("Raiz quadrada do numero: %d\n", rai);
        printf("Raiz cubica do numero: %d\n", raiCub);
    }else{
        printf("Digite um numero maior que ZERO");
    }

    return 0;
}*/

/*6. Faça um programa que leia um valor representando um número de segundos. Em seguida
converta-o para horas, minutos e segundos na forma: 7322 segundos são 2 horas, 2 minutos e 
2 segundos.

int main(){
    int tempo, resSeg, min, h, seg;
    
    printf("Digite um valor em segundos para ser convertido: ");
    scanf("%d:", &tempo);
    
    h = tempo/3600;
    resSeg = tempo % 3600;
    min = resSeg / 60;
    seg = resSeg % 60;

    printf("%d segundos sao ", tempo);
    printf("%d horas, ", h);
    printf("%d minutos e ", min);
    printf("%d segundos", seg);
    return 0;
}*/

/*7. Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o
valor correspondente em graus Celsius.

int main(){
    int fah, cel;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%d:", &fah);

    cel = (fah-32)*5/9;

    printf("A temperatura em graus Celcius eh: %d graus", cel);
    return 0;
}*/