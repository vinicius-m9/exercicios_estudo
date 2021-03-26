/*
* Implemente uma função que aceita como parâmetro um array de INTEIROS
* com N valores, e determina o MAIOR elemento do array e a QUANTIDADE
* de vezes que este elemento ocorreu no array. Por exemplo, para um
* array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
* função deve retornar para o programa que a chamou o valor 15 e o
* número 3 (indicando que o número 15 ocorreu 3 vezes). Os DADOS DE
* ENTRADA do algoritmo são o número N e os elementos do array.
*/

#include <stdio.h>
#include <stdlib.h>

int higherNumber(int *arr, int N, int *count);

int main(void){
	int N, higher, count = 0;

	scanf("%d", &N);

	int arr[N], *pArr = arr;

	for(int index = 0; index < N; index++)
        scanf("%d", pArr + index);

    higher = higherNumber(pArr, N, &count);

    printf("O numero %d ocorreu %d vezes.", higher, count);

	return 0;
}

int higherNumber(int *arr, int N, int *count){
    int higher;

    for(int index = 0; index < N; index++){
        if(index == 0)
            higher = *(arr + index);
        else if(higher < *(arr + index))
            higher = *(arr + index);

	}

    for(int index = 0; index < N; index++)
        if(*(arr + index) == higher)
            *count = *count + 1;

    return higher;
}
