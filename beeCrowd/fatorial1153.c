/*problema numero 1153 do BeeCrowd*/

#include <stdio.h>

int main()
{
    int n, i, fatorial;
    
    scanf("%d", &n);
    
    fatorial = 1;
    for(i = 0; i < n; ++i){
        fatorial *= n-i;
    }
    
    printf("%d\n", fatorial);

    return 0;
}