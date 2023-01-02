/*problema numero 1040 do BeeCrowd*/

#include <stdio.h>

int main (void) {
    float n1, n2, n3, n4, exame, media, nova;
    
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    
    media = (2*n1 + 3*n2 + 4*n3 + n4)/10;
    printf("Media: %.1f\n", media);
    
    if(media >= 7){
        puts("Aluno aprovado.");
    } else if (media < 5){
        puts("Aluno reprovado.");
    } else{
        puts("Aluno em exame.");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        nova = (media + exame)/2;
        if (nova > 5){
            puts("Aluno aprovado.");
            printf("Media final: %.1f\n", nova);
        } else{
            puts("Aluno reprovado.");
            printf("Media final: %.1f\n", nova);
        }
    }
    return 0;
}