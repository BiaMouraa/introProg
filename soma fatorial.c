#include <stdio.h>

int main() {
    unsigned long long m, n, soma;
    int i, ar[21];

    ar[0] = 1;
    for(i = 1; i < 21; ++i){
        ar[i] = i*ar[i-1];
    }

    while (1){
        scanf("%llu%llu", &m, &n);
        if (m == EOF || n == EOF)
            break;
        else
            soma = ar[m] + ar[n];
            printf("%llu\n", soma);
    }
    return 0;
}
