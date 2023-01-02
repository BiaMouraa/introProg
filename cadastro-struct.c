#include <stdio.h>

typedef struct {
        char nome[61];
        char cpf[16];
        char nascimento[12];
    }cadastro;

    void RemoveEnter(char *str){
      int i;
      for(i = 0; str[i] != '\0'; ++i){}
      if(str[i-1] == '\n'){
        str[i-1] = str[i];
      }
}

void PreencheCadastro(cadastro *p){
        printf("Nome: ");
        fgets(p->nome, 61, stdin);
        RemoveEnter(p->nome);
        printf("CPF: ");
        fgets(p->cpf, 16, stdin);
        RemoveEnter(p->cpf);
        printf("Nascimento:");
        fgets(p->nascimento, 12, stdin);
        RemoveEnter(p->nascimento);
}


int main(void) {
    cadastro lista[3];
    int i;

    for (i = 0; i < 3; ++i){
        PreencheCadastro(&lista[i]);

        printf("%s\n", lista[i].nome);
        printf("%s\n", lista[i].cpf);
        printf("%s\n", lista[i].nascimento);
    }

  return 0;
}
