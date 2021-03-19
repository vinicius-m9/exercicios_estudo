/**
* Fa�a um programa que leia, pelo TECLADO, DOIS valores
* INTEIROS e chame uma fun��o que receba estes DOIS valores
* de ENTRADA e RETORNE o MAIOR valor na PRIMEIRA VARI�VEL
* e o MENOR valor na SEGUNDA VARI�VEL. Imprima, atrav�s da
* fun��o main(), o conte�do das DUAS VARI�VEIS na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void sortValue(int *A, int *B);

int main(void){
    int A, B;

    scanf("%i %i", &A, &B);

    sortValue(&A, &B);

    printf("%i\n%i", A, B);

	return 0;
}

void sortValue(int *A, int *B){
    int aux;

    if (*A > *B)
        return;

    aux = *A;
    *A = *B;
    *B = aux;
}
