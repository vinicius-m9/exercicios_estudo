/*
* Implemente uma FUNÇÃO que receba, como parâmetro, um inteiro N
* e crie uma  MATRIZ ALOCADA DINAMICAMENTE contendo N linhas e N
* colunas. Essa matriz deve conter o valor 0 na DIAGONAL PRINCIPAL,
* o valor 1 nos elementos ACIMA DA DIAGONAL PRINCIPAL e o valor −1
* nos elementos ABAIXO DA DIAGONAL PRINCIPAL. Por fim, a MATRIZ deve
* ser RETORNADA e IMPRESSA no main().
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
    for(int j = 0; j < n; j++)
      if(i > j)
        *(p + (i * n + j)) = -1;
      else if(i < j)
        *(p + (i * n + j)) = 1;
      else
        *(p + (i * n + j)) = 0;

  return p;
}
