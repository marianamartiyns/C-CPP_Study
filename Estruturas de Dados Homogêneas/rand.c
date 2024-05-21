/*aula 103 - Função RAND()

gera valores aleatorios - ecistem sementes(seeds) que são um conjunto de números aleatorios e a sequencia é so alterada.

para que seja gerada uma sequencia direnfente em cada execução, precisamos informar nossa semente, um valor que seja difente em cada execução do nosso programa.

um valor muito útil como semente é a hora do computador que será diferente em cada execução do programa. Para utilizar a hora do computador, basta utilizar a função srand() uma unica vez, essa funcao altera a semente padrao, como a seguir:

srand(time(null));

para obter a hora atual do computador, precisamos da biblioteca time.h

#include <time.h>

*codigo*

--> aula 104 - como gerar números aleatorios dentro de um intervalo

pode ser feito com o operador matematica de resto da divisão (%):
rand() % 100 // intervalo de 0 a 99
*/