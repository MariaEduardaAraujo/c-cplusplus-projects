#include <stdio.h>

int main(int argc, char const *argv[]) {
   int a;
   int b;
   
   b = 7;
   a = b;

   printf("%d\n", a);

   return 0;
}

/*
int argc: Conta quantos argumentos foram passados para o programa (incluindo o nome do programa em si).
char **argv: É um array de strings que contém os argumentos passados. argv[0] é o nome do programa, 
e os argumentos subsequentes estão em argv[1], argv[2], etc.
*/ 
/*Para executar em Assembly usar o comando: gcc -S arquivo.c*/