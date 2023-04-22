// Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos e positivos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int valor1, valor2, valor3, valor4, valor5, positivos = 0, negativos = 0;

    printf("Digite o 1º valor: ");
    scanf("%d", &valor1);

    printf("Digite o 2º valor: ");
    scanf("%d", &valor2);

    printf("Digite o 3º valor: ");
    scanf("%d", &valor3);

    printf("Digite o 4º valor: ");
    scanf("%d", &valor4);

    printf("Digite o 5º valor: ");
    scanf("%d", &valor5);

    if (valor1>0)
        ++positivos;
    else
        ++negativos;

    if (valor2>0)
        ++positivos;
    else
        +negativos;

    if (valor3>0)
        ++positivos;
    else
        ++negativos;

    if (valor4>0)
        ++positivos;
    else
        ++negativos;

    if (valor5>0)
        ++positivos;
    else
        ++negativos;


    printf("\nDentre os valores inseridos(%d, %d, %d, %d, %d) temos %d positivos e %d negativos.\n", valor1, valor2, valor3, valor4, valor5, positivos, negativos);

}
