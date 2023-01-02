/**
    Laboratorio de Introducao a Programacao para Engenharia de Computacao.
    Atividade do dia 6 de junho de 2022.

    Descricao:

    Complete esse codigo-fonte para criar um programa dirigido por menus que mantenha um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa irá ajudá-lo a manter o cadastro de um tesouro e sua localizacao.\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
  printf("Escreva a descricao do tesouro (MAX 50 CARACTERES): ");
  scanf("%s", reg->descricao);
  printf("Qual o valor do tesouro? ");
  scanf("%f", &reg->valor);
  printf("Indique a posicao X do tesouro ");
  scanf("%d", &reg->x);
  printf("Indique a posicao Y do tesouro ");
  scanf("%d", &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizad
  puts("");
  printf("\tDescricao: %s\n", reg->descricao);
  printf("\tValor: %.2f\n", reg->valor);
  printf("\tPosicao X: %d\n", reg->x);
  printf("\tPosicao Y: %d\n", reg->y);
}

float Distancia(tRegistro reg, int x, int y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
  return sqrt(pow((x-reg.x),2)+(pow((y-reg.y),2)));
}

int main(void)
{
    float distancia;
    int x, y;
    tRegistro reg; //guarda o registro
    int opcao;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
              CadastroRegistro(&reg);
                break;
            case 2:
              ImprimeRegistro(&reg);
                break;
            case 3:
              printf("Indique os pontos X e Y que deseja verificar: ");
              scanf("%d %d", &x, &y);
              distancia = Distancia(reg, x, y);
              printf("A distancia entre (%d,%d) e (%d,%d) eh: %.2f", reg.x, reg.y, x, y, distancia);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}