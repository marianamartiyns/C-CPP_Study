/* Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere  como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares. */

#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;

int main() {

    setlocale(LC_ALL, "");

    float valor_real, valor_dolar;

    printf("\nDigite o valor em real p/ ser convertido em dolar: ");
    scanf("%f", &valor_real);

    valor_dolar = valor_real / 5.30;

    printf("$%.2f = R$%.2f", valor_real, valor_dolar);

    return 0;
}