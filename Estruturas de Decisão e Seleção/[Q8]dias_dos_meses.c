// Elabore um programa que, dado o n�mero do m�s, indica quantos dias t�m esse m�s. Utilize para isso a estrutura de sele��o switch

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("\nDigite um n�mero para saber quantos dias ele ter�: ");
    scanf("%d", &mes);

    switch (mes){

case 1:
    printf("\n Janeiro tem 31 dias");
    break;

case 2:
    printf("\n Fevereiro tem 28 dias");
    break;

case 3:
    printf("\n Mar�o tem 31 dias");
    break;

case 4:
    printf("\n Abril tem 30 dias");
    break;

case 5:
    printf("\n Maio tem 31 dias");
    break;

case 6:
    printf("\n Junho tem 30 dias");
    break;

case 7:
    printf("\n Julho tem 31 dias");
    break;

case 8:
    printf("\n Agosto tem 31 dias");
    break;

case 9:
    printf("\n Setembro tem 30 dias");
    break;

case 10:
    printf("\n Outubro tem 31 dias");
    break;

case 11:
    printf("\n Novembro tem 30 dias");
    break;

case 12:
    printf("\n Dezembro tem 31 dias");
    break;

default:
    printf("\nM�s Inval�do");
    }

return 0;
}
