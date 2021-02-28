/**
* Implemente um algoritmo que LEIA do TECLADO um vetor de
* 10 posições e escreva na tela os números PARES e ÍMPARES.
* É importante destacar que o seu algoritmo NÃO deve imprimir,
* caso tiver, números PARES e ÍMPARES repetidos. Além disso,
* o MAIOR e MENOR número também deve ser impresso.
*/

#include <stdio.h>

int main(void){
    int arr[10], higherNumber, lowestNumber;

    for(int index = 0; index < 10; index++){
        scanf("%i", &arr[index]);

        if(index == 0){
            higherNumber = arr[index];
            lowestNumber = arr[index];
        }

        if(index != 0 && arr[index] > higherNumber)
            higherNumber = arr[index];

        if(index != 0 && arr[index] < lowestNumber)
            lowestNumber = arr[index];
    }

    printf("Numeros pares:\n");
    for(int index = 0; index < 10; index++){
        int equalNumber = 0;

        for(int indexAux = 0; indexAux < index; indexAux++)
            if(arr[indexAux] == arr[index])
                equalNumber = 1;

        if(arr[index] % 2 == 0 && equalNumber == 0)
            printf("%i\n", arr[index]);
    }

    printf("Numeros impares:\n");
    for(int index = 0; index < 10; index++){
        int equalNumber = 0;

        for(int indexAux = 0; indexAux < index; indexAux++)
            if(arr[indexAux] == arr[index])
                equalNumber = 1;

        if(arr[index] % 2 != 0 && equalNumber == 0)
            printf("%i\n", arr[index]);
    }

    printf("Maior: %i\n", higherNumber);
    printf("Menor: %i\n", lowestNumber);

    return 0;
}
