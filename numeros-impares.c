/*problema numero 1067 do BeeCrowd*/

#include <stdio.h>

int main (void) {
    int i, x;

    scanf("%d", &x);

    for(i = 1; i <= x; i += 1){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
