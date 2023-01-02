#include <stdio.h>
#define MAX 1000

int main(void) {
    int i, j, terreno[MAX][MAX];
    int linhas, colunas, sabre = 0;
    
    scanf("%d%d", &linhas, &colunas);
    
    for(i = 0; i < linhas; ++i){
        for(j = 0; j < colunas; ++j){
            scanf("%d", &terreno[i][j]);
        }
    }
    
    for(i = 1; i < linhas-1; ++i){
        for(j = 1; j < colunas-1; ++j){
            if(terreno [i][j] == 42){
                if(terreno[i-1][j-1] == 7 && terreno[i-1][j] == 7 && terreno[i-1][j+1] == 7){
                    if(terreno[i][j-1] == 7 && terreno[i][j+1] == 7){
                        if(terreno[i+1][j-1] == 7 && terreno[i+1][j] == 7 && terreno[i+1][j+1] == 7)
                        printf("%d %d\n", i+1, j+1);
                        sabre = 1;
                    }
                }
            }
        }
    }
    
    if(sabre == 0)
        printf("0 0\n");
    
    
  return 0;
}