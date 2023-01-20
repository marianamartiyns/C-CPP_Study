/*  Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
    Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, result = 0;

    for( i = 1; i <= 500; i += 2){
        result += i;
        for (i = 1; i <= 500; i += 2){
            result += i;
        }
    }

    printf("\nA soma de todos impares entre 1 e 1000 resulta em %d.\n", result);

    return 0;
}


