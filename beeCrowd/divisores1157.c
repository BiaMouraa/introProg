/*problema numero 1157 do BeeCrowd*/

#include <stdio.h>

int main (void){
    int i, n, divisor;

    scanf("%d", &n);
    
    for (i = n; i >= 1; i = i - 1){
        if (n % i == 0){
            divisor = n / i;
            printf("%d\n", divisor);
        }
    }
}