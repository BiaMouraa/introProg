/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa que escreve na tela cem vezes, alternadamente, 
cada frase a seguir:
    Só aprende a programar quem escreve programas
    Quem não escreve programas não aprende a programar
****************************************************************************/

#include <stdio.h>

int main (void){
    int i;

    for(i = 1; i <=200; i = i + 1){
        if(i % 2 == 0)
            printf("So aprende a programar quem escreve programas\n");
        else
            printf("Quem nao escreve programas nao aprende a programar\n");
    }

    return 0;
}
