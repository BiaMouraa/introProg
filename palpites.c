/****************************************************************************
Exercício Laços de Repetição.

Objetivo: Incremente o código-fonte do nosso Jogo de Adivinhação (anexo) para 
que, ao final, seja informado quantos palpites foram feitos até o palpite correto.
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto;
	int i;

	srand(time(NULL));
	correto = rand() % 100;

    i = 0;
	palpite = -1;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        i = i + 1;
            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
	}

    puts("Voce acertou!");
    printf("Quantidade de palpites: %d", i);
	return 0;
}
