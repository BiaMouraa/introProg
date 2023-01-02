#include <stdio.h>

int main(void) {
  int i, j, k, ar[40000], freq;
  unsigned int x;

  //define a qntdd de numeros e atribui o array
  scanf("%d", &x);
  for(i = 0; i < x; ++i){
    scanf("%d", &ar[i]);
  }
  ar[i+1] = 0;

  //ordena o array
  int aux, trocou = 1;
    while(trocou){
      trocou = 0;
      for(j = 0; j < (x - 1); j++){
        if(ar[j] > ar[j + 1]){
          aux = ar[j];
          ar[j] = ar[j + 1];
          ar[j + 1] = aux;
          trocou = 1;
        }
      }
    }


  //percorre o array e ver a frequencia
  freq = 1;
  for(i = 0; i < x; ++i){
    if(ar[i] == ar[i+1]){
      freq++;
    }
    else{
    printf("%d aparece %d vez(es)\n", ar[i], freq);
    freq = 1;
    }
  }

  return 0;
}