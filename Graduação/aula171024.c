#include <stdio.h>

/*1) Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se
formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser
menor que a soma dos outros 2 lados.

int main(){
    int a, b, c;
    printf("Digite 3 valores: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (a<(b+c) && b<(a+c) && c<(a+b)){
        printf("Esses valores formam um triangulo! \n");
    }else{
        printf("Esses valores nao forma um triangulo! \n");
    }
    return 0;
}*/

/*2) Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja
diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser
apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve ser lido outro
valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser mostrada a
mensagem ‘senha incorreta’. Caso a senha esteja correta, deve ser mostrada a mensagem
‘Acesso permitido’.

int main(){
    int cod = 1234;
    int senha = 9999;
    int novoCod, novaSen;

    printf("Digite o codigo do usuario: ");
    scanf("%d", &novoCod);

    if (novoCod == cod){
        printf("Digite a senha: ");
        scanf("%d", &novaSen);
        if (senha == novaSen){
            printf("Acesso permitido \n");
        }else{
            printf("Senha incorreta! \n");
        }
    }else{
        printf("Usuario invalido! \n");
    }
    
    return 0;
}*/
