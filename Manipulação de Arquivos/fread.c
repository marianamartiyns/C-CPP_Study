// fread - nao pegou

#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[100], conteudo[100];
    int caract = 0;

    while(1){

        printf("\nDigite fechar para encerrar.\n");
        printf("Informe o arquivo: ");
        scanf("%s", nome);

        if (strcmp(nome, 'fechar') == 0){
            printf("Encerrando");
            break;}

    FILE *pf;
    pf = fopen(nome, "rb");

    if (pf == NULL){
        printf("ARQUIVO INVALIDO\n");
        break;}

    else {
        printf("Exibir quantos caracteres? ");
        scanf("%d", &caract);
        fread(&conteudo, sizeof(char), caract, pf);

        printf("\nO conteúdo do arquivo é:\n %s \n", conteudo);
        fclose(pf); }

        return 0;
    }




}
