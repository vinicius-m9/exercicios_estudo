/**
* Faca um programa que leia, pelo TECLADO, DOIS (2) valores
* INTEIROS e chame uma funcao que receba estas DUAS variaveis
* e TROQUE o seu conteudo, ou seja, esta funcao e chamada
* passando DUAS variaveis A e B por exemplo e, apos a execucao
* da funcao, A contera o valor de B e B tera o valor de A. Apos
* a troca, as variaveis atualizadas devem ser impressas na funcao
* main(). Vale ressaltar que ponteiros devem ser utilizados para
* resolver o exercicio.
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
