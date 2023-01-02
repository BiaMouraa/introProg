/*problema numero 1589 do BeeCrowd*/

#include <stdio.h>

int main (void){
    int i, n, r1, r2;
   
    scanf("%d", &n);
   
    for (i = 1; i <= n; i = i + 1){
        scanf("%d%d", &r1, &r2);
        printf("%d\n", r1+r2);
    }

    return 0;
}
