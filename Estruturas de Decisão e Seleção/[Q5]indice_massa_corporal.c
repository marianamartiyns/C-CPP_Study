 /*
 O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg) pela altura (h em metros) elevada ao quadrado (IMC= m/h²).
Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo com a tabela abaixo:

                    IMC Interpretação

    Menor que 18,5              == Abaixo do peso
    Entre 18,5 e menor que 25   == Peso normal
    Entre 25 e menor que 30     == Sobrepeso
    Entre 30 e menor que 35     == Obesidade grau 1
    Entre 35 e menor que 40     == Obesidade grau 2
    Maior ou igual a 40         == Obesidade grau 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    float peso, altura, result;

    printf("Digite sua altura(em metros): ");
    scanf("%f", &altura);

    printf("Digite seu peso(em kg): ");
    scanf("%f", &peso);

    //(IMC= m/h²)
    result = peso / (altura * altura);

    if (result < 18.5)
        prinf("Seu IMC deu %.1f. Você está ABAIXO DO PESO.", result);

    else if (18.5 < result < 25)
        prinf("Seu IMC deu %.1f. Você está com o PESO NORMAL.", result);

    else if (25 < result < 30)
        prinf("Seu IMC deu %.1f. Você está com o SOBREPESO.", result);

    else if(30 < result < 35)
        prinf("Seu IMC deu %.1f. Você está com o OBESIDADE GRAU 1.", result);

    else if (35 < result < 40)
        prinf("Seu IMC deu %.1f. Você está com o OBESIDADE GRAU 2.", result);

    else if (result >= 40)
        prinf("Seu IMC deu %.1f. Você está com o OBESIDADE GRAU 3.", result);

    return 0;
}
