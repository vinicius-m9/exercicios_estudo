/**
* Escreva um programa que leia um n�mero inteiro e calcule a soma de
* todos os divisores desse n�mero, com exce��o dele pr�prio. Exemplo:
* a soma dos divisores do n�mero 66 � 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
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
