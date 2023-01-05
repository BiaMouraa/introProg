/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa que imprima todos os números inteiros de -10 a 10.
****************************************************************************/

#include <stdio.h>

int main (void){
    int a, i;

    a = -10;

    while(a <= 10){
        printf("%d\n", a);
        a = a + 1;
    }

    a = -10;

    do{
        printf("%d\n", a);
        a = a + 1;
    }
    while(a <= 10);


    for ( a = -10; a <= 10; a = a + 1){
        printf("%d\n", a);
    }

    return 0;
}
