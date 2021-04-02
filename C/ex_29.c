/**
* Faca um programa que preencha um vetor com 5 numeros reais.
* Em seguida, calcule e mostre na tela a QUANTIDADE de numeros
* negativos e a SOMA dos numeros positivos desse vetor.
*/

#include <stdio.h>

int main(void){
    float arr[5], positiveSum = 0;
    int negativeCount = 0;

    for(int index = 0; index < 5; index++){
        scanf("%f", &arr[index]);

        if(arr[index] < 0)
            negativeCount += 1;
        else
            positiveSum += arr[index];
    }

    printf("%i\n%f", negativeCount, positiveSum);

    return 0;
}
