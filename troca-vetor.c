    #include <stdio.h>

    int main() {
        int i, j = 19;
        int n[20];

        for (i = 0; i < 20; ++i){
            scanf("%d", &n[i]);
        }

        for(i = 0; i < 20; ++i){
            n[i] = n[j--];
            printf("N[%d] = %d\n", i, n[i]);
        }

        return 0;
    }
