/**
* Escreva um programa que leia um número inteiro positivo N e
* em seguida imprima N linhas do chamado triângulo de Floyd.
* Por exemplo, para N=6, o seguinte triângulo é formado:
*
* 1
* 2  3
* 4  5  6
* 7  8  9  10
* 11 12 13 14 15
* 16 17 18 19 20 21
*/

#include<stdio.h>

void main(){
    int N, i=1, aux=1;

    scanf("%i", &N);

    for(int c=1; c<=N; c++){
        while(aux<=c){
            printf("%i ", i);
            aux++;
            i++;
        }
        aux=1;
        printf("\n");
    }
}
