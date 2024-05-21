// fread e fwrite

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *entrada, *saida;
    char num[100];
    int nintenslidos;

    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL){
         return 0;
    }

    saida = fopen("saida.txt", "w");
    if (saida == NULL) {
        return 0;
    }

    do{
        nintenslidos = fread(num, sizeof(char), 1, entrada);
        fwrite(num, sizeof(char), nintenslidos, saida);
    } while (nintenslidos > 0);

    fclose(entrada);
    fclose(saida);

    }
