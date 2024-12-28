// Defina um programa em C que crie uma matriz[3][3] de inteiros e preencha com valores digitados pelo 
//usuário. Em seguida, o programa deve imprimir a matriz e a soma dos valores da matriz.

#include <stdio.h>

int main(){
    //[Linha][Coluna]
    int matriz1[3][3];
    int i, j, soma = 0;

    for (i = 0; i < 3; i++){ //Percorre a matriz e atribui valores
        for (j = 0; j < 3; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\nMatriz:\n"); //Imprime a matriz
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz1[i][j]);
            soma += matriz1[i][j];            
        }
        printf("\n");
    }

    printf("\nSoma: %d\n", soma);

    return 0;
}