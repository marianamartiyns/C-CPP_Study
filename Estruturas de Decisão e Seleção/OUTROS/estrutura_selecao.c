/* Aula 50 - Estrutura de seleção SWITCH CASE

Não da pra compara intevalo tipo esse numero é negativo ou positivo
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao;

    printf("1 - Cadastrar produto\n2- Vender Produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair\nDigite sua Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {

    case 1:
        printf("\nCadastrando novo produto.\n");
        break;

    case 2:
        printf("\nVendendo Produto\n");
        break;

    case 3:
        printf("\nBuscando Produto\n");
        break;
    
    case 4:
        printf("\nImprimindo Relatório\n");
        break;

    case 5:
        printf("\nSaindo...\n");
        break;
    
    default:
        printf("\nOpção Invalída!\n");
        break;
    }

    return 0;
}

/* Aula 51 - Estrutura de Seleção com caracter

#include <stdio.h>
#include <stdlib.h>

int main() {

    char opcao;

    printf("a - Cadastrar produto\nb- Vender Produto\nc - Buscar produto\nd - Imprimir\nz - Sair\nDigite sua Opção: ");
    scanf("%c", &opcao);

    switch(opcao) {

    case 'a':
        printf("\nCadastrando novo produto.\n");
        break;

    case 'b':
        printf("\nVendendo Produto\n");
        break;

    case 'c':
        printf("\nBuscando Produto\n");
        break;
    
    case 'd':
        printf("\nImprimindo Relatório\n");
        break;

    case 'z':
        printf("\nSaindo...\n");
        break;
    
    default:
        printf("\nOpção Invalída!\n");
        break;
    }

    return 0;
}

*/
