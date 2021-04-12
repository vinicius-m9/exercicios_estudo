/**
* Implemente o algoritmo Bubble Sort ordenando os elementos de forma
* CRESCENTE. Vale ressaltar que o tamanho e os elementos do vetor
* devem ser definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int * bubbleSort(int *arr, int N);

int main(void){
  int N;

  scanf("%d", &N);

  int *arr = (int *) malloc(N * sizeof(int));

  for (int index = 0; index < N; index++)
    scanf("%d", arr + index);

  arr = bubbleSort(arr, N);

  for (int index = 0; index < N; index++)
    printf("%d ", *(arr + index));

	return 0;
}

int * bubbleSort(int *arr, int N){
  int sorting, aux, stopCondition = N - 1;

  do {
    sorting = 0;

    for (int index = 0; index < stopCondition; index++){
      if (arr[index] > arr[index + 1]){
        aux = arr[index];
        arr[index] = arr[index + 1];
        arr[index + 1] = aux;

        sorting = 1;
      }
    }

    stopCondition--;
  } while (sorting);

  return arr;
}
