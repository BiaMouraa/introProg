#include <stdio.h>

int main(void) {
  int n, k, i, cont;

  while(1){
    scanf("%d%d", &n, &k);
    if(n == 0 && k == 0)
      break;
    else{
      int freq[1000] = {0}, perguntas[1000] = {0};
      for(i = 0; i < n; ++i){
        scanf("%d", &perguntas[i]);
        freq[perguntas[i]-1]++;
      }
      cont = 0;
      for(i = 0; i < n; ++i){
        if(freq[i] >= k)
          cont++;
      }
  
      printf("%d\n", cont);
    }
  }
  
  
  return 0;
}