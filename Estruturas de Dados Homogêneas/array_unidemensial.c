// aula 98

/* é um conjunto de elemtos do mesmo tipo
- indice que começa em 0

--> aula 99

definindo/criando um vetor:

forma 1:
int vetIdade[10]; // tamanho  10

forma 2:
int num2[] = {1,2,3,4,5};

forma3:
int num3[5] = {1,2,3}; // o resto vai ser preenchido com 0;

forma4:
int num4[5] = {1,2,3,4,5,6}; // 6 vai ser perdido

forma5: 
int num5[5] = {0};

forma6:
char letras1[100];

forma7:
char vogais[5] = {'a','e','i','o', 'u'}

forma8:
float notas[3] = {2.4, 7.9, 10}

--> aula 100 - percorrendo e printando um vetor (usa for sabendo o tamanho)

ex:

int i;
char vogais = {'a','e','i','o', 'u'};

for (i=0; i<5;i++)
    printf("%c," vogais[i]);


--> aula 101 - lendo uma lista

int i, vetor[10];

for (i=0; i<10; i++){
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
}

--> aula 102 - pode alterar valores de um vetor percorrendo-o

qualquer operação que você deseja fazer em um vetor, você precisa percorrer todo o vetor
*/