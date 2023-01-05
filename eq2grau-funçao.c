/****************************************************************************
Exercício de Funcoes.

Objetivo: Escreva um programa que calcule as raízes de uma equação do segundo 
grau a partir dos seus coeficientes, que devem ser inseridos pelo usuário, e 
deve informar quando elas não puderem ser calculadas.
****************************************************************************/

#include <stdio.h>
#include <math.h>

float Delta (float a, float b, float c){
    float delta;
    delta = (b*b) - 4 * a * c;
    return delta;
}

float RaizX1 (float a, float b, float delta){
    float x1;
    x1 = (-b + sqrt(delta))/ 2*a;
    return x1;
}

float RaizX2 (float a, float b, float c){
    float x2, delta;
    delta = Delta(a, b, c);
    x2 = (-b - sqrt(delta))/ 2*a;
    return x2;
}

int main()
{
    float a, b, c;
    float delta, x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0){
        printf("Os coeficientes nao formam eq de 2 grau\n");
        return 1;
    }


    delta = Delta(a, b, c);
    if (delta < 0){
        printf("As raizes nao podem ser calculadas\n");
        return 2;
    }

    x1 = RaizX1(a, b, delta);
    x2 = RaizX2(a, b, c);

    printf("A = %.1f, B = %.1f, C = %.1f\n", a, b, c);
    printf("Delta = %.1f\n", delta);
    printf("X1 = %.1f, X2 = %.1f\n", x1, x2);

    return 0;

}
