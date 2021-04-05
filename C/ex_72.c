/*
* Escreva um algoritmo que mostre o TAMANHO em byte que cada tipo
* de dados ocupa na memoria: char, int, float, double.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("Char: %d\n", sizeof(char));
  printf("Int: %d\n", sizeof(int));
  printf("Float: %d\n", sizeof(float));
  printf("Double: %d\n", sizeof(double));

	return 0;
}
