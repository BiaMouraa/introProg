/*problema numero 2221 do BeeCrowd*/

#include <stdio.h>

int ValorGolpe(int a, int b, int d, int l) {
  int v;
  if(l % 2 == 0)
    v = (a + d) / 2 + b;
  else
    v = (a + d) / 2;

  return v;
}

int main(void) {
  int t, b, i;
  int a1, d1, l1;
  int a2, d2, l2;  
  int dabriel, guarte;
  
  scanf("%d", &t);
  
  for (i = 1; i <= t; i++) {
    scanf("%d", &b);
    scanf("%d%d%d", &a1, &d1, &l1);
    scanf("%d%d%d", &a2, &d2, &l2);
    
    dabriel = ValorGolpe(a1, b, d1, l1);
    guarte = ValorGolpe(a2, b, d2, l2);

    if(guarte > dabriel)
      printf("Guarte\n");
    else if(dabriel > guarte)
      printf("Dabriel\n");
    else if (dabriel == guarte)
      printf("Empate\n");

  }
  
  return 0;
}