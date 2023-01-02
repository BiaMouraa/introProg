/*problema numero 1048 do BeeCrowd*/

#include <stdio.h>

int main (void) {
    float salario, reajuste, novo;
    
    scanf("%f", &salario);
    
    if (salario >= 0 && salario <= 400){
        reajuste = salario * 0.15;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novo, reajuste);
    }
    if (salario > 400 && salario <= 800){
        reajuste = salario * 0.12;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novo, reajuste);
    }
    if (salario > 800 && salario <= 1200){
        reajuste = salario * 0.10;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novo, reajuste);
    }
    if (salario > 1200 && salario <= 2000){
        reajuste = salario * 0.07;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novo, reajuste);
    }
    if (salario > 2000){
        reajuste = salario * 0.04;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novo, reajuste);
    }
    
    return 0;
}