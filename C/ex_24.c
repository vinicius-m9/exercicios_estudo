/**
* Implemente um algoritmo que leia do teclado SEIS valores inteiros
* e em seguida mostre na tela os valores lidos na ORDEM INVERSA.
*/

#include <stdio.h>

int main(void){
    int arr[6];

    for(int index = 0; index < 6; index++)
        scanf("%i", &arr[index]);

    for(int index = 5; index >= 0; index--)
        printf("%i\n", arr[index]);

    return 0;
}
