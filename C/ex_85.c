/**
* Modifique o algoritmo Bubble Sort para que os numeros sejam
* ordenados de forma DECRESCENTE (do maior para o menor). Vale
* ressaltar que o tamanho e os elementos do vetor devem ser
* definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N;

  scanf("%d", &N);

  int arr[N];

  for (int index = 0; index < N; index++)
    scanf("%d", &arr[index]);

  int sorting, aux, stopCondition = N - 1;

  do {
    sorting = 0;

    for (int index = 0; index < stopCondition; index++){
      if (arr[index] < arr[index + 1]){
        aux = arr[index];
        arr[index] = arr[index + 1];
        arr[index + 1] = aux;

        sorting = 1;
      }
    }

    stopCondition--;
  } while (sorting);

  for (int index = 0; index < N; index++)
    printf("%d ", arr[index]);

	return 0;
}
