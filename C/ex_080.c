/*
* Escreva uma função que RECEBA como parâmetro um valor N e
* RETORNE o PONTEIRO para uma matriz alocada dinamicamente
* contendo N linhas e N colunas. Essa matriz deve conter o
* valor 1 na DIAGONAL PRINCIPAL e 0 nas DEMAIS POSIÇÕES. Por
* fim, a matriz deve ser impressa no main(). 
*/

#include <stdio.h>
#include <stdlib.h>

int* initArr(int n);

int main(void){
  int *arr = NULL, N;

  scanf("%d", &N);

  arr = initArr(N);

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++)
      printf("%d ", *(arr + (i * N + j)));
    
    printf("\n");
  }

	return 0;
}

int* initArr(int n){
  int *p = (int *) malloc(n * n * sizeof(int));

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
      *(p + (i * n + j)) = 0;

      if(i == j)
        *(p + (i * n + j)) = 1;
    }

  return p;
}
