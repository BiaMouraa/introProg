/*problema numero 1154 do BeeCrowd*/

#include <stdio.h>

int main (void){
   int idade;
   float media, soma, contador;

   soma = 0;
   idade = 0;
   contador = 0;

   while (idade >= 0){
       soma = soma + idade;
       contador = contador + 1;
       scanf("%d", &idade);
   }

    media = soma / (contador - 1);
    printf("%.2f\n", media);
    return 0;
}