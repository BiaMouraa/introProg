/*problema numero 1074 do BeeCrowd*/

#include <stdio.h>

int main (void){
    int i, n, x;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i = i + 1){
        scanf("%d", &x);
        
        if (x == 0){
            puts("NULL");
        }
        
        else {
            if(x % 2 == 0){
                printf("EVEN ");
            }else {
                printf("ODD ");
            }
            
            if (x > 0){
                puts("POSITIVE");
            }else{
                puts("NEGATIVE");
            }
        }
    }
    return 0;
}