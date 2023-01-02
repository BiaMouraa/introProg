#include <stdio.h>
#define MAX 1000

int MenorValor (int ar[], int n){
  int i, menor = ar[0];
  for(i = 1; i < n; ++i){
    if(ar[i] < menor){
      menor = ar[i];
    }
  }
  return menor;
}

int Posicao (int ar[], int t, int x){
  int i;
  for(i = 0; i < t; ++i){
    if(ar[i] == x)
      return i;
  }
}

int main(void) {
  int ar[MAX], n, i, menor;

  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d", &ar[i]);    
  }
  
  menor = MenorValor(ar, n);
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", Posicao(ar, n, menor));
  
  return 0;
}