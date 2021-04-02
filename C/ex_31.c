/**
* Faca um programa que leia, pelo teclado, um vetor inteiro com
* 6 posicoes. Verifique se existem valores IGUAIS e os escreva na
* tela. Caso NAO existam valores iguais, a seguinte mensagem deve
* ser impressa: "Nao existem valores iguais!".
*/

#include <stdio.h>

int main(void){
    int arr[6], equalBool = 0;

    for(int index = 0; index < 6; index++)
        scanf("%i", &arr[index]);

    printf("\n");

    for(int index = 0; index < 6; index++){
        int equalNumber = 0;

        for(int indexAux = 0; indexAux < index; indexAux++)
            if(arr[indexAux] == arr[index]){
                equalNumber += 1;
                equalBool = 1;
            }

        if(equalNumber == 1)
            printf("%i\n", arr[index]);
    }

    if(equalBool == 0)
        printf("Nao existem valores iguais!");

    return 0;
}
