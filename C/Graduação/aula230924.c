//Programa para mostrar o tamanho dos tipos de variáveis
#include <stdio.h>
#include <stddef.h>

int main(int argc, char const *argv[]){
    printf("Tamanho do tipo char: %zu bytes\n", sizeof(char));
    printf("Tamanho do tipo int: %zu bytes\n", sizeof(int));
    printf("Tamanho do tipo float: %zu bytes\n", sizeof(float));
    printf("Tamanho do tipo double: %zu bytes\n", sizeof(double));
    printf("Tamanho do tipo long: %zu bytes\n", sizeof(long));
    printf("Tamanho do tipo long long: %zu bytes\n", sizeof(long long));
    printf("Tamanho do tipo short: %zu bytes\n", sizeof(short));
    return 0;
}
