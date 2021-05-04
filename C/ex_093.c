/**
* Modifique o algoritmo Merge Sort para que os numeros sejam
* ordenados de forma DECRESCENTE (do maior para o menor).
* Vale ressaltar que o tamanho e os elementos do vetor
* devem ser definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *arr, int initIndex, int finIndex);
void merge(int *arr, int initIndex, int midlleIndex, int finIndex);

int main(void) {
  int n;

  scanf("%d", &n);

  int *arr = (int *) malloc(n * sizeof(int));

  for (int index = 0; index < n; index++)
    scanf("%d", arr + index);

  mergeSort(arr, 0, n - 1);

  for (int index = 0; index < n; index++)
    printf("%d ", *(arr + index));

	return 0;
}

void mergeSort(int *arr, int initIndex, int finIndex) {
  if (initIndex < finIndex) {
    int midlleIndex = (initIndex + finIndex) / 2;

    mergeSort(arr, initIndex, midlleIndex);
    mergeSort(arr, midlleIndex + 1, finIndex);
    merge(arr, initIndex, midlleIndex, finIndex);
  }
}

void merge(int *arr, int initIndex, int midlleIndex, int finIndex) {
  int length = finIndex - initIndex + 1;
  int *tempArr = (int *) malloc(length * sizeof(int));
  int leftIndex = initIndex, rigthIndex = midlleIndex + 1;

  for (int index = 0; index < length; index++) {
    if (leftIndex <= midlleIndex && rigthIndex <= finIndex)
      if (arr[leftIndex] > arr[rigthIndex])
        tempArr[index] = arr[leftIndex++];
      else
        tempArr[index] = arr[rigthIndex++];
    else
      if (leftIndex <= midlleIndex)
        tempArr[index] = arr[leftIndex++];
      else
        tempArr[index] = arr[rigthIndex++];
  }

  int mergedIndex = initIndex;
  for (int index = 0; index < length; index++)
    arr[mergedIndex++] = tempArr[index];
  
  free(tempArr);
}
