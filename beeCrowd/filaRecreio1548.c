/*problema numero 1548 do BeeCrowd*/

#include <stdio.h>

int main(void) {
  int i, j, alunos, testes, aux, cont = 0;
  int notas[1000], ordenadas[1000];

  //recebe qntdd de testes
  scanf("%d", &testes);
  for(i = 0; i < testes; ++i){
    //recebe qntdd de alunos
    scanf("%d", &alunos);
    for(j = 0; j < alunos; ++j){
      scanf("%d", &notas[j]);
    }

    //copia o array p depois ordenar
    for(j = 0; j < alunos; ++j){
      ordenadas[j] = notas[j];
    }
    //ordena as notas
    int trocou = 1;
    while(trocou){
      trocou = 0;
      for(j = 0; j < alunos - 1; j++){
        if(ordenadas[j] < ordenadas[j + 1]){
          aux = ordenadas[j];
          ordenadas[j] = ordenadas[j + 1];
          ordenadas[j + 1] = aux;
          trocou = 1;
        }
      }
    }
    /*
    for(j = 0; j < alunos-1; ++j){
      if(ordenadas[j] > ordenadas[j + 1]){
        continue;
      }else{
        aux = ordenadas[j];
        ordenadas[j] = ordenadas[j + 1];
        ordenadas[j + 1] = aux;
      }
    }*/

    for(j = 0; j < alunos; ++j){
      if(ordenadas[j] == notas[j]){
        ++cont;
      }
    }
    
    printf("%d\n", cont);
    cont = 0;
  }
    
  return 0;
}