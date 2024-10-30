//Equação de 2º Grau
#include <stdio.h>
#include <stddef.h>
#include <math.h>

int main(){
    int a,b,c,delta,x1,x2;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    delta = pow((b),2) - 4*a*c;

    if (delta<0){
        printf("Nao eh possivel extrair raiz de um delta negativo!");
    }else{
        printf("Delta: %d\n", delta);
        x1 = (-(b) + sqrt(delta))/2*a;
        x2 = (-(b) - sqrt(delta))/2*a;
        printf("Resultado x1: %d\n", x1);
        printf("Resultado x2: %d", x2);
    }
    
    return 0;
}