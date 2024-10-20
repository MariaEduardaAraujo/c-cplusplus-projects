#include <stdio.h>

/*1) Leia 5 valores para uma variável A. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos foram positivos e quantos foram negativos.

int main(){
    int a[5];
    int tamanho;
    int par = 0, impar = 0, maior = 0, menor = 0;
    
    printf("Digite 5 valores: \n");
    for (int i = 0; i <= 4; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &a[i]);
    }
    
    tamanho = sizeof(a) / sizeof(a[0]);  // Calcula o tamanho do array

    for (int j = 0; j < tamanho; j++){
        if (a[j] > 0){
            maior++;
        }else{
            menor++;
        }if (a[j] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d\n", impar);
    printf("Quantidade de maiores: %d\n", maior);
    printf("Quantidade de menores: %d\n", menor);
    
    return 0;
}*/

/*2) Calcule e mostre a soma dos números pares entre 1 e 100, inclusive.

int main(){
    int soma = 0;

    for (int i = 1; i <= 100; i++){
        if (i % 2 == 0){
            soma = soma + i;
        }
        //Sn = 50⋅(2+100)/2; Sn = 50⋅51 = 2550
    }
    printf("A soma dos numeros pares de 1 a 100 eh: %d", soma);
    return 0;
}*/