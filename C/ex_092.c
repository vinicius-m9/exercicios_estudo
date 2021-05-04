/**
* Dado um NUMERO, o TAMANHO (tam) do VETOR[tam] com os elementos,
* definidos pelo usuario, JA ORDENADOS, implemente um algoritmo
* para inserir este NUMERO na sua POSICAO correta. Desloque os outros
* numeros, se necessario (considere que ha espaço vago no vetor).
*/

#include <stdio.h>
#include <stdlib.h>

int * insertNumber(int *arr, int N, int number);

int main(void){
  int number, tam;

  scanf("%d %d", &number, &tam);

  int *arr = (int *) malloc((tam + 1) * sizeof(int));

  for (int index = 0; index < tam; index++)
    scanf("%d", arr + index);

  arr = insertNumber(arr, tam, number);

  for (int index = 0; index < tam + 1; index++)
    printf("%d ", *(arr + index));

	return 0;
}

int * insertNumber(int *arr, int tam, int number){
  int aux;

  arr[tam] = number;

  for (int index = 0; index < tam; index++){
    if (arr[index] > arr[tam]){
      aux = arr[index];
      arr[index] = arr[tam];
      arr[tam] = aux;
    }
  }

  return arr;
}
