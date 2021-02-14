/*
Faça um programa que leia um número inteiro e imprima seu antecessor e seu sucessor.
*/

#include<stdio.h>

void main(){
    int num;

    scanf("%i", &num);

    printf("Antecessor de %i eh: ", num);
    printf("%i\n", --num);
    num++;
    printf("Sucessor de %i eh: ", num);
    printf("%i", ++num);
}
