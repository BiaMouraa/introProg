/****************************************************************************
Exercício de Expressões Relacionais, Expressões Lógicas, Desvio Condicional.

Objetivo: Escreva um programa em C que leia três inteiros e informe qual deles
é o valor do maior deles.
****************************************************************************/

#include <stdio.h>

int main (void){
    int n1, n2, n3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    if (n1 > n2){
        if (n1 > n3)
            printf("%d eh o maior valor", n1);
        else
            printf("%d eh o maior valor", n3);
    }else {
        if (n2 > n3)
            printf("%d eh o maior valor", n2);
        else
            printf("%d eh o maior valor", n3);
    }


return 0;
}
