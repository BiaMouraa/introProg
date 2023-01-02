#include <stdio.h>
#define MAX 1000

int Multiplos2 (int ar[], int t){
  int n = 0, i;
  for(i = 0; i < t; ++i){
    if(ar[i] % 2 == 0)
      ++n;
  }
  return n;
}

int Multiplos3 (int ar[], int t){
  int n = 0, i;
  for(i = 0; i < t; ++i){
    if(ar[i] % 3 == 0)
      ++n;
  }
  return n;
}

int Multiplos4 (int ar[], int t){
  int n = 0, i;
  for(i = 0; i < t; ++i){
    if(ar[i] % 4 == 0)
      ++n;
  }
  return n;
}

int Multiplos5 (int ar[], int t){
  int n = 0, i;
  for(i = 0; i < t; ++i){
    if(ar[i] % 5 == 0)
      ++n;
  }
  return n;
}

int main(void) {
  int i, n, numeros[MAX];

  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d", &numeros[i]);
  }

  printf("%d Multiplo(s) de 2\n", Multiplos2(numeros, n));
  printf("%d Multiplo(s) de 3\n", Multiplos3(numeros, n));
  printf("%d Multiplo(s) de 4\n", Multiplos4(numeros, n));
  printf("%d Multiplo(s) de 5\n", Multiplos5(numeros, n));

  return 0;
}