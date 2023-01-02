/*problema numero 1080 do BeeCrowd*/

#include <stdio.h>

int main()
{
    int x, i, posicao, maior = 0;
    
    for (i = 1; i <= 100; ++i){
        scanf("%d", &x);
        if(x > maior){
            maior = x;
            posicao = i;
        }
    }
    
    printf("%d\n%d\n", maior, posicao);

    return 0;
}