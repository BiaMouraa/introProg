#include <stdio.h>

int main(void) {
  int i, testes;
  char str[102];

  scanf("%d", &testes);
  while(testes--){
    scanf("%s", str);
    int cont = 0;
    for(i = 0; str[i] != '\0'; ++i){
      switch(str[i]){
        case '1':
          cont += 2;
          break;
        case '2':
        case '3':
        case '5':
          cont += 5;
          break;
        case '4':
          cont += 4;
          break;
        case '6':
        case '9':
        case '0':
          cont += 6;
          break;
        case '7':
          cont += 3;
          break;
        case '8':
          cont += 7;
          break;
      }
    }
    printf("%d leds\n", cont);
  }
  
  return 0;
}