// Criando um arquivo

#include <stdio.h>

FILE *CriaArquivo (char s[]) {
     FILE *p;
     p = fopen(s, "wb");
     return (p);
}

int main() {

    FILE *PontArquivo;
    PontArquivo = CriaArquivo("Teste.arq");

    if (PontArquivo != NULL)
        printf("Arquivo Criado com sucesso");
    else
        printf("O arquivo não foi criado");

}
