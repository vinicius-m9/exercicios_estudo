/*
* Crie um programa que contenha um array de inteiros com CINCO
* elementos. Utilizando apenas aritmética de ponteiros, leia esse
* array do teclado e IMPRIMA o DOBRO de cada valor lido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arr[5], *pArr = arr;

	for(int index = 0; index < 5; index++)
        scanf("%d", pArr + index);

    for(int index = 0; index < 5; index++)
        printf("%d\n", *(pArr + index) * 2);

	return 0;
}
