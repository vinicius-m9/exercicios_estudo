/**
* Faça um programa que leia um número inteiro positivo N e imprima todos os
* números naturais de 0 até N em ordem CRESCENTE e DECRESCENTE.
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
