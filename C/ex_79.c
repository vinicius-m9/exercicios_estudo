/*
* Escreva uma funcao que RECEBA um valor inteiro positivo N por
* PARAMETRO e RETORNE o ponteiro para um vetor de tamanho N
* alocado dinamicamente. Esse vetor devera ter os seus elementos
* preenchidos com CERTO VALOR, tambem PASSADO por parametro. Se
* N for NEGATIVO ou IGUAL A ZERO, um ponteiro NULO devera ser
* RETORNADO e IMPRESSO no main(). Entretanto, se N>0, o elemento
* passado como parametro deve ser INSERIDO no VETOR alocado
* dinamicamente que tambem deve ser IMPRESSO no main().
*/

#include <stdio.h>
#include <stdlib.h>

int* allocMemo(int N, int value);

int main(void){
  int *arr = NULL, N, value;

  scanf("%d %d", &N, &value);

  arr = allocMemo(N, value);

  if(arr == NULL){
    printf("NULL");
    return 0;
  }
  
  for(int index = 0; index < N; index++)
    printf("%d ", *(arr + index));

	return 0;
}

int* allocMemo(int N, int value){
  int *p = (int *) malloc(N * sizeof(int));

  if(N <= 0 || value <= 0){
    p = NULL;
    return p;
  }

  for(int index = 0; index < N; index++)
    *(p + index) = value;
  
  return p;
}
