/* Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir de tr�s notas.
Fa�a um programa que leia as notas e o tipo da m�dia escolhida pelo usu�rio e calcule
a apresente a m�dia:

Op��es:
� �a� - Aritm�tica.
� �p� - Ponderada (pesos: 3,3,4).

*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, nota_final;
    char opcao;

    printf("\n == OPC�ES ==\nDigite [a] para M�dia Aritm�tica;\nDigite [p] para M�dia Ponderada;\n");
    printf("Op��o: ");
    scanf("%c", &opcao);

    switch (opcao){

case 'a':

    printf("\nExemplo de nota: 5,6.\n");

    printf("\nDigite a 1� nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a 2� nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a 3� nota: ");
    scanf("%f", &nota3);

    nota_final = (nota1 + nota2 + nota3) / 3;
    printf("\nA m�dia aritm�tica ficou: %.2f", nota_final);
    break;

case 'p':

    printf("\nExemplo de nota: 5,6.\n");

    printf("\nDigite a 1� nota(peso 3 na M.P): ");
    scanf("%f", &nota1);

    printf("\nDigite a 2� nota(peso 3 na M.P): ");
    scanf("%f", &nota2);

    printf("\nDigite a 3� nota(peso 4 na M.P): ");
    scanf("%f", &nota3);

    nota_final = (nota1 *3 + nota2 *3 + nota3 *4) / 10;
    printf("\nA m�dia ponderada ficou: %.2f", nota_final);
    break;

default:
    printf("\nOp��o Inval�da!");
    }


return 0;
}
