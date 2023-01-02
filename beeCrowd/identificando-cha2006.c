/*problema numero 2006 do BeeCrowd*/

#include <stdio.h>

int main()
{
    int correto, resposta, acertos, i;
    
    scanf("%d", &correto);
    
    acertos = 0;
    for (i = 1; i <= 5; ++i){
        scanf("%d", &resposta);
        if (resposta == correto){
            ++acertos;
        }
    }
    
    printf("%d\n", acertos);
    
    return 0;
}