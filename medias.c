/****************************************************************************
Exercício Introdutorio.

Objetivo: Escreva um programa em C que, recebendo quatro médias bimestrais, 
calcule a média ponderada anual, sabendo que o 1o bimestre tem peso 1, o 2o 
bimestre tem peso 2, o 3o bimestre tem peso 3 e o 4o bimestre tem peso 4.
****************************************************************************/

#include <stdio.h>

int main(void){
    float m1, m2, m3, m4;
    float mediag;

    printf("Digite a media do primeiro bimestre: ");
    scanf("%f", &m1);
    printf("Digite a media do segundo bimestre: ");
    scanf("%f", &m2);
    printf("Digite a media do terceiro bimestre: ");
    scanf("%f", &m3);
    printf("Digite a media do quarto bimestre: ");
    scanf("%f", &m4);

    mediag = (m1 + 2*m2 + 3*m3 + 4*m4)/10;
    printf("O valor da media geral eh: %.1f", mediag);

    return 0;
}
