/**
* LEIA um vetor com 10 numeros de ponto flutuante. Em seguida,
* ORDENE os elementos desse vetor e IMPRIMA o vetor na tela.
*/


#include <stdio.h>

int main(void){
    float arr[10], aux;

    for(int index = 0; index < 10; index++){
        scanf("%f", &arr[index]);

        for(int indexAux = 0; indexAux < index; indexAux++){
            if(arr[index] < arr[indexAux]){
                aux = arr[indexAux];
                arr[indexAux] = arr[index];
                arr[index] = aux;
            }
        }
    }

    for(int index = 0; index < 10; index++)
        printf("%.1f\n", arr[index]);

    return 0;
}
