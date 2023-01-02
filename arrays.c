#include <stdio.h>

int main() {

/*PRIMEIRO EXERCICIO*/
    int ar[10], i, soma = 0, aux = 10;

    //ATRIBUINDO E ORDEM CRESCENTE
    printf("ORDEM CRESCENTE\n");
    for(i = 0; i < 10; ++i){
        ar[i] = aux;
        aux += 10;
        soma += ar[i];
        printf("[%d] = %d\n", i, ar[i]);
    }

    //ORDEM DECRESCENTE
    printf("\nORDEM DECRESCENTE\n");
    for(i = 9; i >= 0; i--){
        printf("[%d] = %d\n", i, ar[i]);
    }

    //5 POSIÇÃO
    printf("\nELEMENTO 5 POSICAO: %d\n", ar[4]);

    //INDICES IMPARES
    printf("\nIMPARES\n");
    for(i = 0; i < 10; ++i){
        if(i % 2 != 0){
            printf("[%d] = %d\n", i, ar[i]);
        }
    }

    //SOMA
    printf("\nSOMA DOS VALORES = %d\n\n", soma);


/*SEGUNDO EXERCICIO*/
    soma = 0;

    //ATRIBUINDO
    for(i = 0; i < 10; ++i){
        printf("Digite o valor do indice [%d]: ", i);
        scanf("%d", &ar[i]);
        soma += ar[i];
    }

    //ORDEM CRESCENTE
    printf("ORDEM CRESCENTE\n");
    for(i = 0; i < 10; ++i){
        printf("[%d] = %d\n", i, ar[i]);
    }

    //ORDEM DECRESCENTE
    printf("\nORDEM DECRESCENTE\n");
    for(i = 9; i >= 0; i--){
        printf("[%d] = %d\n", i, ar[i]);
    }

    //5 POSIÇÃO
    printf("\nELEMENTO 5 POSICAO: %d\n", ar[4]);

    //INDICES IMPARES
    printf("\nIMPARES\n");
    for(i = 0; i < 10; ++i){
        if(i % 2 != 0){
            printf("[%d] = %d\n", i, ar[i]);
        }
    }

    //SOMA
    printf("\nSOMA DOS VALORES = %d\n", soma);

/*TERCEIRO EXERCICIO - media*/
    float media, q = 0;
    soma = 0;

    for(i = 0; i < 10; ++i){
        soma += ar[i];
        ++q;
    }
    media = soma / q;
    printf("\nMEDIA DOS VALORES = %.1f\n", media);

/*QUARTO EXERCICIO*/
    int n;
    printf("\nQual valor deseja verificar? ");
    scanf("%d", &n);

    for(i = 0; i < 10; ++i){
        if(ar[i] == n){
            printf("\nA posicao de %d eh: [%d]\n", n, i);
        }
    }

/*QUINTO EXERCICIO*/
    int maior = 0;

    for(i = 0; i < 10; ++i){
        if(ar[i] > maior)
            maior = ar[i];
    }

    printf("\nO maior numero do array eh: %d\n", maior);

    return 0;
}
