#include <stdio.h>

int main(void) {
  int i, j, l;
  char t;
  float m[12][12], soma;

  
  scanf("%d%*c", &l);
  scanf("%c", &t);
  
  
  for(i = 0; i < 12; ++i){
    for(j = 0; j < 12; ++j){
      scanf("%f", &m[i][j]);
    }
  }
  
  
  soma = 0;
  for(j = 0; j < 12; ++j){
    soma += m[l][j];
  }

  if(t == 'S'){
    printf("%.1f\n", soma);
  } else{
    printf("%.1f\n", soma/12);
  }
  
  return 0;
}