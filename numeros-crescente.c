/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa em C que imprima os números inteiros de 1 à 10.
****************************************************************************/  

#include <stdio.h>

int main ()
{
    int i;

    i = 1;

    while (i <= 10) {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;

}
