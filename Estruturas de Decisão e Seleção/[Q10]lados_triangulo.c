/* Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "");

    int lado1, lado2, lado3;

    printf("Digite o 1º lado do triângulo: ");
    scanf("%d", &lado1);

    printf("Digite o 2º lado do triângulo: ");
    scanf("%d", &lado2);

    printf("Digite o 3º lado do triângulo: ");
    scanf("%d", &lado3);

    // Descobrindo se os 3 comprimentos formam um triângulo

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){

        if (lado1 == lado2 == lado3)
            printf("Esse Triângulo é Equilatero");

        else{

            if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
                printf("Esse Triângulo é Isosceles\n");
            else
                printf("Esse Triângulo é Escaleno\n");
        }
    }
    else
        printf("Os 3 lados NÂO formam um triângulo!\n");


return 0;
}
