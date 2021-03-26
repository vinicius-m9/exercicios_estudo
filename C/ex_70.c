/*
* Implemente uma fun��o que receba como par�metro um array de n�meros
* do tipo float de tamanho N e RETORNE quantos n�meros NEGATIVOS h�
* nesse array. Essa fun��o deve obedecer ao prot�tipo:
*
* int funcao(float *vet, int N);
*
* Ps: Os DADOS DE ENTRADA do algoritmos s�o o tamanho N e os elementos do array.
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
