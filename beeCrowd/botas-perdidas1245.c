#include <stdio.h>

int main(void) {
  char pe;
  int i, n, k, tam;

  while(scanf("%d", &n) != EOF){
    int direito[61] = {0}, esquerdo[61] = {0};
    int pares = 0;
    for(k = 0; k < n; ++k){
      scanf("%d%*c%c", &tam, &pe);
      if(pe == 'D')
        direito[tam]++;
      else
        esquerdo[tam]++;  
    }

    for(i = 30; i <= 60; ++i){
      if(direito[i] && esquerdo[i]){
        if(direito[i] == esquerdo[i]){
          pares += direito[i];
        } else if(direito[i] < esquerdo[i])
            pares += direito[i];
          else if(esquerdo[i] < direito[i])
            pares += esquerdo[i];
      }
      direito[i] = 0;
      esquerdo[i] = 0;
    }
    printf("%d\n", pares);
}
  
  return 0;
}