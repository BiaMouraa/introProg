#include <stdio.h>

int main (void) {
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    if (n1 == n2)
        printf("Os dois numeros sao iguais!");
    else {
        if (n1 > n2)
            printf("%d eh maior do que %d", n1, n2);
        else
            printf("%d eh maior do que %d", n2, n1);
    }

return 0;
}
