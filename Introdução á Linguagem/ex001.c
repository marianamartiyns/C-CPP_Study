// Como ler do teclado sexo, idade, peso e altura do usuário?

int main() {

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo(F para Feminino ou M para Masculino): ");
    scanf("%c", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("O usuário é do sexo %c, tem %d anos, com %.2f metros de altura e pesa %.1f", sexo, idade, altura, peso);


    return 0;
}