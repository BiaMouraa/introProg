#include <stdio.h>

int main (void) {
    int a, b, c;
    char resposta;

    scanf("%d%d%d", &a, &b, &c);

    if (a == b || a == c || c == a || a + b == c || a + c == b || b + c == a){
        resposta = 'S';
    }
    else{
        resposta = 'N';
    }

    printf("%c\n", resposta);

    return 0;
}
