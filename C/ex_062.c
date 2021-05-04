/**
* Faca um programa que leia, pelo TECLADO, DOIS valores
* INTEIROS e chame uma funcao que receba estes DOIS valores
* de ENTRADA e RETORNE o MAIOR valor na PRIMEIRA VARIAVEL
* e o MENOR valor na SEGUNDA VARIAVEL. Imprima, atravas da
* funcao main(), o conteudo das DUAS VARIAVEIS na tela.
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
