/*problema numero 1101 do BeeCrowd*/

#include <stdio.h>

int main()
{
    int n1, n2, i;
    int maior, menor, soma;
    
    maior = menor = soma = 0;
    
    
    n1 = n2 = 1;
    while(n1 > 0 && n2 > 0){
        scanf("%d%d", &n1, &n2);
        if(n1 > 0 && n2 > 0){
            if (n1 > maior){
                maior = n1;
                menor = n2;
            }if(n2 > maior){
                maior = n2;
                menor = n1;
            }
            
            for(i = menor; i <= maior; ++i){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
            soma = 0;
        }
        
    }
    
}