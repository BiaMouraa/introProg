/*problema numero 1164 do BeeCrowd*/

#include <stdio.h>

int main (void){
    int i, n, divisor, soma;
    int cont, x;
    
    scanf("%d", &x);
    for(cont = 1; cont <= x; cont = cont + 1){
        scanf("%d", &n);
        soma = 0;
        for (i = n; i > 1; i = i - 1){
            if (n % i == 0){
                divisor = n / i;
                soma = soma + divisor;
            }
        }
        if (soma == n){
            printf("%d eh perfeito\n", n);
        } else {
            printf("%d nao eh perfeito\n", n);
        }
    }
    return 0;
}