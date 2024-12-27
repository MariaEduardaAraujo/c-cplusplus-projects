// Defina um programa em C que crie uma matriz[3][3] de inteiros e preencha com valores digitados pelo 
//usuário. Em seguida, o programa deve imprimir a matriz e a soma das matrizes.

#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int soma = 0;

    for (i = 0; i < 3; i++){ //Percorre a matriz e atribui valores
        for (j = 0; j < 3; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz:\n"); //Imprime a diagonal principal
    for (i = 0; i < 3; i++){
        printf("%d ", matriz[i][i]);
        soma = matriz[i][i] + soma;
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", soma);

    return 0;
}