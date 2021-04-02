/**
* Implemente um algoritmo que contenha uma funcao que permita
* passar por parametro DOIS numeros inteiros A e B, lidos pelo
* TECLADO. A funcao devera calcular a SOMA entre estes DOIS
* numeros e armazenar o resultado na variavel A. Esta funcao
* NAO devera possuir retorno, mas devera MODIFICAR o valor do
* PRIMEIRO PARAMETRO. Imprima os valores de A e B na funcao main().
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
