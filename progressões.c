/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Escreva um programa em C que apresenta na tela progressões aritméticas
ou geométricas, de acordo com as entradas do usuário.
****************************************************************************/  

#include <stdio.h>
#include <math.h>

int main (void){
    char c;
    int t1, r, n;
    int a, i, soma;

    printf("Digite 'a' para aritmetica e 'g' para geometrica: ");
    scanf("%c", &c);
    printf("Digite o primeiro termo: ");
    scanf("%d", &t1);
    printf("Digite a razao: ");
    scanf("%d", &r);
    printf("Digite o numero de termos: ");
    scanf("%d", &n);


    if(c == 'a'){
        for (i = 1; i <= n ; i = i + 1){
            a = t1 + (i - 1) * r;
            printf("%d\n", a);
        }
        soma = ((t1 + (a = t1 + (n - 1) * r)) * n)/ 2;
        printf("A soma dos termos eh: %d", soma);
    }

    if(c == 'g') {
        for (i = 1; i <= n ; i = i + 1){
            a = t1 * pow(r, i-1);
            printf("%d\n", a);
        }
        soma = (t1 * (pow(r,n)-1))/(r - 1);
        printf("A soma dos termos eh: %d", soma);
    }


    return 0;
}
