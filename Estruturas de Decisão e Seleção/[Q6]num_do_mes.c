// Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês Inválido’.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("\nDigite um número para saber seu mês correspondente: ");
    scanf("%d", &mes);

    switch (mes){

case 1:
    printf("\n1 corresponde ao mês de Janeiro");
    break;

case 2:
    printf("\n2 corresponde ao mês de Fevereiro");
    break;

case 3:
    printf("\n3 corresponde ao mês de Março");
    break;

case 4:
    printf("\n4 corresponde ao mês de Abril");
    break;

case 5:
    printf("\n5 corresponde ao mês de Maio");
    break;

case 6:
    printf("\n6 corresponde ao mês de Junho");
    break;

case 7:
    printf("\n7 corresponde ao mês de Julho");
    break;

case 8:
    printf("\n8 corresponde ao mês de Agosto");
    break;

case 9:
    printf("\n9 corresponde ao mês de Setembro");
    break;

case 10:
    printf("\n10 corresponde ao mês de Outubro");
    break;

case 11:
    printf("\n11 corresponde ao mês de Novembro");
    break;

case 12:
    printf("\n12 corresponde ao mês de Dezembro");
    break;

default:
    printf("Mês Invalído");
    break;

    }

return 0;
}
