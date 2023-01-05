/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa em C que imprima os números inteiros de 10 à 1.
****************************************************************************/  

#include <stdio.h>

int main ()
{
    int i;

    i = 10;

    while (i >= 1) {
        printf("%d\n", i);
        i = i - 1;
    }
    return 0;

}
