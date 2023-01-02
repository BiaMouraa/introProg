/*problema numero 1555 do BeeCrowd*/

#include <stdio.h>
#include <math.h>

int Rafael (float x, float y){
  return pow(3*x, 2) + y*y;
}

int Beto (float x, float y){
  return 2 * x*x + pow(5*y, 2);
}

int Carlos (float x, float y){
  return -100*x + pow(y, 3);
}

int main(void) {
  int n, i, x, y;

  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d%d", &x, &y);
    if (Carlos(x, y) > Beto(x, y) && Carlos(x, y) > Rafael(x,y)){
      printf("Carlos ganhou\n");
    }
    if (Beto(x, y) > Carlos(x, y) && Beto(x, y) > Rafael(x,y)){
      printf("Beto ganhou\n");
    }
    if (Rafael(x, y) > Beto(x, y) && Rafael(x, y) > Carlos(x,y)){
      printf("Rafael ganhou\n");
    }
  }
  return 0;
}