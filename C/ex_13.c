/**
* Faca um programa que leia um numero inteiro N e depois
* imprima os N primeiros numeros naturais IMPARES e PARES.
*/

#include<stdio.h>

void main(){
    int N;

    scanf("%i", &N);

    for(int c=0; c<=N; c++){
        if(c%2 != 0){
            printf("%i\n", c);
        }
    }
    for(int c=0; c<=N; c++){
        if(c%2 == 0){
            printf("%i\n", c);
        }
    }
}
