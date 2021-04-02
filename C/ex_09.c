/**
* Faca um programa que leia DOIS numeros e mostre o MAIOR deles. Se, por acaso, os dois numeros
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
