#include <stdio.h>
#include <math.h>

double Binet(int n){
  double a, b;
  a = (1 + sqrt(5))/2;
  b = (1 - sqrt(5))/2;
  return ((pow(a, n) - pow(b, n))/sqrt(5));
  
}

int main(void) {
  int n;
  
  scanf("%d", &n);
  
  printf("%.1lf\n", Binet(n));
  
  return 0;
}