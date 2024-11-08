#include <stdio.h>
#include <math.h>

/*9. Leia uma quantidade de chuva dada em polegadas e imprima o equivalente em milímetros
(25,4 mm = 1 polegada).

int main(){
    int chuva, conv;

    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%d: ", &chuva);

    conv = (chuva*25.4);
    printf("A quantidade de chuva em milimetros eh: %d milimetros", conv);
    return 0;
}*/

/*10. O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade
de cada item que você consumiu e calcule a conta final. 
Hambúrguer.... R$ 3,00, 
Cheeseburger.... R$ 2,50
Fritas.... R$ 2,50
Refrigerante.... R$ 1,00

int main(){
    int h, c, f, r;
    float soma;

    printf("Hamburguer.... R$ 3,00, \nCheeseburger.... R$ 2,50\nFritas.... R$ 2,50\nRefrigerante.... R$ 1,00\n\n");
    printf("Digite a quantidade de cada item que voce consumiu: \nHamburguer: ");
    scanf("%d", &h);
    printf("Cheeseburguer: ");
    scanf("%d", &c);
    printf("Fritas: ");
    scanf("%d", &f);
    printf("Refrigerante: ");
    scanf("%d", &r);

    soma = ((3*h)+(2.5*c)+(2.5*f)+(1*r));
    printf("O valor total da sua conta eh: %f reais", soma);

    return 0;
}*/

/*11) Uma companhia de carros paga a seus empregados um salário de R$ 500,00 por mês mais
uma comissão de R$ 50,00 para cada carro vendido e mais 5% do valor da venda. Elabore um
algoritmo para calcular e imprimir o salário do vendedor num dado mês recebendo como dados
de entrada o nome do vendedor, o número de carros vendidos e o valor total das vendas.

int main(){
    char nome[100];
    int numCarros;
    float porcent, valorVenda, salario;

    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarros);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVenda);

    porcent = valorVenda * 0.05;
    salario = 500 + (50 * numCarros) + porcent;

    
    printf("O salaro do vendedor %s\n", nome);
    printf("Sera de: %.2f ", salario);
    return 0;
}*/

/*12) Faça um algoritmo que calcule a área e o perímetro de um triângulo retângulo. As entradas do
programa serão a largura e a altura do triângulo.

int main(){
    float base, altura, area; 
    //float perimetro;

    printf("Digite a altura do triangulo retangulo: ");
    scanf("%f", &altura);
    printf("Digite a largura do triangulo retangulo: ");
    scanf("%f", &base);

    area = alt*base/2;
    printf("A area do triangulo eh: %f ", area);

    return 0;
}*/

/*13) Escreva um algoritmo para ler o número total de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em
relação ao total de eleitores.

int main(){
    int numEleit; 
    float vtBrancos, vtNulos, vtValidos;
    float percBrancos, percNulos, percValidos;

    printf("Digite o numero de eleitores do seu municipio: ");
    scanf("%d", &numEleit);
    printf("Digite o numero de votos brancos: ");
    scanf("%f", &vtBrancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%f", &vtNulos);
    printf("Digite o numero de votos validos: ");
    scanf("%f", &vtValidos);

    percBrancos = (vtBrancos/numEleit)*100;
    percNulos = (vtNulos/numEleit)*100;
    percValidos = (vtValidos/numEleit)*100;

    printf("O percentual de votos brancos foi de: %.2f por cento dos votos \n", percBrancos);
    printf("O percentual de votos nulos foi de: %.2f por cento dos votos \n", percNulos);
    printf("O percentual de votos validos foi de: %.2f por cento dos votos", percValidos);
    return 0;
}*/

/*14) Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de
reajuste. Calcular e escrever o valor do novo salário.

int main(){
    float salario, reajuste, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o percentual do reajuste: ");
    scanf("%f", &reajuste);

    reajuste = reajuste/100;
    novoSalario = salario+(salario*reajuste);

    printf("O novo salario e de: %1.f", novoSalario);

    return 0;
}*/

/*15) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de
fábrica de um carro, calcular e escrever o custo final ao consumidor.*/