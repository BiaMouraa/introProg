/*problema numero 1094 do BeeCrowd*/

#include <stdio.h>

int main()
{
   int x, n, rato, sapo, coelho, total;
   char cobaia;

   total = rato = sapo = coelho = 0;

   scanf("%d", &x);
   while(x > 0){
       scanf("%d%*c", &n);
       scanf("%c", &cobaia);
       switch(cobaia){
            case 'C':
                coelho += n;
                break;
            case 'S':
                sapo += n;
                break;
            case 'R':
                rato += n;
                break;
       }
       total += n;
       --x;
   }

   printf("Total: %d cobaias\n", total);
   printf("Total de coelhos: %d\n", coelho);
   printf("Total de ratos: %d\n", rato);
   printf("Total de sapos: %d\n", sapo);
   printf("Percentual de coelhos: %.2f %%\n", ((float)coelho/total)*100);
   printf("Percentual de ratos: %.2f %%\n", ((float)rato/total)*100);
   printf("Percentual de sapos: %.2f %%\n", ((float)sapo/total)*100);

    return 0;
}