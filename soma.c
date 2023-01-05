/****************************************************************************
Exercício Introdutorio.

Objetivo: Escreva um programa em C que, efetua a soma de dois numeros inteiros 
digitados pelo usuário.
****************************************************************************/

#include <stdio.h>

int main (void){

    int a, b, soma;

    scanf("%d", &a);
    scanf("%d", &b);

    soma = a + b;

    printf("X = %d\n", soma);

    return 0;
}
