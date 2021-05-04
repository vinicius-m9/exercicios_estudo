/*
* Escreva uma função que RECEBA como parâmetro uma MATRIZ A
* com 3 linhas e 3 colunas e um VETOR B também com tamanho 3.
* A função deve RETORNAR o  ponteiro para um vetor C de tamanho
* 3 alocado dinamicamente, em que C é o produto da matriz A pelo
* vetor B. Um detalhe, o C deve ser impresso no main().
*/

#include <stdio.h>
#include <stdlib.h>

int* mergeArr(int *a, int *b);

int main(void){
  int *A = (int *) malloc(9 * sizeof(int));
  int *B = (int *) malloc(3 * sizeof(int));

  for(int index = 0; index < 9; index++)
    scanf("%d", A + index);
  
  for(int index = 0; index < 3; index++)
    scanf("%d", B + index);

  int *C = mergeArr(A, B);

  for(int index = 0; index < 3; index++)
    printf("%d ", *(C + index));

	return 0;
}

int* mergeArr(int *a, int *b){
  int *c = (int *) calloc(3, sizeof(int));

  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
      *(c + i) += *(a + (i * 3 + j)) * *(b + j);

  return c;
}
