/****************************************************************************
Exercício Introdutorio.

Objetivo: Escreva um programa para ler um valor inteiro correspondendo a uma 
quantia em dinheiro, calcular e exibir quantas cédulas de 100, 50, 20, 10, 5,
2 e 1 real (in memoriam) são necessárias para compor esse valor.
****************************************************************************/

#include <stdio.h>

int main(void){
    int n100, n50, n20, n10, n5, n2, n1;
    int valor;

    printf("Digite a quantia: ");
    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor % 100;
    printf("%d notas de R$100\n", n100);

    n50 = valor / 50;
    valor = valor % 50;
    printf("%d notas de R$50\n", n50);

    n20 = valor / 20;
    valor = valor % 20;
    printf("%d notas de R$20\n", n20);

    n10 = valor / 10;
    valor = valor % 10;
    printf("%d notas de R$10\n", n10);

    n5 = valor / 5;
    valor = valor % 5;
    printf("%d notas de R$5\n", n5);

    n2 = valor / 2;
    valor = valor % 2;
    printf("%d notas de R$2\n", n2);

    n1 = valor / 1;
    valor = valor % 1;
    printf("%d notas de R$1\n", n1);

    return 0;
}
