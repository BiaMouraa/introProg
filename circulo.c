/****************************************************************************
Exercício Introdutorio.

Objetivo: Implementar um programa que calcula e exibe os valores do raio, da 
área e da circunferência de um círculo. Tais valores devem ser calculados a
partir do diâmetro do círculo, que deve ser lido do teclado
****************************************************************************/

#include <stdio.h>

int main(void){
    float diametro, raio, area, circunferencia;

    printf("Digite o valor do diametro: ");
    scanf("%f", &diametro);

    raio = diametro/2;
    area = 3.14 * (raio*raio);
    circunferencia = 2 * 3.14 * raio;

    printf("O valor do raio eh: %f\n", raio);
    printf("O valor da area eh: %f\n", area);
    printf("O valor da circunferencia eh: %f\n", circunferencia);

    return 0;
}

