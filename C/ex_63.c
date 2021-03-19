/**
* Implemente um algoritmo que contenha uma fun��o que permita
* passar por par�metro DOIS n�meros inteiros A e B, lidos pelo
* TECLADO. A fun��o dever� calcular a SOMA entre estes DOIS
* n�meros e armazenar o resultado na vari�vel A. Esta fun��o
* N�O dever� possuir retorno, mas dever� MODIFICAR o valor do
* PRIMEIRO PAR�METRO. Imprima os valores de A e B na fun��o main().
*/

#include <stdio.h>
#include <stdlib.h>

void aSum(int *A, int B);

int main(void){
    int A, B;

    scanf("%i %i", &A, &B);

    aSum(&A, B);

    printf("%i\n%i", A, B);

	return 0;
}

void aSum(int *A, int B){
    *A = *A + B;
}
