#include <stdio.h>
#define MAX 10000

int main(void) {
  int n, i, j, k, qOP, op;
  int qConj, conj[MAX][61] = {0}, conjA, conjB;

  scanf("%d", &n);
  while(n--){
    scanf("%d", &qConj);
    for(i = 0; i < qConj; ++i){
      scanf("%d", &conj[i][0]);
      for(j = 1; j <= conj[i][0]; ++j){
        scanf("%d", &conj[i][j]);
      }
    }

    scanf("%d", &qOP);
    for(i = 0; i < qOP; ++i){
      scanf("%d%d%d", &op, &conjA, &conjB);
      if(op == 1){
        int result[60] = {0};
        for(j = 1; j <= conj[conjA-1][0]; ++j){
          for(k = 1; k <= conj[conjB-1][0]; ++k){
            if(conj[conjA-1][j] == conj[conjB-1][k]){
              result[conj[conjA-1][j]-1] = 1;
            }
          }
        }
        int cont = 0;
        for(j = 0; j < 60; ++j){
          cont += result[j];
        }
        printf("%d\n", cont);
      } else{
        int result[60] = {0};
        for(j = 1; j <= conj[conjA-1][0]; ++j){
          result[conj[conjA-1][j]-1] = 1;
        }for(k = 1; k <= conj[conjB-1][0]; ++k){
              result[conj[conjB-1][k]-1] = 1;
          }
        
        int cont = 0;
        for(j = 0; j < 60; ++j){
          cont += result[j];
        }
        printf("%d\n", cont);
      }
    }
    
  }
  
  return 0;
}