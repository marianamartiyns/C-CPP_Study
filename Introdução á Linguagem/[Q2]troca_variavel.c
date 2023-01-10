/* Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. 
Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. 
Traduza seu algoritmo para a linguagem C e exiba os valores na tela. */

#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>

int main() {

    setlocale(LC_ALL, ""); //Padrão do sistema operacional

    float a, b, c;
    printf("\nEscreva 2 valores para o algoritimo troca-los de variáveis.\n");

    printf("\nDigite o valor para a variável \"a\": ");
    scanf("%f", &a);
    printf("Digite o valor da variável \"b\": ");
    scanf("%f", &b);

    printf("\nO valor inicial da variável \"a\" foi: %.2ff\nO valor inicial da variável \"b\" foi: %.2f", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nCom os valores trocados a variável \"a\" ficou: %.2f\nE o valor de \"b\" ficou: %.2f", a, b);

    return 0;
}