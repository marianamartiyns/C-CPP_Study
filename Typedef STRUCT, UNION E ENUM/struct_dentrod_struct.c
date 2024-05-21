// Struct dentro de struct

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
}Datanasc;

typedef struct{
    Datanasc data;
    int idade;
    char sexo, nome[50];
}Pessoa;

int main(){
    Pessoa p1;

    printf("Digite seu nome: ");
    fgets(p1.nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);

    scanf("%c");
    printf("Digite seu sexo (F/M): ");
    scanf("%c", &p1.sexo);

    printf("Digite sua data de nascimento(DD MM AAAA): ");
    scanf("%d %d %d", &p1.data.dia, &p1.data.mes, &p1.data.ano);

    printf("NOME: %s\nIDADE: %d\nSEXO: %c\n", p1.nome, p1.idade, p1.sexo);
    printf("DATA DE NASCIMENTO: %d / %d / %d\n", p1.data.dia, p1.data.mes, p1.data.ano);
}
