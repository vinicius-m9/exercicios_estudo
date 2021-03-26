/*
* Implemente uma função que receba como parâmetro um array de números
* do tipo float de tamanho N e RETORNE quantos números NEGATIVOS há
* nesse array. Essa função deve obedecer ao protótipo:
*
* int funcao(float *vet, int N);
*
* Ps: Os DADOS DE ENTRADA do algoritmos são o tamanho N e os elementos do array.
*/

#include <stdio.h>
#include <stdlib.h>

int funcao(float *vet, int N);

int main(void){
    int N;

    scanf("%d", &N);

    float arr[N], *pArr = arr;

    for(int index = 0; index < N; index++)
        scanf("%f", pArr + index);

    printf("%d", funcao(arr, N));

	return 0;
}

int funcao(float *vet, int N){
    int count = 0;

    for(int index = 0; index < N; index++)
        if(*(vet + index) < 0)
            count++;

    return count;
}
