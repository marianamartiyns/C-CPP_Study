// fprintf e fscanf() - nao pegou

#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "");

    FILE *fp;
    char nome[40];
    int idade;

    fp = fopen("dados.txt", "w");

    if (fp == NULL){
        return 0;
    }

    fprintf(fp, "Ana Maria, 30\n");
    fprintf(fp, "João Silva, 25\n");
    fprintf(fp, "Pedro Souza, 40\n");

    fclose(fp);

    fp = fopen("dados.txt", "r");
    if (fp == NULL){
        return 0;
    }

    while (fscanf(fp, "%[^,], %d\n", nome, &idade) ==  2) {
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
    }

    fclose(fp);
    return 0;

}
