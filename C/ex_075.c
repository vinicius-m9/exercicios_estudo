/*
* Escreva um programa que aloque dinamicamente uma MATRIZ de
* inteiros. As dimensoes da matriz deverao ser lidas do
* USUARIO, via teclado. Em seguida, escreva uma funcao que
* receba um valor e RETORNE 1, caso o valor esteja na matriz,
* ou RETORNE 0, no caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>

int findValue(int **arr, int *length, int value);

int main(void){
  int **arr = NULL, length[2], value;

  //length[0] = linha / length[1] = coluna
  scanf("%d %d %d", &length[0], &length[1], &value);

  //definicacao de um vetor de ponteiros (linhas)
  arr = (int **) malloc(length[0] * sizeof(int *));

  for(int i = 0; i < length[0]; i++)
    //definicacao de um vetor (colunas) para cada linha
    *(arr + i) = (int *) malloc(length[1] * sizeof(int));

  for(int i = 0; i < length[0]; i++)
    for(int j = 0; j < length[1]; j++)
      scanf("%d", *(arr + i) + j);

  printf("%d\n", findValue(arr, length, value));

	return 0;
}

int findValue(int **arr, int *length, int value){
  for(int i = 0; i < length[0]; i++)
    for(int j = 0; j < length[1]; j++)
      if(*(*(arr + i) + j) == value)
        return 1;

  return 0;
}
