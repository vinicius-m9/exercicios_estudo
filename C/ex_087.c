/**
* Modifique o algoritmo Selection Sort para que os numeros sejam
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

  int aux, indexHigher;

  for (int index = 0; index < N; index++){
    indexHigher = index;

    for (int indexAux = index; indexAux < N; indexAux++)
      if (arr[indexHigher] < arr[indexAux])
        indexHigher = indexAux;
    
    if (indexHigher != index){
      aux = arr[index];
      arr[index] = arr[indexHigher];
      arr[indexHigher] = aux;
    }
  }

  for (int index = 0; index < N; index++)
    printf("%d ", arr[index]);

	return 0;
}
