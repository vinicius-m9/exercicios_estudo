/**
* Implemente um algoritmo que contenha uma função que permita
* passar por parâmetro DOIS números inteiros A e B, lidos pelo
* TECLADO. A função deverá calcular a SOMA entre estes DOIS
* números e armazenar o resultado na variável A. Esta função
* NÃO deverá possuir retorno, mas deverá MODIFICAR o valor do
* PRIMEIRO PARÂMETRO. Imprima os valores de A e B na função main().
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
