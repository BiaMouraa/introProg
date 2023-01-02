#include <stdio.h>

int main(void) {
  int n, i, j, k, aux, cont = 0;
  int largada[24], chegada[24];

  //leitura n competidores
  while(scanf("%d", &n) != EOF){
    //leitura largada
    for(i = 0; i < n; ++i){
      scanf("%d", &largada[i]);
    }
    
    //leitura chegada
    for(i = 0; i < n; ++i){
      scanf("%d", &chegada[i]);
    }

    //verifica as trocas
    cont = 0;
    for(i = 0; i < n; ++i){
      if(chegada[i] == largada[i])
          continue;
      else{
        for(j = i + 1; j < n; ++j){
          if(largada[i] == chegada[j]){
            for(k = j; k > i; --k){
              aux = chegada[k];
              chegada[k] = chegada[k - 1];
              chegada[k - 1] = aux;
              ++cont;
            }
            break;
          }
        }
      }

    }

    printf("%d\n", cont);

    
  }
  
  return 0;
}