/**
* Modifique o algoritmo Insertion Sort para que os numeros sejam
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

  int aux;

  for (int index = 1; index < N; index++){
    for (int indexAux = 0; indexAux < index; indexAux++)
      if (arr[index] > arr[indexAux]){
        aux = arr[index];
        arr[index] = arr[indexAux];
        arr[indexAux] = aux;
      }
  }

  for (int index = 0; index < N; index++)
    printf("%d ", arr[index]);

	return 0;
}
