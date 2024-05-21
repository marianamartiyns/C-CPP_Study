// nao pegou

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char c;

    fp = open("entrada.txt", "r");
    if (fp == NULL){
        return 0;
    }

    while (!feof(fp)) {

        c = fgetc(fp);
        if (c != EOF) {
            putchar(c);
        }
    }

    fclose(fp);
    return 0;

}
