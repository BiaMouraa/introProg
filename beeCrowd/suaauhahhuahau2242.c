#include <stdio.h>

int TamanhoStr(const char *str){
  int i;
  for(i = 0; str[i] != '\0'; ++i){}
  return i;
}

int Vogal(const char *str, int i){
  if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    return 1;
  else
    return 0;
}

int main(void) {
  char risada[51];
  int cres, decr, tam, graca = 1;

  scanf("%s", risada);
  tam = TamanhoStr(risada);

  cres = 0;
  decr = tam;  
  while(cres < decr){
    while(Vogal(risada, cres) == 0 && cres < tam)
      cres++;
    while(Vogal(risada, decr) == 0 && decr >= 0)
      decr--;
    if(risada[cres] == risada[decr]){
      cres++;
      decr--;
    }else{
      graca = 0;
      break;
    }
  }

  if(graca == 1){
    puts("S");
  } else{
    puts("N");
  }
  
  
  
  return 0;
}