#include <stdio.h>

int TamanhoStr(const char *str){
    int i;

    for(i = 0; str[i] != '\0'; i++);

    return i;
}

void TiraEnter(char *str){
  if(str[TamanhoStr(str) - 1] == '\n')
    str[TamanhoStr(str) - 1] = '\0';
}

int main(void) {
  char senha[101];
  int i, maiuscula, minuscula, numero, caractere, tam;

  while(fgets(senha, 101, stdin) != NULL){
    TiraEnter(senha);
    maiuscula = minuscula = numero = caractere = 0;
    for(i = 0; senha[i] != '\0'; ++i){
      if(senha[i] >= 'A' && senha[i] <= 'Z')
        maiuscula++;
      else if(senha[i] >= 'a' && senha[i] <= 'z')
        minuscula++;
      else if(senha[i] >= '0' && senha[i] <= '9')
        numero++;
      else {
        caractere++;
      }
    }
    
    tam = TamanhoStr(senha);
    
    if(maiuscula > 0 && minuscula > 0 && numero > 0 && caractere == 0 && tam >= 6 && tam <= 32){
      printf("Senha valida.\n");
    } else
      printf("Senha invalida.\n");

  }
  
  return 0;
}