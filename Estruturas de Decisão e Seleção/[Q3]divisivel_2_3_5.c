// Escreva um programa em C que leia um n�mero e informe se ele � divis�vel por 2, por 3 ou por 5, ou se n�o � divis�vel por nenhum deles.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um n�mero: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        printf("\nEsse n�mero � divisivel por 2, 3 e 5.\n");

    else
        printf("\nEsse n�mero n�o � divisivel por 2, 3 e 5.\n");

    return 0;
}
