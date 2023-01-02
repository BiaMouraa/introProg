#include <stdio.h>

int main(void) {
  int i, j, c;
  char t;
  float m[12][12], soma;

  
  scanf("%d%*c", &c);
  scanf("%c", &t);
  
  
  for(i = 0; i < 12; ++i){
    for(j = 0; j < 12; ++j){
      scanf("%f", &m[i][j]);
    }
  }
  
  
  soma = 0;
  for(i = 0; i < 12; ++i){
    soma += m[i][c];
  }

  if(t == 'S'){
    printf("%.1f\n", soma);
  } else{
    printf("%.1f\n", soma/12);
  }
  
  return 0;
}