/*
* Implemente uma função que RECEBA como parâmetro uma MATRIZ A
* contendo 3 linhas e 3 colunas. A função deve RETORNAR o ponteiro
* para um VETOR B de tamanho 3 ALOCADO DINAMICAMENTE, em que cada
* POSIÇÃO de B é a SOMA dos números daquela COLUNA da matriz. Por
* fim, os elementos de B devem ser IMPRESSOS no main().
*/

#include <stdio.h>
#include <stdlib.h>

int* createArr(int *A);

int main(void){
  int *A = (int *) malloc(9 * sizeof(int)), *B = NULL;

  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
      scanf("%d", A + (i * 3 + j));
  
  B = createArr(A);

  for(int index = 0; index < 3; index++)
    printf("%d ", *(B + index));

	return 0;
}

int* createArr(int *A){
  int *b = (int *) calloc(3, sizeof(int));

  for(int j = 0; j < 3; j++)
    for(int i = 0; i < 3; i++)
      *(b + j) += *(A + (i * 3 + j));
  
  return b;
}
