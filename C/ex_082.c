/*
* Implemente uma função que RECEBA como PARÂMETRO DOIS vetores
* (A e B) e o tamanho N de A e B. A função deve RETORNAR o
* ponteiro para um vetor C de tamanho N alocado dinamicamente,
* em que C[i] = A[i] + B[i].
*/

#include <stdio.h>
#include <stdlib.h>

int* mergeArr(int *a, int *b, int n);

int main(void){
  int *C = NULL, N;

  scanf("%d", &N);

  int *A = (int *) malloc(N * sizeof(int));

  for(int index = 0; index < N; index++)
    scanf("%d", (A + index));

  int *B = (int *) malloc(N * sizeof(int));
  
  for(int index = 0; index < N; index++)
    scanf("%d", (B + index));

  C = mergeArr(A, B, N);

  for(int index = 0; index < N; index++)
    printf("%d ", *(C + index));
  
	return 0;
}

int* mergeArr(int *a, int *b, int n){
  int *c = (int *) malloc(n * sizeof(int));

  for(int index = 0; index < n; index++)
    *(c + index) = *(a + index) + *(b + index);

  return c;
}
