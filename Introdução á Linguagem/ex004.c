/* Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. 
Assuma que a conta será dividida igualmente. */ 

#include <locale.h>

int main(){

    float despesa, p_gorjeta, gorjeta, total_pessoa ;
    int pessoas;

    printf("Digite o valor da despesa do restaurante e o valor da gorgeta(porcentagem): ");
    scanf("%f %f", &despesa, &p_gorjeta);

    printf("Informe quantas pessoas dividiram a conta: ");
    scanf("%d", &pessoas);

    gorjeta = despesa * (p_gorjeta/100);
    total_pessoa = (gorjeta + despesa) / pessoas;

    printf("O valor que será pago por pessoa (%d) será: %.2f", pessoas, total_pessoa);

    return 0;
}