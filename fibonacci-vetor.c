#include <stdio.h>

unsigned long long Fat (int x){
    unsigned long long fatorial = 1;
    int i;
    for (i = 1; i <= x; ++i){
        fatorial *= i;
    }
    return fatorial;
}


int main() {
    unsigned long long soma, x1, x2;

    while (1){
        scanf("%llu%llu", &x1, &x2);
        if (x1 == EOF || x2 == EOF)
            break;
        else
            soma = Fat(x1) + Fat(x2);
            printf("%llu\n", soma);
    }
    return 0;
}
