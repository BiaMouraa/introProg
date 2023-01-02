#include <stdio.h>

int main(void) {
  int bilhetes, pessoas, i, numeros[20000];

  while(1){
    scanf("%d%d", &bilhetes, &pessoas);
    if(bilhetes == 0 && pessoas == 0)
      break;
    else{
      int repet[20000] = {0};
      for(i = 0; i < pessoas; ++i){
        scanf("%d", &numeros[i]);
        repet[numeros[i]-1]++;
      }
      int cont = 0;
      for(i = 0; i < bilhetes; ++i){
        if(repet[i] > 1)
          cont++;
      }
      printf("%d\n", cont);
    }
      
  }
  
  return 0;
}