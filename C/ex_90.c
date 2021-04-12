/**
* Implemente o algoritmo Insertion Sort ordenando os elementos
* de forma CRESCENTE. Vale ressaltar que o tamanho e os elementos
* do vetor devem ser definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int * insertionSort(int *arr, int N);

int main(void){
  int N;

  scanf("%d", &N);

  int *arr = (int *) malloc(N * sizeof(int));

  for (int index = 0; index < N; index++)
    scanf("%d", arr + index);

  arr = insertionSort(arr, N);

  for (int index = 0; index < N; index++)
    printf("%d ", *(arr + index));

	return 0;
}

int * insertionSort(int *arr, int N){
  int aux;

  for (int index = 1; index < N; index++){
    for (int indexAux = 0; indexAux < index; indexAux++)
      if (arr[index] < arr[indexAux]){
        aux = arr[index];
        arr[index] = arr[indexAux];
        arr[indexAux] = aux;
      }
  }

  return arr;
}
