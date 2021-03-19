/**
* Fa�a um programa que leia, pelo TECLADO, DOIS (2) valores
* INTEIROS e chame uma fun��o que receba estas DUAS vari�veis
* e TROQUE o seu conte�do, ou seja, esta fun��o � chamada
* passando DUAS vari�veis A e B por exemplo e, ap�s a execu��o
* da fun��o, A conter� o valor de B e B ter� o valor de A. Ap�s
* a troca, as vari�veis atualizadas devem ser impressas na fun��o
* main(). Vale ressaltar que ponteiros devem ser utilizados para
* resolver o exerc�cio.
*/

#include <stdio.h>
#include <stdlib.h>

void switchVar (int *A, int *B);

int main(void){
    int A, B;

    scanf("%i %i", &A, &B);

    switchVar(&A, &B);

    printf("%i\n%i", A, B);

	return 0;
}

void switchVar (int *A, int *B){
    int aux;

    aux = *A;
    *A = *B;
    *B = aux;
}
