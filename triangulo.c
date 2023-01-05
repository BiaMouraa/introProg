/****************************************************************************
Exercício Funções e Duração de Variáveis

Objetivo: Escreva um programa em C que utiliza o teorema de Pitágoras para 
auxiliar na criação ou verificação de triângulos retângulos.
****************************************************************************/

#include <stdio.h>
#include <math.h>

float EhTrianguloRetangulo (float a, float b, float c){
    if(a*a + b*b == c*c){
        return 1;
    }else{
        return 0;
    }
}

float FormaTrianguloRetangulo (float a, float b, float c){
    if ((a <= 0 && b <= 0) || (a <= 0 && c <= 0) || (b <= 0 && c <= 0))
        return -1;
    if(a <= 0){
        a = sqrt(c*c - b*b);
        return a;
    } else if (b <= 0){
        b = sqrt (c*c - a*a);
        return b;
    } else if(c <= 0){
        c = sqrt(a*a + b*b);
        return c;
    }
}

int main()
{
    float a, b, c;
    
    printf("Insira os valores de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);
    
    if (a > 0 && b > 0 && c > 0){
        if (EhTrianguloRetangulo(a, b, c))
            printf("Forma triangulo retangulo\n");
        else
            printf("Nao forma triangulo retangulo\n");
    }else if (a <= 0 && b > 0 && c > 0){
        a = FormaTrianguloRetangulo(a, b, c);
        printf("O valor valido de a eh: %.1f\n", a);
    }else if(a > 0 && b <= 0 && c > 0){
        b = FormaTrianguloRetangulo(a, b, c);
        printf("O valor valido de b eh: %.1f\n", b);
    }else if(a > 0 && b > 0 && c <= 0){
        c = FormaTrianguloRetangulo(a, b, c);
        printf("O valor valido de c eh: %.1f\n", c);
    }else if (FormaTrianguloRetangulo(a, b, c) < 0){
        printf("Entrada Invalida.\n");
    }

    return 0;

}
