/*problema numero 1173 do BeeCrowd*/

#include <stdio.h>

int main() {
    int n[10], i;

    scanf("%d", &n[0]);

    for(i = 1; i < 10; ++i){
        n[i] = n[i-1] * 2;
        printf("N[%d] = %d\n", i, n[i]);
    }


    return 0;
}
