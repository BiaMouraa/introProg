#include <stdio.h>

int main(void) {

    File *fp;

    fp = fopen("saida2.dat", "rb");
    if (fp == NULL){
        puts("erro ao abrir o arquivo.");
        return 1;
    }

    while(1){
        q = fread(&i, sizeof(int), 1, fp);
        if (feof(fp))
            //rewind(fp);
            break;
        //printf("unidades lidas: %d\n", q);
        printf("i = %d\n", i);
    }


    fclose(fp);

  return 0;
}
