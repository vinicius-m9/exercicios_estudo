/**
* Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
* n�meros naturais de 0 at� N em ordem CRESCENTE e DECRESCENTE.
*/

#include<stdio.h>

void main(){
    int N;

    scanf("%i", &N);

    for(int c=0; c<=N; c++){
        printf("%i\n", c);
    }

    for(int c=N ; c>=0; c--){
        printf("%i\n", c);
    }
}
