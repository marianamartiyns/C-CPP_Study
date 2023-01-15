//  Crie um programa que permita ao usu�rio escolher entre fazer a convers�o de Real para D�lar ou  de D�lar para Real. Utilize como taxa de c�mbio $1 igual a R$5.30.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    int opcao;
    float valor_inicial, valor_final;

    printf("\n== COVERTOR ==\nEscolha [1] para realizar a convers�o de REAL para D�LAR\nEscolha [2] para converter D�LAR para REAL\n\n(considerando $1 = R$ 5.30)\n");
    printf("Opc�o: ");
    scanf("%d", &opcao);

    printf("\nInforme o valor: ");
    scanf("%f", &valor_inicial);

    switch (opcao) {

case 1: //Real --> D�lar
    valor_final = valor_inicial / 5.30;
    printf("    R$%.2f --> $%.2f",valor_inicial, valor_final);
    break;


case 2: // D�lar --> Real
    valor_final = valor_inicial * 5.30;
    printf("    $%.2f --> R$%.2f",valor_inicial, valor_final);
    break;

default:
    printf("\nOp��o Inval�da\n");
    break;
    }
    return 0;
}
