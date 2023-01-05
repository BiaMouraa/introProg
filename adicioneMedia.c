/****************************************************************************
Exercício Funções e Duração de Variáveis

Objetivo: Defina uma função chamada AdicioneNaMedia que funcione assim:
A cada vez que ela é chamada, o novo valor recebido como parâmetro é
processado e ela retorna a média de todos os valores já recebidos até
então.
****************************************************************************/

#include <stdio.h>

double AdicioneNaMedia (double valor){
    static double soma;
    static int cont;
    
    soma += valor;
    ++cont;
    
    return soma/cont;
}

int main()
{
    int i, n;
    double valor, media;
    
    printf("Quantos valores serao lidos?\n");
    scanf("%d", &n);
    
    for(i = 1; i <= n; ++i){
        printf("Insira um valor: ");
        scanf("%lf", &valor);
        media = AdicioneNaMedia(valor);
        printf("%d° media = %.2lf\n", i, media);
    }

    return 0;
}
