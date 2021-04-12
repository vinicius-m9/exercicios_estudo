/**
* Modifique o algoritmo Insertion Sort para que os elementos sejam
* ordenados, de forma CRESCENTE,  na medida em que os recebem,
* ou seja, SEM ter todo o conjunto de  dados para coloca-los em ordem.
* Vale ressaltar que o tamanho (tam) e os elementos do vetor devem
* ser definidos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int tam;

  scanf("%d", &tam);

  int arr[tam], aux;

  for (int index = 0; index < tam; index++){
    scanf("%d", &arr[index]);

    for (int indexAux = 0; indexAux < index; indexAux++){
      if (arr[index] < arr[indexAux]){
        aux = arr[index];
        arr[index] = arr[indexAux];
        arr[indexAux] = aux;
      }
    }

    for (int indexAux = 0; indexAux < index + 1; indexAux++)
      printf("%d ", arr[indexAux]);
    
    printf("\n");
  }

	return 0;
}
