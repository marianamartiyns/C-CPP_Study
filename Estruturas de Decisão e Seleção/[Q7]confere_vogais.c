//  Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("\n  %c é uma vogal", letra);

    else
        printf("\n  %c não é uma vogal", letra);

    return 0;
}
