/****************************************************************************
Exercício Introdutorio.

Objetivo: Escreva um programa para ler um valor representando um tempo em 
segundos, calcular e exibir esse mesmo tempo em: hora, minuto e segundo.
****************************************************************************/

#include <stdio.h>

int main(void){
    int seg;
    float h, min;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &seg);

    printf("O tempo em segundos eh: %d \n", seg);
    min = seg / 60;
    printf("O tempo em minutos eh: %.1f \n", min);
    h = min / 60;
    printf("O tempo em horas eh: %.1f \n", h);

    return 0;
}
