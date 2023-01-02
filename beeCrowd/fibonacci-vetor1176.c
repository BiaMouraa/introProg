/*problema numero 1176 do BeeCrowd*/

#include <stdio.h>

unsigned long long Fib (unsigned long long x){
    unsigned long long n1, n2, i, n;

    n1 = 0;
    n2 = 1;

    for(i = 2; i <= x; ++i){
        n = n1 + n2;
        n1 = n2;
        n2 = n;
    }
    return n;
}


int main() {
    unsigned long long x, fib;
    int n;

    scanf("%d", &n);
    while(n > 0){
        scanf("%llu", &x);
        if(x == 0)
            printf("Fib(0) = 0\n");
        else if (x == 1)
            printf("Fib(1) = 1\n");
        else if(x == 2)
            printf("Fib(2) = 1\n");
        else{
            fib = Fib(x);
            printf("Fib(%llu) = %llu\n", x, fib);
        }
        --n;
    }


    return 0;
}