/**
* Implemente o algoritmo Selection Sort ordenando os elementos
* de forma CRESCENTE. Vale ressaltar que o tamanho e os elementos
* do vetor devem ser definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int * selectionSort(int *arr, int N);

int main(void){
  int N;

  scanf("%d", &N);

  int *arr = (int *) malloc(N * sizeof(int));

  for (int index = 0; index < N; index++)
    scanf("%d", arr + index);

  arr = selectionSort(arr, N);

  for (int index = 0; index < N; index++)
    printf("%d ", *(arr + index));

	return 0;
}

int * selectionSort(int *arr, int N){
  int aux, indexLowest;

  for (int index = 0; index < N; index++){
    indexLowest = index;

    for (int indexAux = index; indexAux < N; indexAux++)
      if (arr[indexLowest] > arr[indexAux])
        indexLowest = indexAux;
    
    if (indexLowest != index){
      aux = arr[index];
      arr[index] = arr[indexLowest];
      arr[indexLowest] = aux;
    }
  }

  return arr;
}
