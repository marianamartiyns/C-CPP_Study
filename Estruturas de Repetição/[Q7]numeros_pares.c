// Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    int i, n;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    printf("O quadrado dos valores pares entre 1 e %d s�o:\n", n);

    for(i = 2; i <= n; i+= 2)

        printf("   %d� = %d \n", i, i * i);
}
