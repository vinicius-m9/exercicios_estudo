/**
* Faca um programa que possua um array de nome A que armazene seis numeros
* inteiros. O programa deve executar os seguintes passos:
*
* a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
* b) Armazene em UMA variavel a soma dos valores das posicoes A[0], A[1]
*  e A[5] do array e mostre na tela essa soma.
* c) Modifique o array na posicao 4, atribuindo a essa posicao o valor 100.
* d) Mostre na tela cada valor do array A, um em cada linha.
*/

#include <stdio.h>

int main(void){
    int A[6] = {1, 0, 5, -2, -5, 7}, sum = A[0] + A[1] + A[5];

    printf("A soma eh: %i.\n", sum);

    A[4] = 100;

    for(int index = 0; index < 6; index++)
        printf("%i\n", A[index]);

    return 0;
}
