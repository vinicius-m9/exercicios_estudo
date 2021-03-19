/**
* Faça um programa que leia, pelo TECLADO, DOIS (2) valores
* INTEIROS e chame uma função que receba estas DUAS variáveis
* e TROQUE o seu conteúdo, ou seja, esta função é chamada
* passando DUAS variáveis A e B por exemplo e, após a execução
* da função, A conterá o valor de B e B terá o valor de A. Após
* a troca, as variáveis atualizadas devem ser impressas na função
* main(). Vale ressaltar que ponteiros devem ser utilizados para
* resolver o exercício.
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
