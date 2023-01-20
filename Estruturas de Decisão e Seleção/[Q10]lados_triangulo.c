/* Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo �
equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem �N�o
formam um tri�ngulo�. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "");

    int lado1, lado2, lado3;

    printf("Digite o 1� lado do tri�ngulo: ");
    scanf("%d", &lado1);

    printf("Digite o 2� lado do tri�ngulo: ");
    scanf("%d", &lado2);

    printf("Digite o 3� lado do tri�ngulo: ");
    scanf("%d", &lado3);

    // Descobrindo se os 3 comprimentos formam um tri�ngulo

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){

        if (lado1 == lado2 == lado3)
            printf("Esse Tri�ngulo � Equilatero");

        else{

            if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
                printf("Esse Tri�ngulo � Isosceles\n");
            else
                printf("Esse Tri�ngulo � Escaleno\n");
        }
    }
    else
        printf("Os 3 lados N�O formam um tri�ngulo!\n");


return 0;
}
