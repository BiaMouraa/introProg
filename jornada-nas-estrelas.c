#include <stdio.h>
#define MAX 1000000

int main(void) {
  int i, n, ataques, carnF[MAX], carnI[MAX], posicao;
  unsigned long long soma;

  //NUMERO DE ESTRELAS
  scanf("%d", &n);

  //ARRAY DE ESTRELAS INICIAL
  for(i = 0; i < n; ++i){
    scanf("%d", &carnI[i]);
  }

  //COPIA ARRAY P SER MODIFICADO
  for(i = 0; i < n; ++i){
    carnF[i] = carnI[i];
  }
  
  posicao = 0;
  while(posicao >= 0 && posicao < n){
    if(carnF[posicao] % 2 == 0){
      if(carnF[posicao] != 0){
        --carnF[posicao];
      }
      --posicao;
    } else{
      if(carnF[posicao] != 0){
        --carnF[posicao];
      }
      ++posicao;
    }
  }

  //COMPARA O ARRAY FINAL COM O INICIAL
  ataques = 0;
  for(i = 0; i < n; ++i){
    if(carnF[i] == carnI[i])
      continue;
    else
      ataques++;
  }

  //SOMA OS CARNEIROS QUE SOBRARAM NO ARRAY FINAL
  soma = 0;
  for(i = 0; i < n; ++i){
    soma += carnF[i];
  }

  printf("%d %llu\n", ataques, soma);
  return 0;
}