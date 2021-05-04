/**
* Crie uma funcao recursiva que retorne a SOMA dos elementos
* de um vetor de inteiros com 4 elementos.
*/

#include <stdio.h>

int sumArr(int *arr, int n){
    int sum = 0;

    if(n == 0)
        return arr[0];

    sum += arr[n] + sumArr(arr, n - 1);
    return sum;
}

int main(void){
    int arr[4];

	for(int index = 0; index < 4; index++)
        scanf("%i", &arr[index]);

    printf("%i", sumArr(arr, 3));

	return 0;
}
