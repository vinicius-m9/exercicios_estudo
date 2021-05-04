/*
* Elabore um programa que leia do usuario o tamanho de um
* vetor a ser lido. Em seguida, faca a alocacao dinamica
* desse vetor. Alem disso, leia o vetor do usuario e o imprima.
* Por fim, o vetor criado deve ser desalocado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *p = NULL, N;

  scanf("%d", &N);

  p = (int *) malloc(N * sizeof(int));

  for(int index = 0; index < N; index++)
    scanf("%d", p + index);
  
  for(int index = 0; index < N; index++)
    printf("%d ", *(p + index));
  
  free(p);
  p = NULL;

	return 0;
}
