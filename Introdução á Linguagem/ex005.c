/* Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo que são descontados 8% para imposto de renda.
*/

#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int dias;
    float quant_liquida, desconto, total;

    printf("\nDigite quantos dias foram trabalhados: ");
    scanf("%d", &dias);

    quant_liquida = dias * 45;
    desconto = quant_liquida * 8 / 100;

    total = quant_liquida - desconto;

    printf("A quantia líquida paga pelos %d trabalhados será R$ %.2f.", dias, total);

    return 0;
}