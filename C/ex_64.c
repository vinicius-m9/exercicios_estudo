/*
* Crie uma fun��o que receba como par�metro um VETOR de INTEIROS
* com TAMANHO CINCO e o imprima. N�O utilize �ndices para percorrer
* o vetor, apenas ARITM�TICA DE PONTEIROS.
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
