// Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    int i, result = 0;

    for (i = 1; i <= 1000; i += 2){
        result += i;
    }

    printf("\nA soma de todos ímpares entre 1 e 1000 resulta em %d.\n", result);

return 0;
}
