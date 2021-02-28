/**
* Faça um programa que receba do usuário DOIS arrays, A e B,
* com 5 números inteiros cada. Crie um novo array C calculando
* C = A - B. Mostre na tela os dados do array C.
*/

#include <stdio.h>

int main(void){
    int A[5], B[5], C[5];

    for(int index = 0; index < 5; index++)
        scanf("%i", &A[index]);

    for(int index = 0; index < 5; index++)
        scanf("%i", &B[index]);

    for(int index = 0; index < 5; index++){
        C[index] = A[index] - B[index];
        printf("%i\n", C[index]);
    }

    return 0;
}
