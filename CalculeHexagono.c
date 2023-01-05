/****************************************************************************
Exercício Funções e Ponteiros

Objetivo: Crie um programa para calcular a área e o perímetro de um hexágono. 
O seu programa deve implementar uma função chamada CalculaHexagono que calcula 
a área e o perímetro de um hexágono regular de lado l.
****************************************************************************/

#include <stdio.h>
#include <math.h>

void CalculeHexagono (float l, float *area, float *perimetro){
    *area = (3*l*l*sqrt(3))/2;
    *perimetro = 6 * l;
}

int main()
{
    float lado, ar, pe;
    
    printf("Digite o valor do lado: ");
    scanf("%f", &lado);
    
    CalculaHexagono(lado, &ar, &pe);
    
    printf("O valor da area eh: %.1f, e do perimetro eh: %.1f", ar, pe);

    return 0;
}
