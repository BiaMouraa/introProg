/*problema numero 1114 do BeeCrowd*/

#include <stdio.h>

int main (void){
    int senha;

    scanf("%d", &senha);
    
    while (senha != 2002){
        puts("Senha Invalida");
        scanf("%d", &senha);
        }
        
    if (senha == 2002){
        puts("Acesso Permitido");
    }
    return 0;
}