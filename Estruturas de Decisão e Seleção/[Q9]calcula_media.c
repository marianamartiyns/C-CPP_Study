/* Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir de três notas.
Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:

Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).

*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, nota_final;
    char opcao;

    printf("\n == OPCÕES ==\nDigite [a] para Média Aritmética;\nDigite [p] para Média Ponderada;\n");
    printf("Opção: ");
    scanf("%c", &opcao);

    switch (opcao){

case 'a':

    printf("\nExemplo de nota: 5,6.\n");

    printf("\nDigite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a 3ª nota: ");
    scanf("%f", &nota3);

    nota_final = (nota1 + nota2 + nota3) / 3;
    printf("\nA média aritmética ficou: %.2f", nota_final);
    break;

case 'p':

    printf("\nExemplo de nota: 5,6.\n");

    printf("\nDigite a 1ª nota(peso 3 na M.P): ");
    scanf("%f", &nota1);

    printf("\nDigite a 2ª nota(peso 3 na M.P): ");
    scanf("%f", &nota2);

    printf("\nDigite a 3ª nota(peso 4 na M.P): ");
    scanf("%f", &nota3);

    nota_final = (nota1 *3 + nota2 *3 + nota3 *4) / 10;
    printf("\nA média ponderada ficou: %.2f", nota_final);
    break;

default:
    printf("\nOpção Invalída!");
    }


return 0;
}
