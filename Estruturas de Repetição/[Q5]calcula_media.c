/* Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e imprima a m�dia semestral.
Fa�a com que o programa s� aceite notas v�lidas (uma nota v�lida deve pertencer entre o intervalo de 0 a 10).
Cada nota deve ser validada separadamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    float nota1, nota2, media;

    do{
        printf("\nDigite a 1� nota: ");
        scanf("%f", &nota1);
    } while(nota1 < 0 || nota1 > 10);

    do{
        printf("\nDigite a 2� nota: ");
        scanf("%f", &nota2);
    } while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("\nNota final: %.2f\n", media);
}
