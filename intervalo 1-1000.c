/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa que imprima todos os números inteiros do intervalo
[1, 1000] que terminam com o dígito 4 e são múltiplos de 6.
****************************************************************************/

#include <stdio.h>

int main (void){
    int i;

    for(i = 1; i <= 1000; i = i + 1){
        if (i % 10 == 4 && i % 6 == 0){
            printf("%04d\n", i);
        }

    }

    return 0;
}
