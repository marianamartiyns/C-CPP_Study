//  Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("\n  %c � uma vogal", letra);

    else
        printf("\n  %c n�o � uma vogal", letra);

    return 0;
}
