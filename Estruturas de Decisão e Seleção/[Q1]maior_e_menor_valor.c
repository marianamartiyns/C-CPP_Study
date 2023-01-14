// Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

#include <stdio.h>;
#include <stdlib.h>;

int main() {

    float valor1, valor2, valor3, maior, menor;

    printf("\nDigite o 1º valor: ");
    scanf("%f", &valor1);

    printf("\nDigite o 2º valor: ");
    scanf("%f", &valor2);

    printf("\nDigite o 3º valor: ");
    scanf("%f", &valor3);

// maior   
    if (valor1 > valor2){

        if (valor1 > valor3)
            maior = valor1;
        
        else
            maior = valor3;
    }

    else {
        if(valor2 > valor3)
            maior = valor2;

        else
            maior = valor3;
    }

// menor
    if (valor1 < valor2){

        if (valor1 < valor3)
            menor = valor1;
        
        else
            menor = valor3;
    }

    else {

        if(valor2 < valor3)
            menor = valor2;

        else
            menor = valor3;
    }

    printf("O maior valor inserido foi %.1f, e o menor foi %.1f", maior, menor);
    return 0;
}
