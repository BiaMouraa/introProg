/*problema numero 2334 do BeeCrowd*/

#include <stdio.h>

int main (void){
    unsigned long long p = 0;

    while(p != -1){
        scanf("%llu", &p);
        if (p == 0){
                puts("0");
            }
        if (p != -1 && p != 0){
            printf("%llu\n", p-1);
        }
    }

    return 0;
}
