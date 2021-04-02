/**
* Implemente um algoritmo que LEIA cinco valores e os armazene em um VETOR.
* Em seguida, mostre todos os valores lidos juntamente com a media dos valores.
*
* Ps: A media deve ser mostrada usando DUAS casas decimais.
*/

#include <stdio.h>

int main(void){
    float arr[5], sum = 0;

    for(int index = 0; index < 5; index++){
        scanf("%f", &arr[index]);
        sum += arr[index];
    }

    for(int index = 0; index < 5; index++)
        printf("%f\n", arr[index]);

    printf("%.2f", sum / 5);

    return 0;
}
