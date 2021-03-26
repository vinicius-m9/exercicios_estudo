/*
* Crie um programa que contenha um array com CINCO ELEMENTOS INTEIROS.
* Leia esse array do teclado e IMPRIMA os VALORES PARES.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arr[5], *p = arr;

	for(int index = 0; index < 5; index++)
        scanf("%d", p + index);

    for(int index = 0; index < 5; index++)
        if(*(p + index) % 2 == 0)
            printf("%d\n", *(p + index));

	return 0;
}
