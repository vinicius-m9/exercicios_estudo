/*
* Escreva uma funcao que receba um valor inteiro positivo N por
* parametro e RETORNE o ponteiro para um vetor de tamanho N alocado
* dinamicamente. Se N for negativo ou igual a zero, um PONTEIRO NULO
* devera ser retornado e a frase "Ponteiro NULL." deve ser impressa.
* Caso contrario, deve-se imprimir "Ponteiro NAO NULL.".
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *p = NULL, N;

  scanf("%d", &N);

  p = (int *) malloc(N * sizeof(int));

  if(p == NULL || N == 0){
    printf("Ponteiro NULL.");
    return 0;
  }

  printf("Ponteiro NAO NULL.");

	return 0;
}
