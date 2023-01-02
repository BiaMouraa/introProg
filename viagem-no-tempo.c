#include <stdio.h>

int main (void) {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a == b || a == c || c == a || a + b == c || a + c == b || b + c == a){
        puts('S');
    }
    else{
        puts('N');
    }

    return 0;
}
