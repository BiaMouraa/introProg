/*problema numero 1051 do BeeCrowd*/

#include <stdio.h>

int main (void) {
    float salario, valor, total, resto;
    
    scanf("%f", &salario);
    
    total = 0;
    if (salario >= 0 && salario <= 2000){
        puts("Isento");
    }else{
        if (salario > 4500){
            resto = salario - 4500;
            valor = resto * 0.28;
            total = 80 + 270 + valor;
            printf("R$ %.2f\n", total);
        } else if (salario > 3000 && salario <= 4500){
            resto = salario - 3000;
            valor = resto * 0.18;
            total = 80 + valor;
            printf("R$ %.2f\n", total);
        } else if(salario > 2000 && salario <= 3000){
            resto = salario - 2000;
            valor = resto * 0.08;
            total = valor;
            printf("R$ %.2f\n", total);
        }
    }

    return 0;
}