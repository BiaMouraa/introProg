#include <stdio.h>

int main (void) {
    int idade;

    printf("Insira a idade: ");
    scanf("%d", &idade);

    if (idade > 21 && idade < 60)
        printf("Essa pessoa eh ADULTA");
    else {
        if (idade < 21)
            printf("Essa pessoa eh JOVEM");
        else
            printf("Essa pessoa eh IDOSA");
    }
return 0;
}
