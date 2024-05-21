/* -> Aula 46 - Operador Logico de negação !()

TABELA VERDADE: x   !x
                v   f        // se nega a condição verdadeira ela vira falso
                f   v

! (expressão logica ex if)


-> Aula 47 - Operador Logico e (&&)

TABELA VERDADE: a   b       a & b
                V   V         V
                v   f         f
                f   v         f
                f   f         f


ex sem &&:

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &sexo, &idade);

    if (sexo == 'm'){

        if(idade == 18)
            printf("Alistamento Obrigatorio!");
        else
            printf("Dispensado!");
    }

    else
        printf("Dispensada my lady!");

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &sexo, &idade);

    if (sexo == 'm' && idade == 18)
        printf("Alistamento Obrigatorio!");

    else
        printf("Dispensada my lady!");

    return 0;
}

/* 
-> Aula 48 - Operador Logico ou (||)

TABELA VERDADE: a   b       a || b
                v   v         v
                v   f         v
                f   v         v
                f   f         f

*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5 || idade >= 60 )
        printf("Tem direito a gratuidade!");

    else
        printf("Não tem direito a gratuidade!");

    return 0;
}

/*Aula 90  - Diferença entre os operadores logicos && e &

& - o computador faz uma comparação bit a bit. INDEPENDENTE do resultado do primeiro teste

&& - o programa fica um pouco mais eficiente uma vez que a realização do segundo teste fica atrelada ao resultado do primeiro teste */