/* 

-> Aula 38

    OPERADORES RELACIONAIS

menor que (a < b)
maior que (a > b)
menor ou igual (a <= b)
maior ou igual (a >= b)
igual (a == b)
diferente (a != b)

-> Aula 39 - IF
-> Aula 40 - ELSE

NÃO PRECISA DOS 2 PONTOS DEPOIS DO IF OU ELSE

-> Aula 41 - verdadeiro ou falso

1 == verdadeiro
0 == falso

-> Aula 42 - endetacao e uso de chaves

endetação é um recurso apenas visual. se for só uma linha/comando não precisa, se tiver mais de um comando precisa!!

exemplo com if:

if (a > b){

    *comando 1*
    *comando 2*

    }

-> Aula 43 - Operador ternário

condição ? verdadeiro : falso

ex:
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

    printf("\n Digite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("Valor Negativo!\n") : printf("Valor Positivo ou Zero!\n");

    return 0;
}

/*
-> Aula 44 - Decisão aninhadas

pode ser dentro do if tbm

if {}

else{
    if
    else
}

-> Aula 45 - Decisão aninhadas com ternario

a < 0 ? printf("Valor Negativo!\n") : 
    a > 0 ?  printf("Valor Positivo!\n") : a < 0 ? printf("Zero!\n");

*/
