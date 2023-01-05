/****************************************************************************
Exercício Introdutorio.

Objetivo: implementar um programa que calcula e exibe o IMC a partir do peso
e altura de uma pessoa, que devem ser digitados no teclado.
****************************************************************************/

#include <stdio.h>

int main(void){
    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("O valor do imc eh: %f", imc);

    return 0;
}
