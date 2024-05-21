// fputs e fgets

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *entrada, *saida;
    char linha[100];
    int l = 1;

    entrada = fopen("entrada.txt", "r");
    saida = fopen("saida.txt", "w");

    if (entrada == NULL ||  saida == NULL){
         printf("ERRO!");
         return 0;
    }

    while (fgets(linha, 100, entrada) != NULL) {
        printf("Linha %d: %s", l, linha);
        l++;
    }

    fclose(entrada);
    fclose(saida);
}
