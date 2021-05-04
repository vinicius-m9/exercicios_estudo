/*
* Faca um programa que leia um valor inteiro N NAO NEGATIVO. Se o
* valor de N for invalido, a mensagem ("Numero deve ser POSITIVO!
* Digite um numero VALIDO!") deve ser impressa e o usuario deve
* digitar outro valor ate que ele seja valido (ou seja, POSITIVO).
* Em seguida, leia, do teclado, um vetor V contendo N posicoes de
* inteiros, em que cada valor devera ser MAIOR OU IGUAL A 2. Caso
* o numero digitado NAO seguir a condicao (>=2), a mensagem ("Digite
* um numero >=2!") deve ser impressa para o usuario digitar um
* outro valor ate que ele seja valido. Por fim, os elementos do
* vetor devem ser impressos. Esse vetor devera ser alocado dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *V = NULL, N;

  
  scanf("%d", &N);

  while(N <= 0){
    printf("Numero deve ser POSITIVO! Digite um numero VALIDO!");

    scanf("%d", &N);
  }

  V = (int *) malloc(N * sizeof(int));

  for(int index = 0; index < N; index++){
    scanf("%d", V + index);

    while(*(V + index) < 2){
      printf("Digite um numero >=2!");
      scanf("%d", V + index);
    }
  }

  for(int index = 0; index < N; index++)
    printf("%d ", *(V + index));

	return 0;
}
