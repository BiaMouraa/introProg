/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Incremente o código-fonte do nosso Jogo de Adivinhação (anexo) para que 
ele permita no máximo 5 palpites. A cada leitura, informe ao usuário qual é o 
número da tentativa e encerre com uma mensagem caso ele não acerte após os 5 palpites.
****************************************************************************/  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto;
	int i;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;

	for (i = 1; i <= 5 && palpite != correto; i = i + 1){

            printf("Adivinhe o numero: ");
            scanf("%d", &palpite);
                if (palpite > correto){
                    puts("Palpite alto!");
                }else if (palpite < correto){
                    puts("Palpite foi baixo!");
                }
            printf("Tentativa %d\n", i);
        }



    if (i == 6 ){
        printf("Voce nao acertou nas 5 tentativas");
    }

    else {
        puts("Voce acertou!");
        printf("Quantidade de palpites: %d", i - 1);
    }

	return 0;
}
