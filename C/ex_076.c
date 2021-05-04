/*
* Faca uma funcao que RETORNE o PONTEIRO para um vetor de N
* elementos inteiros alocados dinamicamente. O array deve ser
* preenchido com valores de 0 a N − 1.
*/

#include <stdio.h>
#include <stdlib.h>

int* allocMemo(int length);

int main(void){
  int *arr = NULL, N;

  scanf("%d", &N);

  arr = allocMemo(N);

  for(int index = 0; index < N; index++)
    scanf("%d", arr + index);

  for(int index = 0; index < N; index++)
    printf("%d ", *(arr + index));
  
  return 0;
}

int* allocMemo(int length){
  int *p = NULL;

  p = (int*) malloc(length * sizeof(int));

  return p;
}