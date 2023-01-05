/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa em C que faça a leitura de dois valores inteiros
e imprima todos os números do intervalo fechado entre esses dois números 
(incluindo os próprios números lidos) em ordem crescente. Atenção: o programa 
pode permitir que seja digitado primeiro o maior ou o menor valor e fazer a 
correção quando necessário.
****************************************************************************/  

#include <stdio.h>

int main() {
    int n1, n2, x;
    int i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        x = n2;
        n2 = n1;
        n1 = x;
    }

    i = n2;
    while(i <= n1){
        printf("%d", i);
        i = i + 1;
    }


    return 0;
}
