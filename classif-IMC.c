/****************************************************************************
Exercício de Expressões Relacionais, Expressões Lógicas, Desvio Condicional.

Objetivo: Classificação        Valores
            Baixo peso          imc ≤ 18,5
            Normal              18,5 < imc ≤ 25
            Sobrepeso           25 < imc ≤ 30
            Obesidade           imc > 30

Recebendo como entrada o peso e a altura de uma pessoa, construa um programa,
em C, que calcule o IMC e exiba a classificação dessa pessoa segundo a tabela.
****************************************************************************/

#include <stdio.h>

int main (void) {
    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura,2);
    printf("O valor do imc eh: %.1f", imc);

    if (imc > 18.5 && imc <= 30)
        if (imc <= 25)
            printf("O seu indice de massa corporal eh classificado como NORMAL");
        else
            printf("O seu indice de massa corporal eh classificado como SOBREPESO");

    if (imc <= 18.5)
        printf("O seu indice de massa corporal eh classificado como BAIXO PESO");

    if (imc > 30)
        printf("O seu indice de massa corporal eh classificado como OBESIDADE");



return 0;
}
