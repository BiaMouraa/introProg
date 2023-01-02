#include <stdio.h>

int main(void) {
  int n, i, anos;
  long long int pA, pB;
  double gA, gB;

  scanf("%d", &n);
  for(i = 1; i <= n; ++i){
    scanf("%lld %lld %lf %lf", &pA, &pB, &gA, &gB);
    anos = 0;
    while(pA <= pB){
        pA *= (gA / 100) + 1;
        pB *= (gB / 100) + 1;
        anos++;
      if(anos > 100){
        printf("Mais de 1 seculo.\n");
        break;
        }
    }
    if(anos <= 100)
      printf("%d anos.\n", anos);
  }

  return 0;
}