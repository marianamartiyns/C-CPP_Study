//  Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou  de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    int opcao;
    float valor_inicial, valor_final;

    printf("\n== COVERTOR ==\nEscolha [1] para realizar a conversão de REAL para DÓLAR\nEscolha [2] para converter DÓLAR para REAL\n\n(considerando $1 = R$ 5.30)\n");
    printf("Opcão: ");
    scanf("%d", &opcao);

    printf("\nInforme o valor: ");
    scanf("%f", &valor_inicial);

    switch (opcao) {

case 1: //Real --> Dólar
    valor_final = valor_inicial / 5.30;
    printf("    R$%.2f --> $%.2f",valor_inicial, valor_final);
    break;


case 2: // Dólar --> Real
    valor_final = valor_inicial * 5.30;
    printf("    $%.2f --> R$%.2f",valor_inicial, valor_final);
    break;

default:
    printf("\nOpção Invalída\n");
    break;
    }
    return 0;
}
