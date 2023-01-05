/****************************************************************************
Exercício Expressões Relacionais, Expressões Lógicas, Desvio Condicional.

Objetivo: Recebendo como entrada o sexo e a altura de uma pessoa, construa um 
programa que calcule seu peso ideal, utilizando as seguintes fórmulas: Peso 
ideal para homens: (72.7*h) - 58, peso ideal para mulheres: (62.1*h) - 44.7 
(onde h representa o valor da altura em metros).
****************************************************************************/

#include <stdio.h>

int main()
{
    char sexo;
    float h, peso;
    
    printf("Qual o sexo? Use F para feminino ou M para masculino: ");
    scanf("%c", &sexo);
    printf("Qual a altura?");
    scanf("%f", &h);
    
    if (sexo == 'F'){
        peso = (61.1*h) - 44.7;
        printf("O peso ideal é %.1f", peso);
    }
    if (sexo == 'M'){
        peso = (72.7*h) - 58;
        printf("O peso ideal é %.1f", peso);
    }
}