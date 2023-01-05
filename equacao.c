/****************************************************************************
Exercício Expressões Relacionais, Expressões Lógicas, Desvio Condicional.

Objetivo: Escreva um programa em C para calcular as raízes de uma equação do 
segundo grau.
****************************************************************************/  

#include <stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;
   
    printf("Valor de a: ");
    scanf("%f", &a);
    printf("Valor de b: ");
    scanf("%f", &b);
    printf("Valor de c: ");
    scanf("%f", &c);
    
    if (a == 0){
        printf("Não é possivel calcular quando a eh igual a 0");
        return 1;
    }
    else{
        delta = (b*b) - (4*a*c);
        
        if (delta < 0){
            printf("A equação nao possui raizes reais");
            return 2;
        }
    
        else{
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("As raizes sao: %f e %f", x1, x2);
            return 0;
        }
    }
    
    
}

