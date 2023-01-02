/*problema numero 1072 do BeeCrowd*/

#include <stdio.h>

int main()
{
    int i, x, n;
    int dentro, fora;
    
    scanf("%d", &x);
    
    dentro = fora = 0;
    while(x > 0){
        scanf("%d", &n);
        if (n >= 10 && n <= 20){
            ++dentro;
        } else{
            ++fora;
        }
        --x;
    }


    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    
    return 0;
}