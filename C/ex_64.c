/*
* Crie uma funcao que receba como parametro um VETOR de INTEIROS
* com TAMANHO CINCO e o imprima. NAO utilize indices para percorrer
* o vetor, apenas ARITMETICA DE PONTEIROS.
*/

#include <stdio.h>
#include <stdlib.h>

void printArr(int *pArr);

int main(void){
	int arr[5], *p = arr;

	for(int i = 0; i < 5; i++)
        scanf("%d", p + i);

    printArr(arr);

	return 0;
}

void printArr(int *arr){
    for(int i = 0; i < 5; i++)
        printf("%d\n", *(arr + i));
}
