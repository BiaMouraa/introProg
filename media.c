#include <stdio.h>

int main(void){
    float nota1, nota2, nota3;
    float media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A media eh: %.1f", media);

    return 0;
}
