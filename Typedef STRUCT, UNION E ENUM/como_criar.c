#include <stdio.h>
#include <locale.h>

typedef struct {

    char nome[60], sexo;
    int idade;

}Pessoa;

int main(){

    setlocale(LC_ALL, "");

    Pessoa pessoa1;

    // eu atribuindo
    pessoa1.sexo = 'M';
    //pessoa1.idade = 49;
    strcpy(pessoa1.nome, "Maria José Alves da Silva");

    //lendo do teclado
    printf("\nDigite sua idade: ");
    scanf("%d", &pessoa1.idade);

    printf("\n ==== Daddos Cadrastados ====\n\nNome: %s\nIdade: %d\nSexo: %c.\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
}


