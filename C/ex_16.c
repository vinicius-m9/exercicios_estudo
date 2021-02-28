/**
* Escreva um programa que leia um número inteiro e calcule a soma de
* todos os divisores desse número, com exceção dele próprio. Exemplo:
* a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

#include<stdio.h>

void main(){
    int n, sum=0;

    scanf("%i", &n);

    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum = sum+i;
        }
    }

    printf("%i", sum);
}
