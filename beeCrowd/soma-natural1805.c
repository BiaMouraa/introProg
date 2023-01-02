/*problema numero 1805 do BeeCrowd*/

#include <stdio.h>

int main()
{
    unsigned long long int n1, n2, soma, nTermos;
    
    scanf("%llu%llu", &n1, &n2);
    
    nTermos = (n2 - n1) + 1;
    soma = (nTermos*(n1+n2))/ 2;
    
    printf("%llu\n", soma);
        
    return 0;
    }
