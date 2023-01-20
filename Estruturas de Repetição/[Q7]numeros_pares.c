// Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    int i, n;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    printf("O quadrado dos valores pares entre 1 e %d são:\n", n);

    for(i = 2; i <= n; i+= 2)

        printf("   %d² = %d \n", i, i * i);
}
