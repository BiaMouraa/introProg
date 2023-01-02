/*
1.Crie um programa em C com as seguintes características:
• Define um array de inteiros com 10 elementos;
• Preenche o array com os valores 10, 20, 30, 40, 50, 60, 70, 80, 90 e 100,
respectivamente, do primeiro ao último elemento.
i. Você pode iniciar tanto explicitamente na definição do array
quanto com um a ajuda de um for no início do programa (ou os
dois).

• Apresente todos os elementos na tela em ordem crescente dos seus
índices; Depois
• Apresente todos os elementos na tela em ordem decrescente dos seus
índices; Depois
• Apresente o elemento armazenado na quinta posição do array; Depois
• Apresente todos os elementos armazenados em índices ímpares; E
depois
• Apresente a soma de todos os valores armazenados no array.
i. Não use função ainda, use um for mesmo.

2. Modifique o programa da questão anterior para, ao invés de usar valores fixos,
solicite ao usuário os valores para cada um dos 10 elementos do array.

3. Adicione ao programa anterior uma função chamada MediaArray que retorna a
média real dos valores inteiros contidos em um array recebido como parâmetro.
Não esqueça que esse tipo função deve sempre receber também o número de
elementos do array para evitar acesso a elementos inexistentes. Exiba essa média
no seu programa.

4. Implemente uma função booleana chamada EmArray que retorna verdadeiro caso
um elemento esteja presente no array. Essa função deve receber como parâmetro,
além do array e seu tamanho, o elemento que será procurado. Adicione um teste da
função no main.

5. Adicione ao programa uma função chamada MaximoValorArray que retorna o valor
do maior elemento armazenado no array. Use a função no main.

6. Adicione ao seu programa uma função booleana EhArrayOrdenado que recebe o
array como parâmetro e retorna verdadeiro caso os elementos estejam ordenados
e falso caso contrário.*/

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

    //5 POSI��O
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

    //5 POSI��O
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
