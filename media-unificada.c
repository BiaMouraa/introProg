#include <stdio.h>

int main (void) {
    float nota1P, nota2P, nota3P, nota1T, nota2T, nota3T;
    float media1, media2, media3, mediag;

    printf("Digite a sua primeira nota pratica: ");
    scanf("%f", &nota1P);
    printf("Digite a sua primeira nota teorica: ");
    scanf("%f", &nota1T);
    printf("Digite a sua segunda nota pratica: ");
    scanf("%f", &nota2P);
    printf("Digite a sua segunda nota teorica: ");
    scanf("%f", &nota2T);
    printf("Digite a sua terceira nota pratica: ");
    scanf("%f", &nota3P);
    printf("Digite a sua terceira nota teorica: ");
    scanf("%f", &nota3T);

    if (nota1P > nota1T){
        media1 = (6*nota1P + 4*nota1T)/10;
        printf("Sua nota na primeira unidade eh: %.1f\n", media1);
        }
    else{
        media1 = (6*nota1T + 4*nota1P)/10;
        printf("Sua nota na primeira unidade eh: %.1f\n", media1);
        }

    if (nota2P > nota2T){
        media2 = (6*nota2P + 4*nota2T)/10;
        printf("Sua nota na segunda unidade eh: %.1f\n", media2);
        }
    else{
        media2 = (6*nota2T + 4*nota2P)/10;
        printf("Sua nota na segunda unidade eh: %.1f\n", media2);
        }

    if (nota3P > nota3T){
        media3 = (6*nota3P + 4*nota3T)/10;
        printf("Sua nota na terceira unidade eh: %.1f\n", media3);
        }
    else{
        media3 = (6*nota3T + 4*nota3P)/10;
        printf("Sua nota na terceira unidade eh: %.1f\n", media3);
        }

    mediag = (media1+media2+media3)/3;
    printf("A sua media semestral eh: %.1f\nConceito: ", mediag);

    if (mediag < 5){
        puts("F");
    }else if (mediag < 6){
        puts("E");
    }else if (mediag < 7){
        puts("D");
    }else if (mediag < 8){
        puts("C");
    }else if (mediag < 9){
        puts("B");
    }else if (mediag <= 10){
        puts("A");
    }else{
        puts("Desconhecido.");
    }
return 0;
}
