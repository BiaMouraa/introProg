#include <stdio.h>
#include <math.h>

long double Graos(int x){
  return (1 - pow(2, x))/ -1;
}

int PesoKg(long double g){
  return g/12000;
}


int main(void) {
  int n, x;
  long double qntddG;

  scanf("%d", &n);
  while(n > 0){
    scanf("%d", &x);
    qntddG = Graos(x);
    printf("%d kg\n", PesoKg(qntddG));
    --n;
  }
  
  return 0;
}