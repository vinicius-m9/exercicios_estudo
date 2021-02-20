/*
Faça um programa que LEIA um valor inteiro e positivo N,
calcule e mostre o valor E, conforme a fórmula a seguir:

E = 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

#include<stdio.h>

void main(){
    int N, fat=1;
    float E=0;

    scanf("%i", &N);

    for(int c=1; c<=N; c++){
        for(int i=1; i<=c; i++){
            fat = fat * i;
        }
        E = E + (float)1/fat;
        fat = 1;
    }

    printf("%f", E);
}
