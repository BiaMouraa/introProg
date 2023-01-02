/*problema numero 1151 do BeeCrowd*/

#include <stdio.h>

int main()
{
    int i, x, n, n1, n2;
    n1 = 0;
    n2 = 1;
    
    
    scanf("%d", &x);
    
    for(i = 1; i <= x; ++i){
        switch(i){
            case 1:
                printf("0 ");
                break;
            case 2:
                printf("1 ");
                break;
            default:
                n = n1 + n2;
                n1 = n2;
                n2 = n;
                printf("%d%c", n, (i==x?'\n':' '));
                break;
        }
    }
    return 0;
}