// Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para isso a estrutura de seleção switch

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("\nDigite um número para saber quantos dias ele terá: ");
    scanf("%d", &mes);

    switch (mes){

case 1:
    printf("\n Janeiro tem 31 dias");
    break;

case 2:
    printf("\n Fevereiro tem 28 dias");
    break;

case 3:
    printf("\n Março tem 31 dias");
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
    printf("\nMês Invalído");
    }

return 0;
}
