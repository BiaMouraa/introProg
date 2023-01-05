/****************************************************************************
Exercício sobre Structs, Strings, Arrays e Funcoes.

Objetivo: Implementar as funcionalidades de salvar e carregar em arquivo 
binário os dados dos discentes do exercício 15.
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX_NOME 41
#define MAX_DISCIPLINA 51

typedef struct{
      int matricula;
      char nome[MAX_NOME];
      float nota1, nota2, nota3;
      float notaRec;
    }ddAluno;

void RemoveEnter(char *str){
  int i;
  for(i = 0; str[i] != '\0'; ++i){}
  if(str[i-1] == '\n'){
    str[i-1] = str[i];
  }
}

void InicioPrograma(char *disciplina, int *qntdd){
  printf("Seja Bem Vindo, esse eh um programa de controle.\n");
  printf("Qual a disciplina que deseja controlar? (MAX 50 CARACTERES): ");
  fgets(disciplina, 51, stdin);
  RemoveEnter(disciplina);
  printf("Qual a quantidade de alunos matriculados? (MAX 30)? ");
  scanf("%d", qntdd);
  puts("");
}


int main(void) {
  char disciplina[MAX_DISCIPLINA];
  int qntddAluno, i;
  float media[30];
  ddAluno registro[30];
  FILE *fp;
  InicioPrograma(disciplina, &qntddAluno);

  for(i = 0; i < qntddAluno; ++i){
    printf("#%d# Numero de matricula: ", i+1);
    scanf("%d%*c", &registro[i].matricula);
    printf("#%d# Nome do aluno (MAX 30 CARACTERES): ", i+1);
    fgets(registro[i].nome, 31, stdin);
    RemoveEnter(registro[i].nome);
    puts("");
  }

  for(i = 0; i <qntddAluno; ++i){
    printf("%s, por favor insira suas 3 notas: ", registro[i].nome);
    scanf("%f%f%f", &registro[i].nota1, &registro[i].nota2, &registro[i].nota3);
  }
  puts("");

  for(i = 0; i < qntddAluno; i++){
    media[i] = (registro[i].nota1 + registro[i].nota2 + registro[i].nota3)/3;
    if(media[i] < 7 && media[i] >= 4){
      printf("%s, sua media atual eh: %.1f\n"
                "Por favor insira sua nota de recuperacao: ", registro[i].nome, media[i]);
      scanf("%f", &registro[i].notaRec);
      }
  }



  fp = fopen("saidaB.bin", "ab");
  if (fp == NULL){
        puts("erro ao abrir o arquivo.");
        return 1;
    }


  fprintf(fp,"\nDisciplina: %s\n", disciplina);
  fprintf(fp,"--------------------------------------------------------------------------\n");
  fprintf(fp,"Matricula \t Nome \t Nota1 \t Nota2 \t Nota3"
                      "\t Rec \t Media \t Situacao\n");
  fprintf(fp,"--------------------------------------------------------------------------\n");

  for(i = 0; i < qntddAluno; ++i){
    fprintf(fp,"%d \t %s \t", registro[i].matricula, registro[i].nome);
    fprintf(fp," %.1f \t %.1f \t %.1f \t", registro[i].nota1, registro[i].nota2, registro[i].nota3);
    if(registro[i].notaRec == 0){
      fprintf(fp,"  -  ");
      fprintf(fp,"\t %.1f \t", media[i]);
      if(media[i] < 4)
        fprintf(fp,"Reprovado\n");
      else
        fprintf(fp,"Aprovado\n");
    } else{
      fprintf(fp," %.1f ", registro[i].notaRec);
      media[i] = media[i]*0.6 + registro[i].notaRec*0.4;
      fprintf(fp,"\t %.1f \t", media[i]);
      if(media[i] < 5)
        fprintf(fp,"Reprovado\n");
      else
        fprintf(fp,"Aprovado\n");
    }
  }

  fclose(fp);

  return 0;
}
