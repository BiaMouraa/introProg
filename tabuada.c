/*problema numero 1078 do BeeCrowd*/

#include <stdio.h>

int main (void) {
    int x, i;

    scanf("%d", &x);

    for (i = 1; i <= 10; i += 1){
        printf("%d x %d = %d\n", i, x, i*x);
    }

    return 0;
}
