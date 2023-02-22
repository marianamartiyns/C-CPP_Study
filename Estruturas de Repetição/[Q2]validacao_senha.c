//Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem “Senha Invalida”.
//Quando a senha for informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser encerrado. Considere que a senha correta é o valor 123456.

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main() {

    setlocale(LC_ALL, "");

    int senha_valida = 123456, senha;

    printf("\nDigite sua senha: ");
        scanf("%d", &senha);


    while (senha != senha_valida){

        printf("\nSenha Invalida!\n");

        printf("\nDigite sua senha: ");
        scanf("%d", &senha);
    }

    printf("\nAcesso Permitido!\n");

return 0;
}
