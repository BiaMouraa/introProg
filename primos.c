/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa em C que solicita ao usuário a entrada de um 
número natural n e informa se esse n é primo ou não.
****************************************************************************/ 

#include <stdio.h>

int main (void){
   int i, n, d;

   printf("Digite um numero: ");
   scanf("%d", &n);

   d = 0;
   for (i = 1; i <= n; i = i + 1){
    if (n % i == 0){
        d = d + 1;
    }
   }

   if (d == 2){
    printf("%d eh um numero primo", n);
   }
   else
    printf("%d nao eh um numero primo", n);

    return 0;
}
