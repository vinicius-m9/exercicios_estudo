/**
* Faça um programa que leia DOIS números e mostre o MAIOR deles. Se, por acaso, os dois números
* forem IGUAIS, imprima a mensagem “Numeros Iguais!!”.
*/

#include<stdio.h>

void main(){
    int num1, num2;

    scanf("%i %i", &num1, &num2);

    if(num1>num2){
        printf("O %i eh o maior numero!", num1);
    } else if(num1<num2){
        printf("O %i eh o maior numero!", num2);
    } else {
        printf("Numeros Iguais!");
    }
}
