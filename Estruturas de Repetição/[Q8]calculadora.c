/*Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado.
O programa deve funcionar até que o usuário escolha a opção 0 (opção de saída). */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


main(){

    setlocale(LC_ALL, "");
    float valor1, valor2, result;
    int opcao;

    printf("=== CALCULADORA ===\n\nMenu de Opções:\n\nDigite [1] para SOMAR\nDigite [2] para SUBTRAIR\nDigite [3] para MULTIPLICAR\nDigite [4] para DIVIDIR\nDigite [0] para SAIR\n");

    printf("\nOpção: ");
    scanf("%d", &opcao);

    switch (opcao){

case 1:

    printf("Digite o 1º valor da Soma: ");
    scanf("%f", &valor1);

    printf("Digite o 2º valor da Soma: ");
    scanf("%f", &valor2);

    result = valor1 + valor2;
    printf("%1.f + %1.f = %1.f\n", valor1,valor2, result);

    break;

case 2:

    printf("Digite o 1º valor da Subtração: ");
    scanf("%f", &valor1);

    printf("Digite o 2º valor da Subtração: ");
    scanf("%f", &valor2);

    result = valor1 - valor2;
    printf("%1.f - %1.f = %1.f\n", valor1,valor2, result);

    break;

case 3:

    printf("Digite o 1º valor da Multiplicação: ");
    scanf("%f", &valor1);

    printf("Digite o 2º valor da Multiplicação: ");
    scanf("%f", &valor2);

    result = valor1 * valor2;
    printf("%1.f * %1.f = %1.f\n", valor1,valor2, result);

    break;

case 4:

    printf("Digite o 1º valor da Divisão: ");
    scanf("%f", &valor1);

    printf("Digite o Divisor: ");
    scanf("%f", &valor2);

    if (valor2==0) {

        printf("O dividendo NÃO pode ser 0.\nDigite outro Valor: ");
        scanf("%f", &valor2);

        result = valor1 / valor2;
        printf("%1.f / %1.f = %3.f\n", valor1,valor2, result);
    }

    else{
        result = valor1 / valor2;
        printf("%1.f / %1.f = %3.f\n", valor1,valor2, result);
    }

    break;

case 0:

    printf("\nPrograma Encerrado!\n");
    break;
    }

return 0;
}
