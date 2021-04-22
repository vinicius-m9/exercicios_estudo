/**
* Modifique o algoritmo Quick Sort para que os numeros sejam
* ordenados de forma DECRESCENTE (do maior para o menor).
* Vale ressaltar que o tamanho e os elementos do vetor
* devem ser definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

void quickSort(int *arr, int initIndex, int finIndex);
void quick(int *arr, int initIndex, int finIndex, int *pivoIndex);

int main(void){
  int n;

  scanf("%d", &n);

  int *arr = (int *) malloc(n * sizeof(int));

  for (int index = 0; index < n; index++)
    scanf("%d", arr + index);

  quickSort(arr, 0, n - 1);

  for (int index = 0; index < n; index++)
    printf("%d ", *(arr + index));

	return 0;
}

void quickSort(int *arr, int initIndex, int finIndex) {
  if (initIndex < finIndex) {
    int pivoIndex = 0;

    quick(arr, initIndex, finIndex, &pivoIndex);
    quickSort(arr, initIndex, pivoIndex - 1);
    quickSort(arr, pivoIndex + 1, finIndex);
  }
}

void quick(int *arr, int initIndex, int finIndex, int *pivoIndex) {
  int leftIndex = initIndex, rigthIndex = finIndex;
  int pivo = arr[initIndex];

  while (leftIndex < rigthIndex) {
    while (arr[leftIndex] >= pivo)
      leftIndex++;
    
    while (arr[rigthIndex] < pivo)
      rigthIndex--;
    
    if (leftIndex < rigthIndex) {
      int aux = arr[leftIndex];
      arr[leftIndex] = arr[rigthIndex];
      arr[rigthIndex] = aux;
    }
  }

  arr[initIndex] = arr[rigthIndex];
  arr[rigthIndex] = pivo;

  *pivoIndex = rigthIndex;
}
