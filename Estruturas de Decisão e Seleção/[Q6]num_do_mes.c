// Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no calend�rio. Caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem �M�s Inv�lido�.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("\nDigite um n�mero para saber seu m�s correspondente: ");
    scanf("%d", &mes);

    switch (mes){

case 1:
    printf("\n1 corresponde ao m�s de Janeiro");
    break;

case 2:
    printf("\n2 corresponde ao m�s de Fevereiro");
    break;

case 3:
    printf("\n3 corresponde ao m�s de Mar�o");
    break;

case 4:
    printf("\n4 corresponde ao m�s de Abril");
    break;

case 5:
    printf("\n5 corresponde ao m�s de Maio");
    break;

case 6:
    printf("\n6 corresponde ao m�s de Junho");
    break;

case 7:
    printf("\n7 corresponde ao m�s de Julho");
    break;

case 8:
    printf("\n8 corresponde ao m�s de Agosto");
    break;

case 9:
    printf("\n9 corresponde ao m�s de Setembro");
    break;

case 10:
    printf("\n10 corresponde ao m�s de Outubro");
    break;

case 11:
    printf("\n11 corresponde ao m�s de Novembro");
    break;

case 12:
    printf("\n12 corresponde ao m�s de Dezembro");
    break;

default:
    printf("M�s Inval�do");
    break;

    }

return 0;
}
