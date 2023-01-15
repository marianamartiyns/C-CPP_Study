// Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é divisível por nenhum deles.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        printf("\nEsse número é divisivel por 2, 3 e 5.\n");

    else
        printf("\nEsse número não é divisivel por 2, 3 e 5.\n");

    return 0;
}
