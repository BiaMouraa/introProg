#include <stdio.h>
#include <math.h>
#include <string>

int EhPrimo (unsigned long long x){
    unsigned long long i, div = 0;
    for(i = 2; i <= sqrt(x); ++i){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    unsigned long long x;

    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &x);
        if(EhPrimo(x))
            printf("Prime\n");
        else
            printf("Not Prime\n");
        --n;
    }

    return 0;
}
