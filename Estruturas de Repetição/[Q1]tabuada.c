/* Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    int num, i;

    printf("\nDigite um número para ver sua tabuada: ");
    scanf("%d", &num);

    printf("\n== TABUADA DO %d ==\n", num);
    for (i = 1; i <= 10; i++)
            printf("\n%d x %d = %d\n", num, i, num*i);

return 0;
}
