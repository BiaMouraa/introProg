#include <stdio.h>

void TiraEnter(char *str){
  int i;
  for(i = 0; str[i] != '\0'; ++i){}
  if(str[i - 1] == '\n')
    str[i - 1] = '\0';
  
}

int main(void) {
  char frase[1002], alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int i, j, qntdd, cont[26] = {0}, teste;

  scanf("%d%*c", &teste);
  while(teste--){
      
    fgets(frase, 1002, stdin);
    TiraEnter(frase);

    for(i = 0; i < 26; i++){ 
      cont[i] = 0;
    }
  
    for(i = 0; frase[i] != '\0'; ++i){
      for(j = 0; j < 26; ++j){
        if(frase[i] == alfabeto[j])
          cont[j]++;
      }
    }

    qntdd = 0;
    for(i = 0; i < 26; ++i){
      if(cont[i] >= 1)
        qntdd++;
      else
        continue;
    }
  
    if(qntdd >= 26){
      puts("frase completa");
    } else if (qntdd >= 13 && qntdd < 26){
      puts("frase quase completa");
    } else{
      puts("frase mal elaborada");
    }
      
  }
  
  return 0;
}